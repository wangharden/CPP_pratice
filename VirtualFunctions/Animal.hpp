#pragma once
#include <iostream>

class Animal {
public:
    virtual void speak() const;  // 虚函数
};

class Dog : public Animal {
public:
    void speak() const override;
};

class Cat : public Animal {
public:
    void speak() const override;
};

// 示例运行函数
void runVirtualFunctionDemo();
