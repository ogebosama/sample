#pragma once

#include "animal.h"
//#include"neko.h"
class Cat;
class Dog :public Animal
{
public:
    Dog() = default;
    Dog(std::string name):Animal(name){}

    Animal* GetFriend()override;

    void Action() override {
        std::cout << GetName() << "‚Íƒƒ“ƒƒ“‚Æ‚Ù‚¦‚½\n";

    }
    
   

    
};