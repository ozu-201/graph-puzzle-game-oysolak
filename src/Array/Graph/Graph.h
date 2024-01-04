//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_GRAPH_H
#define DATASTRUCTURES_CPP_GRAPH_H


#include "../../General/AbstractGraph.h"
#include "../../List/Graph/Edge.h"

namespace array{
    class Graph : public AbstractGraph{
    public:
        explicit Graph(int vertexCount);
        ~Graph();
        void addEdge(int from, int to);
        void addEdge(int from, int to, int weight);
        void connectedComponentDisjointSet();
        Path* bellmanFord(int source);
        Path* dijkstra(int source);
        int** floydWarshall();
        void prim();

        std::string * getNames() const;

        int **getEdges() const;

        std::string* names;
        int** edges;

        void addName(int index, std::string name);

        void breadthFirstSearch(std::string fromName, std::string toName) override;

    protected:
        void depthFirstSearch(bool* visited, int fromNode) override;
       // void breadthFirstSearch(bool* visited, int startNode) override;
        Edge* edgeList(int& edgeCount) override;

        int findIndex(std::string word);
    };

}


#endif //DATASTRUCTURES_CPP_GRAPH_H
