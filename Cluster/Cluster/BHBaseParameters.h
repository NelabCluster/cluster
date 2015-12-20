#pragma once
#include "algorithmparameters.h"
#include "stdafx.h"

struct BHBaseParameters :
	public AlgorithmParameters
{
public:
	

	double _T;//温度;
	double _minStep;//最小步长

	double _maxStep;//最长步长

	double _acceptRatio;//接受概率

	int _MCS;//蒙特卡洛次数

	static BHBaseParameters defaultParameters(int N, PE_TYPE pe, ATOM_TYPE atom1, ATOM_TYPE atom2, int atom1N);

	BHBaseParameters(int N, PE_TYPE pe, ATOM_TYPE atom1, ATOM_TYPE atom2, int atom1N);

};

