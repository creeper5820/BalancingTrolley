#pragma once

class Task {
private:
public:
    Task() {}

    virtual void Handler() = 0;
};