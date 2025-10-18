#pragma once

#include"animal.h"
//#include"dog.h"
class Dog;
class Human:public Animal
{
public:
    Human() = default;
    Human(std::string name) :Animal(name) {}

    Animal* GetFriend()override;

    void Action() override
    {
        std::cout << GetName() << "‚ª‚Æ‚Ñ‚¾‚µ‚Ä‚«‚½\n";

    }



};