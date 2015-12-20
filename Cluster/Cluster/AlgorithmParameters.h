#pragma once
#include "PotentialEnergy.h"
class AlgorithmParameters
{
public:
	AlgorithmParameters(int N, PE_TYPE pe, ATOM_TYPE atom1, ATOM_TYPE atom2,int atom1N);
	~AlgorithmParameters(void);

	int _N;							//总原子数

	PE_TYPE _energyType;			//势能类型

	vector<ATOM_TYPE> _atomTypes;	//原子类型

	vector<int> _atomNumber;		//各类型数量

};

