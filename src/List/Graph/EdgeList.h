//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_EDGELIST_H
#define DATASTRUCTURES_CPP_EDGELIST_H


#include <string>
#include "Edge.h"

class EdgeList {
private:
    EdgeList(std::__cxx11::basic_string<char> name);

    Edge* head;
    Edge* tail;
public:
    EdgeList();
    ~EdgeList();
    bool isEmpty() const;
    Edge* search(int to) const;
    void insert(Edge* newEdge);
    Edge* getHead();
    std::string name;
};


#endif //DATASTRUCTURES_CPP_EDGELIST_H
