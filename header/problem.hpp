#ifndef __PROBLEM_HPP__
#define __PROBLEM_HPP__

#include <string>
#include "puzzle.hpp"

class Problem 
{
public:
    /* Constructors */
    Problem() { };

    /* Pure Virtual Functions */
    Puzzle getInitialState();
    Puzzle getGoalState();

    bool goalTest(Puzzle);

    std::string actions(Puzzle* state);

    int actionCost(Puzzle* state, Puzzle* nextState);

    Puzzle* result(Puzzle* state, std::string action);



private:
    Puzzle initalState;
    Puzzle goalState;




};

#endif //__PROBLEM_HPP__

// ---------- Citations ----------
// Header structure: Jiacheng Hou, coursework at UC Riverside, CS100.
// -------------------------------