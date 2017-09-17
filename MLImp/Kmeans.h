#pragma once

//#include<vector>
#include"Cluster.h"

class Kmeans {
private:
	int k;
	std::vector<Cluster> clusters;
public:
	Kmeans();
	~Kmeans();
	void randomCentroid(int, int);
	void setK(int);
	void setCentroids(std::vector< std::vector<int> >);
};