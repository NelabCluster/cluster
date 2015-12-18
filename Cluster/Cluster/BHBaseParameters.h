#pragma once
#include "algorithmparameters.h"
#include "stdafx.h"

struct BHBaseParameters :
	public AlgorithmParameters
{
public:
	
	double T;//温度;

	double minStep;//最小步长

	double maxStep;//最长步长

	double acceptRatio;//接受概率

	int MCS;//蒙特卡洛次数

	static BHBaseParameters defaultParameters(int N, PE_TYPE pe, Atom_Type atom1, Atom_Type atom2, int atom1N);

	BHBaseParameters(int N, PE_TYPE pe, Atom_Type atom1, Atom_Type atom2, int atom1N);

};

