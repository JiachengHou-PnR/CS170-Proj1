#ifndef __PUZZLE_HPP__
#define __PUZZLE_HPP__

#include <list>

class Puzzle
{
private:
    std::list<int>* tiles;

public:
    Puzzle();
    Puzzle(std::list<int>* tiles);

    ~Puzzle();

    /* Basic Functions */
    void print();
    int length();
    int height();
    int size();
};

#endif //__PUZZLE_HPP__

// ---------- Citations ----------
// Header structure: Jiacheng Hou, coursework at UC Riverside, CS100.
// -------------------------------