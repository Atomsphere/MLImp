#include "stdafx.h"
#include "Cluster.h"

//***********************************************
//Constructor- initiates fields to default values
//
//**********************************************
Cluster::Cluster()
{
	dimension = 2;
}


Cluster::~Cluster()
{
}

void Cluster::push(std::vector<int> data)
{
	cluster.push_back(data);
}

void Cluster::setDimension(int dim)
{
	dimension = dim;
}
