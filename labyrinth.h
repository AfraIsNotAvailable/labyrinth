//
// Created by afra-laptop on 30/11/2024.
//

#ifndef LABYRINTH_H
#define LABYRINTH_H
#include <vector>

struct Labyrinth
{
    int size_h;
    int size_w;
    std::vector<std::vector<char>> matrix;

    Labyrinth(int size_h, int size_w);
};

void createLabyrinth(Labyrinth *labyrinth);
void printLabyrinth(const Labyrinth& labyrinth);

#endif //LABYRINTH_H
