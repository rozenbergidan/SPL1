#ifndef GRAPH_H_
#define GRAPH_H_

#include <vector>
#include "Tree.h"


class Graph {
public:
    Graph(std::vector<std::vector<int>> matrix);

    const Graph &operator=(const Graph &other); //copy assignment operator
    void infectNode(int nodeInd);

    bool isInfected(int nodeInd);

    int getNeighborToInfect(int node);


    void isolateNode(int node);

    bool isAllActiveOrIsolated();


    Tree* BFS(const Session& session, int root);


private:
    const int NUM_OF_NODES;
    std::vector<std::vector<int>> edges;
    bool *infectedTracer;
};

#endif