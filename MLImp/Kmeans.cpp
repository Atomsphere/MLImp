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

void Kmeans::randomCluster() {
	
	clusters.clear();
	
	srand(time(NULL));

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < dimension; j++) {
			clusters.insert[i][j](rand() % 10 + 1);
		}
	}

}