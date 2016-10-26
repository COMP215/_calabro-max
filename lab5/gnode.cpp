
#include <fstream>
#include "graph.hpp"

using namespace std;

Node::Node(){}

void Node::addNode(string notVertex) {
	vertex = notVertex;
}

void Node::addEdge(Node notNode, double weight) {
	edge.push_back(notNode);
	double edgeWeight = weight;
}

void Node::printVertex(ostream& myfile){
	myfile << "	" << vertex << " -- ";
}

void Node::printEdges(Node passedNode, int move, ostream& myfile){
	myfile << passedNode.edge[move].vertex;
}

string Node::returnName(){
	return vertex;
}

vector Node::returnEdges(Node passedNode){
	return passedNode.edge;(Node passedNode)
}