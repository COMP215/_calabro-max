
#include <iostream>
#include "graph.hpp"

using namespace std;

int main()
{
	Graph success;

	success.createVertex("Max");
	success.createVertex("Michael");
	success.createVertex("Armweak");
	success.createVertex("Flousie");
	success.createVertex("LeblancyBlancDaDankyDank");
	success.createVertex("persnickity");

	success.createEdge("Max","Michael", 23);
	success.createEdge("Armweak", "LeblancyBlancDaDankyDank", 34);
	success.createEdge("Armweak", "Michael", 54);
	success.createEdge("Max", "LeblancyBlancDaDankyDank", 12);
	success.createEdge("Flousie", "persnickity", 32);
	success.createEdge("michael", "Flousie", 18);

	success.GraphToDot();

	success.Prims();

	return 0;
}