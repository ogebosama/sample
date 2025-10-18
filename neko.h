#pragma once

#include "animal.h"
#include"human.h"
class Cat :public Animal
{
public:
    Cat() = default;
    Cat(std::string name) :Animal(name) {}
    Animal* GetFriend()override
    {
        return new Human("‚ ‚«‚Ù");
    }


    void Action() override
    {
        std::cout << GetName() << "‚Íƒjƒƒ[‚Æ‚È‚¢‚½\n";

    }




};