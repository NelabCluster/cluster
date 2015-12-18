#pragma once
#include "IAlgorithm.h"
#include "BHBaseParameters.h"
#include "BHBaseClusters.h"

class BHBaseAlgorithm : IAlgorithm
{
public:
	BHBaseAlgorithm(BHBaseParameters para);
	~BHBaseAlgorithm(void);

	void Initialization(void);
	void Process(void);
	bool EndCondition(void);

private:
	BHBaseClusters *clusterBeforeChange;
	BHBaseClusters *clusterAfterChange;
	BHBaseClusters *bestCluster;
	BHBaseParameters *parameters;
	int nowMCS;
	double nowAcceptRatio;

	void Displace();
	double EvaulateCluster();
};

