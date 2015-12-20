#pragma once
#include "PotentialEnergy.h"
class AlgorithmParameters
{
public:
	AlgorithmParameters(int N, PE_TYPE pe, ATOM_TYPE atom1, ATOM_TYPE atom2,int atom1N);
	~AlgorithmParameters(void);

	int _N;							//��ԭ����

	PE_TYPE _energyType;			//��������

	vector<ATOM_TYPE> _atomTypes;	//ԭ������

	vector<int> _atomNumber;		//����������

};

