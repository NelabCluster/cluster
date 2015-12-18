#pragma once
class IAlgorithm
{
public:
	virtual void Initialization(void) = 0;
	virtual void Process(void) = 0;
	virtual bool EndCondition(void) = 0;
};

