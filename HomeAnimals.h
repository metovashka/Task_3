//
// Created by 1 on 29.06.2019.
//

#ifndef PO_HOMEANIMALS_H
#define PO_HOMEANIMALS_H

#include <vector>
#include <string>


using namespace std;

class Animal {
protected:
    string name;
    float weight;
    int mimimi;
public:
    Animal(string nm, float wt, int mi);

    string get_name();

    float get_weight();

    int get_mimimi();
};

class Cats : public Animal {
public:
    Cats(string nm, float wt, int mi) : Animal(nm, wt, mi) {
    };
};

class Dogs : public Animal {
public:
    Dogs(string nm, float wt, int mi) : Animal(nm, wt, mi) {
    };
};

class HomeAnimals {
private:
    vector<Animal *> collection;
    int max_animal;
    unsigned int num_animals = 0, money;


public:
    HomeAnimals(int max_anl);

    bool add(Animal *object);

    void get_animal(unsigned int);

    void watch_animals();

    int get_money();

    void get_donation(unsigned int m);

};


class Man {

protected:
    unsigned int money;
    unsigned int mimi;
public:
    Man(unsigned int money, unsigned int mimi);

    int get_mimimi();

    int get_money();

    void donations(HomeAnimals &home, unsigned int n);

    void get_animal(HomeAnimals &home);

};


#endif //PO_HOMEANIMALS_H
