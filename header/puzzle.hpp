#ifndef __PUZZLE_HPP__
#define __PUZZLE_HPP__

#include <list>
#include <stdexcept>

class Puzzle
{
protected:
        std::list<int *>* tiles;

public:
        Puzzle();
        Puzzle();

        ~Puzzle();

        void set_sort_function(Sort* sort_function);

        void print();

        /* Functions Needed to Sort */
        
        int size();
};

#endif //__PUZZLE_HPP__

// ---------- Citations ----------
// This header structure is shared
// with my previous coursework at
// UC Riverside, CS100.
// -------------------------------