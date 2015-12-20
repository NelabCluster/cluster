#include "StdAfx.h"
#include "AlgorithmParameters.h"


AlgorithmParameters::AlgorithmParameters(int N,PE_TYPE pe,ATOM_TYPE atom1,ATOM_TYPE atom2,int atom1N)
{
	
	_N = N;

	_energyType = pe;

	if ( NULL != atom1 ) _atomTypes.push_back(atom1);

	if ( NULL != atom2 ) _atomTypes.push_back(atom2);

	_atomNumber.push_back(atom1N);

	_atomNumber.push_back(N-atom1N);
}


AlgorithmParameters::~AlgorithmParameters(void)
{

}
