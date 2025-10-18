#pragma once

#include <string>
#include<iostream>
class Animal
{
private:
    std::string m_name;
    Animal* m_friend=nullptr;

public:
    Animal():m_name("ñºñ≥Çµ"){}
    Animal(std::string name):m_name(name){}
   virtual ~Animal() = default;

    void SetName(std::string name) { m_name = name; }

protected:
    std::string GetName() { return m_name; }
public:
   virtual Animal* GetFriend() { return nullptr; }
   virtual void Action() = 0;//èÉêàâºëzä÷êî pure virtual function

};