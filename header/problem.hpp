#ifndef __PROBLEM_HPP__
#define __PROBLEM_HPP__

#include <string>
#include "puzzle.hpp"

class Problem {
    public:
        /* Constructors */
        Problem() { };

        /* Pure Virtual Functions */
        Puzzle getInitialState();
        Puzzle getGoalState();

        bool goalTest(Puzzle);
        Ops 


        virtual std::string stringify() = 0;

    private:
        Puzzle initalState;
        Puzzle goalState;




};

#endif //__PROBLEM_HPP__