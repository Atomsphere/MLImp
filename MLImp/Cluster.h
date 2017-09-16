//*************
//Cluster object, see Cluster.cpp for function definitions
//
//************

#pragma once

#include <vector>

class Cluster
{
private:
	std::vector< std::vector<int> > cluster;
	int dimension;
public:
	Cluster();
	~Cluster();
	void push(std::vector<int>);
	void setDimension(int); 

};

