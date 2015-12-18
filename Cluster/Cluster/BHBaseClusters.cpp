#include "StdAfx.h"
#include "BHBaseClusters.h"


BHBaseClusters::BHBaseClusters(int N):Clusters(N)
{
}

BHBaseClusters::~BHBaseClusters(void)
{

}

void BHBaseClusters::RandInCubic(double length)
{
	for ( int i = 0; i < N; i++ )
	{		
		Atom& atom = this->atoms[i];
		atom.x = (RANDI-0.5) * length;
		atom.y = (RANDI-0.5) * length;
		atom.z = (RANDI-0.5) * length;
	}
}

void BHBaseClusters::RandInSphere(double radius)
{

}