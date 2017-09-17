//*********
//K-means algorithm implementation
//
//*********

//#include<vector>
#include<stdlib.h>
#include<time.h>
//#include"Cluster.h"
#include"Kmeans.h"

Kmeans::Kmeans() {
	k = 3;


}

//***********************
// randomCentroid- 
// takes the upper limit for the range of random numbers ie: upper = 15 -> 0 to 15
// takes the dimension as an integer ie: for 2d data, the dimension should equal 2
// 
//**********************
void Kmeans::randomCentroid(int upper, int dimension) {
	
	clusters.clear();
	Cluster temp;
	std::vector<int> tempVector;
	srand(time(NULL));

	for (int i = 0; i < k; i++) {
		tempVector.clear();
		for (int j = 0; j < dimension; j++) {
			tempVector.push_back(rand() % (upper + 1));
		}
		temp.push(tempVector);
		clusters.push_back(temp);
	}

}

void Kmeans::setK(int newK) {
	k = newK;
}

//*****************
//takes a vector of integer vectors as an input
//seperates the integer vectors into clusters
//pushes clusters into vector of clusters
//****************
void Kmeans::setCentroids(std::vector< std::vector<int> > cents) {
	clusters.clear();
	Cluster temp;

	for (int i = 0; i < k; i++) {
		temp.push(cents[i]);
		clusters.push_back(temp);
	}
	

}