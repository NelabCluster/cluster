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
	for ( int i = 0; i < _N; i++ )
	{		
		Atom& atom = this->_atoms[i];
		atom._x = (RANDI-0.5) * length;
		atom._y = (RANDI-0.5) * length;
		atom._z = (RANDI-0.5) * length;
	}
}

void BHBaseClusters::RandInSphere(double radius)
{

}