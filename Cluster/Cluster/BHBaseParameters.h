#pragma once
#include "algorithmparameters.h"
#include "stdafx.h"

struct BHBaseParameters :
	public AlgorithmParameters
{
public:
	
	double T;//�¶�;

	double minStep;//��С����

	double maxStep;//�����

	double acceptRatio;//���ܸ���

	int MCS;//���ؿ������

	static BHBaseParameters defaultParameters(int N, PE_TYPE pe, Atom_Type atom1, Atom_Type atom2, int atom1N);

	BHBaseParameters(int N, PE_TYPE pe, Atom_Type atom1, Atom_Type atom2, int atom1N);

};

