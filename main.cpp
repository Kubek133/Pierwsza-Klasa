#include <iostream>
#include <string>
#include "Movie.h"

int main() {
    // Tworzenie obiektu klasy Movie
    Movie movie("Joker", 2019, "Todd Phillips", "Criminal");

    // Wywołanie metody wypisującej informacje o filmie
    movie.printInfo();

    return 0;
}
