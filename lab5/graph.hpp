#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>

class Node {
public:
	std::string vertex;
	std::vector<Node>edge;
	double edgeweight;

	Node();
	void addNode(std::string notVertex);
	void addEdge(Node notNode, double weight);
	void printVertex(std::ostream& myfile);
	void printEdges(Node passedNode, int move, std::ostream& myfile);
	std::string returnName();
	Node returnEdges(Node passedNode);
};

class Graph {
public:
	std::vector<Node>MASTER;

	Graph();
	void createVertex(std::string vertex);
	void createEdge(std::string first, std::string second, double weight);
	void GraphToDot();
	void printVertexName(Node vertexNode, std::ostream& myfile);
	vectr Prims();
};