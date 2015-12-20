#pragma once
#include "algorithmparameters.h"
class GABaseParameters :
	public AlgorithmParameters
{
public:
	GABaseParameters(void);
	~GABaseParameters(void);

	double _crossoverRate;

	double _muteRate;
};

