#pragma once
#include "PotentialEnergy.h"
class AlgorithmParameters
{
public:
	AlgorithmParameters(int N, PE_TYPE pe, ATOM_TYPE atom1, ATOM_TYPE atom2,int atom1N);
	~AlgorithmParameters(void);

	int N;//��ԭ����

	PotentialEnergy *PE;//����

	vector<int> atomNumber;

	vector<ATOM_TYPE> atomTypes;//ԭ������
};

