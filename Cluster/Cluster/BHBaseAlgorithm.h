#pragma once
#include "IAlgorithm.h"
#include "BHBaseParameters.h"
#include "BHBaseClusters.h"

class BHBaseAlgorithm : IAlgorithm
{
public:
	BHBaseAlgorithm(BHBaseParameters& para);
	~BHBaseAlgorithm(void);

	void Initialization(void);
	void Process(void);
	bool EndCondition(void);

private:
	BHBaseClusters *_clusterBeforeChange;
	BHBaseClusters *_clusterAfterChange;
	BHBaseClusters *_bestCluster;
	BHBaseParameters& _parameters;
	double _nowAcceptRatio;
	int _nowMCS;

	void Displace();
	double EvaulateCluster();
};

