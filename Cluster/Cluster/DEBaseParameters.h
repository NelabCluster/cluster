#pragma once
#include "algorithmparameters.h"

enum DE_MUT{
	DERAND1,
	DERAND2,
	DEBEST1,
	DEBEST2,
	DERANDTOBEST1
};



class DEBaseParameters :
	public AlgorithmParameters
{
public:
	DEBaseParameters(int N, PE_TYPE energyType,ATOM_TYPE atom1,ATOM_TYPE atom2,int numberOfAtom1);
	~DEBaseParameters(void);

	DE_MUT _mute;			//编译策略

	int _numberOfClusters;	//种群数

	int _maxIteration;			//最大迭代次数

};

