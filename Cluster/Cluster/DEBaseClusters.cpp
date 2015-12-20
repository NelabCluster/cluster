#include "StdAfx.h"
#include "DEBaseClusters.h"


DEBaseClusters::DEBaseClusters(int N,vector<ATOM_TYPE> types,vector<int> numbers)
	:Clusters(N,types,numbers)
{
}

DEBaseClusters::~DEBaseClusters(void)
{
}

void DEBaseClusters::RandInCubic(double length)
{
	for ( int i = 0; i < _N; i++ )
	{		
		Atom& atom = this->_atoms[i];
		atom._x = (RANDI-0.5) * length;
		atom._y = (RANDI-0.5) * length;
		atom._z = (RANDI-0.5) * length;
	}
}

DEBaseClusters operator+(DEBaseClusters& left,DEBaseClusters& right)
{
	DEBaseClusters newCluster(left);
	for (int i = 0; i < newCluster.GetAtomsNumber(); i ++)
	{
		Atom& atom = newCluster._atoms[i];
		Atom& atomRight = right._atoms[i];
		Atom& atomLeft = left._atoms[i];
		atom._x = atomLeft._x + atomRight._x;
		atom._y = atomLeft._y + atomRight._y;
		atom._z = atomLeft._z + atomRight._z;
	}
	return newCluster;
}

DEBaseClusters operator-(DEBaseClusters& left,DEBaseClusters& right)
{
	DEBaseClusters newCluster(left);
	for (int i = 0; i < newCluster.GetAtomsNumber(); i ++)
	{
		Atom& atom = newCluster._atoms[i];
		Atom& atomRight = right._atoms[i];
		Atom& atomLeft = left._atoms[i];
		atom._x = atomLeft._x - atomRight._x;
		atom._y = atomLeft._y - atomRight._y;
		atom._z = atomLeft._z - atomRight._z;
	}
	return newCluster;
}

DEBaseClusters operator*(double value,DEBaseClusters& right)
{
	DEBaseClusters newCluster(right);
	for (int i = 0; i < newCluster.GetAtomsNumber(); i ++)
	{
		Atom& atom = newCluster._atoms[i];
		Atom& atomRight = right._atoms[i];
		atom._x = value * atomRight._x;
		atom._y = value * atomRight._y;
		atom._z = value * atomRight._z;
	}
	return newCluster;
}

DEBaseClusters operator*(DEBaseClusters& left,double value)
{
	return value * left;
}