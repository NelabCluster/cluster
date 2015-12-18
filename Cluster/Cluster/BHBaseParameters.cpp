#include "StdAfx.h"
#include "BHBaseParameters.h"



BHBaseParameters BHBaseParameters::defaultParameters(int N, PE_TYPE pe, Atom_Type atom1, Atom_Type atom2, int atom1N)
{
	BHBaseParameters para(N,pe,atom1,atom2,atom1N);
	para.acceptRatio = 0.5;
	para.MCS = 5000;
	para.T = 1;
	para.minStep = 0.24;
	para.maxStep = 0.34;
	return para;
}

BHBaseParameters::BHBaseParameters(int N, PE_TYPE pe, Atom_Type atom1, Atom_Type atom2, int  atom1N)
	:AlgorithmParameters(N, pe, atom1, atom2, atom1N){ }