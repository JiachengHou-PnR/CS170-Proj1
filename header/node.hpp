#ifndef __NODE_HPP__
#define __NODE_HPP__

#include <list>
#include "puzzle.hpp"


class Node
{
public:
    Node();
    Node(Puzzle* state);
    Node(Puzzle* state, Node* parent, int cost);

    ~Node();

    /* Functions Needed */
    Node expand();

    int depth();
    int pathCost();
    Puzzle* state();
    Node* parent();
    std::list<Node *>* children();

private:    
    /* Variables */
    Node* parent;
    std::list<Node *>* children;
    
    Puzzle* state;

    int depth;
    int pathCost;
};

#endif //__NODE_HPP__

// ---------- Citations ----------
// Header structure: 
//      Jiacheng Hou, coursework at UC Riverside, CS100.
//
// Functions & Func names: 
//      Stuart Russell and Peter Norvig, Artificial Intelligence: A Modern Approach, Pseudocode (pdf)
//      http://aima.cs.berkeley.edu/algorithms.pdf
// -------------------------------