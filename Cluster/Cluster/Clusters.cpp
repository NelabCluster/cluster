#include "StdAfx.h"
#include "Clusters.h"

Clusters::~Clusters(void)
{
}

Clusters::Clusters(int N)
{
	this->N = N;
	for (int i = 0; i < N; i ++)
	{
		this->atoms.push_back(Atom());
	}

}