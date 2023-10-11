#pragma once
#include "iostream"
#include "queue"
#include "list"
#include "string"
#include "memory"

#include "detector.hh"
#include "task.hh"

class Kernel {
private:
    std::list<std::unique_ptr<Detector> > detector_list_;

    std::queue<std::unique_ptr<Task> > task_queue_debug_;
    std::queue<std::unique_ptr<Task> > task_queue_positive_;
    std::queue<std::unique_ptr<Task> > task_queue_negtive_;

public:
    Kernel() {}

    void Read_Detector()
    {
        std::list<std::unique_ptr<Detector> >::iterator detector_iterator;

        for (
            detector_iterator = detector_list_.begin();
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

    void Handle_Task();

    void Run();
};