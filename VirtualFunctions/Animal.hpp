#pragma once
#include <iostream>

class Animal {
public:
    virtual void speak() const;  // �麯��
};

class Dog : public Animal {
public:
    void speak() const override;
};

class Cat : public Animal {
public:
    void speak() const override;
};

// ʾ�����к���
void runVirtualFunctionDemo();
