#include <iostream>
#include "HomeAnimals.h"

int main() {
    HomeAnimals homeAnimals(10);

    Animal *homecat = new Cats("Pusik", 3.24, 10);
    Animal *homedog = new Dogs("Tuzik",5.0,2);

    Man M(100, 3);

    M.donations(homeAnimals, 20);
    cout<<homeAnimals.get_money()<<endl;

    homeAnimals.add(homecat);
    homeAnimals.add(homedog);
    homeAnimals.watch_animals();
    M.get_animal(homeAnimals);
    homeAnimals.watch_animals();

    return 0;
}