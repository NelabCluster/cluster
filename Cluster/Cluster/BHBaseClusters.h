#pragma once
#include "clusters.h"
class BHBaseClusters :
	public Clusters
{
public:
	BHBaseClusters(int N);
	~BHBaseClusters(void);

	double energy;

	void RandInSphere(double radius);
	void RandInCubic(double length);
};

