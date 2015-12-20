#pragma once
#include "PotentialEnergy.h"
class AlgorithmParameters
{
public:
	AlgorithmParameters(int N, PE_TYPE pe, ATOM_TYPE atom1, ATOM_TYPE atom2,int atom1N);
	~AlgorithmParameters(void);

	int N;//总原子数

	PotentialEnergy *PE;//势能

	vector<int> atomNumber;

	vector<ATOM_TYPE> atomTypes;//原子类型
};

