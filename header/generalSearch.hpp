#ifndef __GENERAL_SEARCH_HPP__
#define __GENERAL_SEARCH_HPP__

#include <string>
#include "node.hpp"

class generalSearch {
    public:
        /* Constructors */
        generalSearch() { };

        /* Pure Virtual Functions */
        Puzzle getInitialState();
        Puzzle getGoalState();

        bool goalTest(Puzzle);

    private:
        std::list<Node *>* nodes;




};

#endif //__GENERAL_SEARCH_HPP__

// ---------- Citations ----------
// Header structure: Jiacheng Hou, coursework at UC Riverside, CS100.
// -------------------------------