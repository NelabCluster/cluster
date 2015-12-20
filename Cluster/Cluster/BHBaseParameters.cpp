#include "StdAfx.h"
#include "BHBaseParameters.h"



BHBaseParameters BHBaseParameters::defaultParameters(int N, PE_TYPE pe, ATOM_TYPE atom1, ATOM_TYPE atom2, int atom1N)
{
	BHBaseParameters para(N,pe,atom1,atom2,atom1N);
	para._acceptRatio = 0.5;
	para._MCS = 5000;
	para._T = 1;
	para._minStep = 0.24;
	para._maxStep = 0.34;

	return para;
}

BHBaseParameters::BHBaseParameters(int N, PE_TYPE pe, ATOM_TYPE atom1, ATOM_TYPE atom2, int  atom1N)
	:AlgorithmParameters(N, pe, atom1, atom2, atom1N){ }