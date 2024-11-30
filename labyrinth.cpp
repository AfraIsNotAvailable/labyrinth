//
// Created by afra-laptop on 30/11/2024.
//

#include "labyrinth.h"

#include <iostream>
#include <vector>


Labyrinth::Labyrinth(const int size_h, const int size_w) : size_h(size_h), size_w(size_w),
                                                           matrix(size_h, std::vector<char>(size_w, ' '))
{
}

void border(Labyrinth* labyrinth)
{
    for (int i = 0; i < labyrinth->size_h; i++)
    {
        for (int j = 0; j < labyrinth->size_w; j++)
        {
            if (i == 0 || i == labyrinth->size_h - 1 || j == 0 || j == labyrinth->size_w - 1)
            {
                labyrinth->matrix[i][j] = '#';
            }
        }
    }
}

void createLabyrinth(Labyrinth* labyrinth)
{
    border(labyrinth);
    // other layer functions
}

void printLabyrinth(const Labyrinth& labyrinth)
{
    for (int i = 0; i < labyrinth.size_h; i++)
    {
        for (int j = 0; j < labyrinth.size_w; j++)
        {
            std::cout << labyrinth.matrix[i][j];
        }
        std::cout << std::endl;
    }
}
