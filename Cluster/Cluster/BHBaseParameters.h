#pragma once
#include "algorithmparameters.h"
#include "stdafx.h"

struct BHBaseParameters :
	public AlgorithmParameters
{
public:
	

	double _T;//�¶�;
	double _minStep;//��С����

	double _maxStep;//�����

	double _acceptRatio;//���ܸ���

	int _MCS;//���ؿ������

	static BHBaseParameters defaultParameters(int N, PE_TYPE pe, ATOM_TYPE atom1, ATOM_TYPE atom2, int atom1N);

	BHBaseParameters(int N, PE_TYPE pe, ATOM_TYPE atom1, ATOM_TYPE atom2, int atom1N);

};

