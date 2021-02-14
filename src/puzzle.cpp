#include "puzzle.hpp"
 // Constructors
Puzzle::Puzzle(){
    Puzzle(9);
}

Puzzle::Puzzle(std::vector<int>* t){
    this->tiles = t;
}

Puzzle::Puzzle(int l){
    this->tiles = new std::vector<int>;
    for (int i = 1; i < l; i++)
    {
        tiles->push_back(i);
    }
    tiles->push_back(0);
}

// Deconstructor
Puzzle::~Puzzle(){
    delete[] tiles;
}

// Basic Functions
std::string Puzzle::toString(){
    std::string str;
    int width = this->width();
    for (int i = 0; i < size(); i++)
    {
        str += tiles->at(i);
        str += (i+1) % width == 0 ?  "\n" : " ";
    }
    return str;
}

void Puzzle::print(){
    printf("%s", toString());
}

int Puzzle::width(){
    return sqrt(size());
}

int Puzzle::length(){
    return width();
}

int Puzzle::size(){
    return tiles->size();
}