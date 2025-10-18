#include"dog.h"
#include "neko.h"
#include "human.h"
#include<random>

int main()
{
    Dog dog ("‚±‚È‚Â");
    Cat cat("‚É‚á‚Á‘¾");
    Human human("YOUHEI");

    Animal* pAnimal = &dog;
    pAnimal->Action();

    pAnimal = &cat;
    pAnimal->Action();

    pAnimal = &human;
    pAnimal->Action();



    //Animal* p = new Animal;//Œp³‚µ‚ÄŽg‚¤‚à‚Ìp443
    //p->Action();

   // delete p;
    /*
    Animal* pNext = p;

    for (;;)
    {
        int n;
        std::cout << ">";
        std::cin >> n;

        switch (n)
        {
        case 1:
            break;
        case 2:
            pNext = p->GetFriend();
        }

        if (n == 0)
        {
            break;
        }

        if (pNext != p)
        {
            delete p;
            p = pNext;
        }

        p->Action();
    }

    delete p;*/
    /*
    std::random_device rd;
    std::uniform_int_distribution<>dist(0, 3);

    Animal* pAnimals[]
    {
        new Dog("’ƒ•"),
        new Dog("‚ ‚¸‚«"),
        new Cat("‚É‚©"),
        new Human("‚Î‚á‚Ç"),
    };

    for (Animal* p : pAnimals)
    {
        p->Action();
    }*/
/*
    for (int i = 0; i < 10; i++)
    {
        std::cout << "‰½‚Ì‚Ç‚¤‚Ô‚Â‚³‚ñ‚ªŒ»‚ê‚é‚©‚ÈH\n";
        std::cin.get();
        pAnimals[dist(rd)]->Action();
        std::cin.get();
    }
    */
    /*
    for (Animal* p : pAnimals)
    {
        delete p;
    }*/
    return 0;
}