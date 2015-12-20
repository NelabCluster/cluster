#include "StdAfx.h"
#include "DEBaseAlgorithm.h"
#include "Tool.h"

DEBaseAlgorithm::DEBaseAlgorithm(DEBaseParameters& para)
	:_parameters(para),
	 _bestClusters(para._N,para._atomTypes,para._atomNumber)
{
	int i = 0;
	for(i = 0; i < para._numberOfClusters; i++)
	{
		DEBaseClusters newClusters(para._N,para._atomTypes,para._atomNumber);
		_X.push_back(newClusters);
		_V.push_back(newClusters);
		_U.push_back(newClusters);
	}
}


DEBaseAlgorithm::~DEBaseAlgorithm(void)
{

}

void DEBaseAlgorithm::Initialization()
{
	double length = 2.75 * pow((double)_parameters._N,1.0/3);
	for (int i = 0; i < _parameters._numberOfClusters; i ++)
	{
		DEBaseClusters& clusters = _X[i];
		clusters.RandInCubic(length);
		LocalTool::LocalMinimizeClusters(clusters,_parameters._energyType);
	}
}

void DEBaseAlgorithm::Process()
{
	this->Mutation();
	this->CrossOver();
	this->Greedy();
	this->Adjustment();
}

bool DEBaseAlgorithm::EndCondition()
{
	return true;
}

void DEBaseAlgorithm::Mutation()
{
	int i;
	int popSize = _parameters._numberOfClusters;
	int N = _parameters._N;
	switch(_parameters._mute)
	{
	case DERAND1:
		for(i = 0; i < popSize; i++)
		{
			double F = 2 * RANDI;
			vector<int> p = BaseTool::RandPerm(popSize,3);
			_V[i] = _X[p[2]] + F * (_X[p[0]] - _X[p[1]]);
		}
		break;
	case DEBEST1:
		for(i = 0; i < popSize; i++)
		{
			double F = 2 * RANDI;
			vector<int> p = BaseTool::RandPerm(popSize,2);
			_V[i] = _bestClusters + F * (_X[p[0]] - _X[p[1]]);
		}
		break;
	case DEBEST2:
		for(i = 0; i < popSize; i++)
		{
			double F = 2 * RANDI;
			vector<int> p = BaseTool::RandPerm(popSize,4);
			_V[i] = _bestClusters + F * (_X[p[0]] + _X[p[1]] - _X[p[2]] - _X[p[3]]);
		}
		break;
	case DERAND2:
		for(i = 0; i < popSize; i++)
		{
			double F = 2 * RANDI;
			vector<int> p = BaseTool::RandPerm(popSize,5);
			_V[i] = _X[p[4]] + F * (_X[p[0]] + _X[p[1]] - _X[p[2]] - _X[p[3]]);
		}
		break;
	case DERANDTOBEST1:
		for(i = 0; i < popSize; i++)
		{
			double F = 2 * RANDI;
			vector<int> p = BaseTool::RandPerm(popSize,2);
			_V[i] = _X[i] + F * (_X[p[0]] + _bestClusters - _X[i] - _X[p[1]]);
		}
		break;
	}
}

void DEBaseAlgorithm::CrossOver()
{

}

void DEBaseAlgorithm::Greedy()
{
	for(int i = 0; i < _parameters._numberOfClusters; i++)
	{
		if(_U[i].GetEnergy() < _X[i].GetEnergy()){
			_X[i] = _U[i];
		}
		if(_X[i].GetEnergy() < _bestClusters.GetEnergy())
			_bestClusters = _X[i];
	}
}

void DEBaseAlgorithm::Adjustment()
{

}