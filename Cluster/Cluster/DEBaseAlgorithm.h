#pragma once
#include "ialgorithm.h"
#include "DEBaseParameters.h"
#include "DEBaseClusters.h"

class DEBaseAlgorithm :
	public IAlgorithm
{
public:
	DEBaseAlgorithm(DEBaseParameters& para);
	~DEBaseAlgorithm(void);

	void Initialization(void);
	void Process(void);
	bool EndCondition(void);

private:
	DEBaseParameters _parameters;
	DEBaseClusters _bestClusters;
	vector<DEBaseClusters> _X;
	vector<DEBaseClusters> _V;
	vector<DEBaseClusters> _U;

	void Mutation();
	void CrossOver();
	void Greedy();
	void Adjustment();
};

