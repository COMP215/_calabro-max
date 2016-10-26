
#include <iostream>
#include <fstream>
#include "graph.hpp"
//#include <algorithm>

using namespace std;

Graph::Graph(){}

void Graph::createVertex(string notVertex){
	Node *pushnode = new Node;
	pushnode->addNode(notVertex);
	MASTER.push_back(*pushnode);
}

void Graph::createEdge(string first, string second, double weight){
	int counter = 0;
	for(int i = 0; i < MASTER.size(); i++){
		if( first == MASTER[i].returnName()){
			counter = i;
		}
	}
	int counter2 = 0;
	for(int i = 0; i < MASTER.size(); i++){
		if( second == MASTER[i].returnName()){
			counter2 = i;
		}
	}
	MASTER[counter].addEdge(MASTER[counter2], weight);
	MASTER[counter2].addEdge(MASTER[counter], weight);
}

void Graph::GraphToDot(){
	ofstream myfile;
	string file;

	cout << "Enter file name: " << endl;
	cin >> file;
	myfile.open(file.c_str());
	if (myfile.is_open()) {
		myfile << "strict graph {" << endl;
		for(int i = 0; i < MASTER.size(); i++) {
			for(int j = 0; j < MASTER[i].edge.size(); j++) {
				printVertexName(MASTER[i], myfile);
				MASTER[i].printEdges(MASTER[i], j, myfile);
				myfile << endl;
			}
		}
		myfile << "}" << endl;
		myfile.close();
		cout << "Anozzer Successful Procedure!" << endl;
	}
	else
		cout << "Input file failed  to open." << endl;
}

void Graph::printVertexName(Node vertexNode, ostream& myfile){
	vertexNode.printVertex(myfile);
}

void Graph::Prims() {
	Graph prim;
	cout << MASTER[0].returnName() << endl;
	cout << MASTER[0].returnEdges(MASTER[0]);
}