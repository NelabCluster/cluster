#pragma once
#include "ialgorithm.h"
#include "GABaseParameters.h"
#include "GABaseClusters.h"

class GABaseAlgorithm :
	public IAlgorithm
{
public:
	GABaseAlgorithm(void);
	~GABaseAlgorithm(void);

	void Initialization(void);
	void Process(void);
	bool EndCondition(void);

private:
	GABaseParameters _parameters;
	GABaseClusters _bestClusters;
	vector<GABaseClusters> _pop;

	void Selection();
	void CrossOver();
	void Mutation();
};

