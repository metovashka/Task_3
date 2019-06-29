//
// Created by 1 on 29.06.2019.
//

#include "HomeAnimals.h"
#include <vector>
#include <iostream>

using namespace std;

HomeAnimals::HomeAnimals(int max_anl) {
    max_animal = max_anl;
}


bool HomeAnimals::add(Animal *object) {
    if (num_animals == max_animal) {
        return 1;
    } else {
        collection.push_back(object);
        num_animals++;
    }
}

void HomeAnimals::get_animal(unsigned int mimi) {
    if (num_animals == 0) {
        cout << "В приюте никого неть(" << endl;
    } else {
        for (int i = 0; i < num_animals; i++) {
            auto iter = collection.cbegin();
            if (collection.at(i)->get_mimimi() >= mimi) {
                cout << collection.at(i)->get_name() + " теперь ваш питомец " << endl;
                collection.erase(iter + i);
                return;
            }
        }
    }
}


void HomeAnimals::watch_animals() {
    if (num_animals == 0) {
        cout << "В приюте никого неть(" << endl;
    } else {
        for (int i = 0; i < num_animals; i++) {
            cout << collection.at(i)->get_name() + " ";
            cout << collection.at(i)->get_weight() << " ";
            cout << collection.at(i)->get_mimimi() << endl;

        }
    }
}

Animal::Animal(string nm, float wt, int mi) {
    name = nm;
    weight = wt;
    mimimi = mi;
}


string Animal::get_name() {
    return name;
}

float Animal::get_weight() {
    return weight;
}

int Animal::get_mimimi() {
    return mimimi;
}

void HomeAnimals::get_donation(unsigned int m) {
    money = +m;
}

int HomeAnimals::get_money() {
    return money;
}

Man::Man(unsigned int m, unsigned int mi) {
    money = m;
    mimi = mi;
}

int Man::get_mimimi() {
    return mimi;
}

int Man::get_money() {
    return money;
}

void Man::donations(HomeAnimals &home, unsigned int n) {
    if (get_money() != 0) {
        home.get_donation(n);
        money -= n;
    }
}

void Man::get_animal(HomeAnimals &home) {
    home.get_animal(get_mimimi());
}