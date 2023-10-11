#pragma once

enum Task_Level {
    task_debug,
    task_positive,
    task_negtive
};

class Task {
private:
    int task_level_ = task_negtive;

public:
    Task() {}

    Task(int task_level)
        : task_level_(task_level)
    {
    }

    virtual void Handler() = 0;

    void Set_Task_Level(int task_level)
    {
        task_level_ = task_level;
    }

    int Get_Task_Level()
    {
        return task_level_;
    }
};