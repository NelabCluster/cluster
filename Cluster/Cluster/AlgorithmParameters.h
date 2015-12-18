#pragma once
#include "PotentialEnergy.h"
class AlgorithmParameters
{
public:
	AlgorithmParameters(int N, PE_TYPE pe, Atom_Type atom1, Atom_Type atom2,int atom1N);
	~AlgorithmParameters(void);

	int N;//��ԭ����

	PotentialEnergy *PE;//����

	vector<int> atomNumber;

	vector<Atom_Type> atomTypes;//ԭ������
};

