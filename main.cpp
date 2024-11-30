#include <iostream>

#include "labyrinth.h"

int main()
{
    auto labyrinth = Labyrinth(10, 40);
    createLabyrinth(&labyrinth);
    printLabyrinth(labyrinth);

    std::cin.get();

    return 0;
}