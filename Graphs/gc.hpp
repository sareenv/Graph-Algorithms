#ifndef GCON
#define GCON
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

struct Node{
	int data;
	int id;
};

typedef Node* nodeptr;

class Graph{
private:
	vector<int> nodesVector;
	std::map<int, vector<int>> adjancylist;
	vector<int> visitedNodes;
public:
	Graph();
	void insertVertices(int nodeData);
	void addEdge(int source, vector<int> dest);
	void printingGraph();
	bool isConnected();
	bool nodeCheck(int nodeData);
	vector<int> neighbourElements(int node);
	void dfs(int src);
};

#endif
