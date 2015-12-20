#include "StdAfx.h"
#include "DEBaseParameters.h"


DEBaseParameters::DEBaseParameters(int N, PE_TYPE energyType,ATOM_TYPE atom1,ATOM_TYPE atom2,int numberOfAtom1)
	:AlgorithmParameters(N,energyType,atom1,atom2,numberOfAtom1)
{
	_mute = DERAND1;
	_numberOfClusters = N + 10;
	_maxIteration = 200;
}


DEBaseParameters::~DEBaseParameters(void)
{
}
