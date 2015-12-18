#include "StdAfx.h"
#include "BHBaseAlgorithm.h"


BHBaseAlgorithm::BHBaseAlgorithm(BHBaseParameters para)
{
	this->parameters = new BHBaseParameters(para);
	this->clusterAfterChange = new BHBaseClusters(para.N);
	this->clusterBeforeChange = new BHBaseClusters(para.N);
	this->bestCluster = new BHBaseClusters(para.N);
}

BHBaseAlgorithm::~BHBaseAlgorithm(void)
{
	delete(this->parameters);
	delete(this->clusterBeforeChange);
	delete(this->clusterAfterChange);
	delete(this->bestCluster);
}

void BHBaseAlgorithm::Initialization()
{
	this->clusterBeforeChange->RandInCubic(5.5);
}

void BHBaseAlgorithm::Process()
{
	nowMCS ++;
	this->Displace();

	this->Displace();
	this->EvaulateCluster();

	double dE = this->clusterAfterChange->energy - this->clusterBeforeChange->energy;

	if (dE <= 0 || RANDI < exp(-dE/this->parameters->T))
	{
		this->clusterBeforeChange = this->clusterAfterChange;
	} 

}

bool BHBaseAlgorithm::EndCondition()
{
	if ( nowMCS >= parameters->MCS ) return true;

	return false;
}


void BHBaseAlgorithm::Displace()
{

}

double BHBaseAlgorithm::EvaulateCluster()
{
	return 0;
}