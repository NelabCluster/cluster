#include "StdAfx.h"
#include "Clusters.h"

Clusters::Clusters(int N)
	:_N(N)
{
	this->InitHandles();
}

Clusters::Clusters(int N,ATOM_TYPE atom)
	:_N(N)
{
	this->InitHandles();
	_types.push_back(atom);
	_numbers.push_back(N);
}

Clusters::Clusters(int N,ATOM_TYPE atom1,ATOM_TYPE atom2,int numberOfAtom1)
	:_N(N)
{
	this->InitHandles();
	_types.push_back(atom1); _types.push_back(atom2);
	_numbers.push_back(numberOfAtom1); _numbers.push_back(N-numberOfAtom1);
}

Clusters::Clusters(int N, vector<ATOM_TYPE> types, vector<int> numbers)
	:_N(N),_types(types),_numbers(numbers)
{
	this->InitHandles();
}

void Clusters::InitHandles()
{
	for (int i = 0; i < N; i ++)
	{
		_atoms.push_back(Atom());
	}
}

Clusters::~Clusters(void)
{
	free(_R)
}

int Clusters::GetAtomsNumber()
{
	return this->_N;
}

double* Clusters::GetDistancePointer()
{
	return this->_R;
}