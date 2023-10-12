#pragma once
#include "iostream"
#include "list"
#include "memory"
#include "queue"
#include "string"

#include "detector.hh"
#include "task.hh"

class Kernel {
private:
    std::list<std::unique_ptr<Detector>> detector_list_;

    std::queue<std::unique_ptr<Task>> task_queue_debug_;
    std::queue<std::unique_ptr<Task>> task_queue_positive_;
    std::queue<std::unique_ptr<Task>> task_queue_negtive_;

public:
    Kernel() { }

    // template <class Detector_User>
    // void Push_Detector(Detector_User* detector_ptr)
    // {
    //     detector_list_.push_back(std::make_unique<Detector_User>(*detector_ptr));
    // }

    void Push_Detector(std::unique_ptr<Detector> detector)
    {
        detector_list_.push_back(std::move(detector));
    }

    void Read_Detector()
    {
        for (
            auto detector_iterator = detector_list_.begin();
            detector_iterator != detector_list_.end();
            detector_iterator++) {

            if ((**detector_iterator).Check()) {

                auto ptask_temp = (**detector_iterator).Run();

                if (ptask_temp)
                    switch (ptask_temp->Get_Task_Level()) {

                    case task_debug:
                        task_queue_debug_.push(std::move(ptask_temp));
                        break;

                    case task_positive:
                        task_queue_positive_.push(std::move(ptask_temp));
                        break;

                    case task_negtive:
                        task_queue_negtive_.push(std::move(ptask_temp));
                        break;

                    default:
                        break;
                    }
            }
        }
    }

    void Handle_Task()
    {
        std::queue<std::unique_ptr<Task>>* task_queue_group[]
            = { &task_queue_debug_,
                  &task_queue_positive_,
                  &task_queue_negtive_ };

        int number_queue = sizeof(task_queue_group) / sizeof(task_queue_group[0]);

        for (int count_for = 0; count_for < number_queue; count_for++) {

            auto task_queue_temp = std::move(*(task_queue_group[count_for]));

            while (!task_queue_temp.empty()) {

                auto task_temp = std::move(task_queue_temp.front());
                task_temp->Handler();
                task_queue_temp.pop();
            }
        }
    }

    void Theard()
    {
        Read_Detector();
        Handle_Task();
    }
};