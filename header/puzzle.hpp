#ifndef __PUZZLE_HPP__
#define __PUZZLE_HPP__

#include <vector>
#include <string>
#include <math.h>

class Puzzle
{
private:
    std::vector<int>* tiles;

public:
    Puzzle();
    Puzzle(std::vector<int>* t);
    Puzzle(int l);

    ~Puzzle();

    /* Basic Functions */
    // Get the pazzle as a std::string
    std::string toString();
    // Print out the puzzle
    void print();

    // Get the number of elements of side of the puzzle.
    int width();
    // Same as width, get the number of elements of side of the puzzle.
    int length();
    // Get the number of elements of the puzzle.
    int size();
};

#endif //__PUZZLE_HPP__

// ---------- Citations ----------
// Header structure: Jiacheng Hou, coursework at UC Riverside, CS100.
// -------------------------------