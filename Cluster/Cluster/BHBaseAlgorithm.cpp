#include "StdAfx.h"
#include "BHBaseAlgorithm.h"


BHBaseAlgorithm::BHBaseAlgorithm(BHBaseParameters& para)
	:_parameters(para)
{
	this->_clusterAfterChange = new BHBaseClusters(para._N);
	this->_clusterBeforeChange = new BHBaseClusters(para._N);
	this->_bestCluster = new BHBaseClusters(para._N);
}

BHBaseAlgorithm::~BHBaseAlgorithm(void)
{
	delete(this->_clusterBeforeChange);
	delete(this->_clusterAfterChange);
	delete(this->_bestCluster);
}

void BHBaseAlgorithm::Initialization()
{
	this->_clusterBeforeChange->RandInCubic(5.5);
}

void BHBaseAlgorithm::Process()
{
	_nowMCS ++;
	this->Displace();

	this->EvaulateCluster();

	double dE = this->_clusterAfterChange->GetEnergy() - this->_clusterBeforeChange->GetEnergy();

	if (dE <= 0 || RANDI < exp(-dE / this->_parameters._T))
	{
		this->_clusterBeforeChange = this->_clusterAfterChange;
	} 

}

bool BHBaseAlgorithm::EndCondition()
{
	if ( _nowMCS >= _parameters._MCS ) return true;

	return false;
}


void BHBaseAlgorithm::Displace()
{

}

double BHBaseAlgorithm::EvaulateCluster()
{

	return 0;
}