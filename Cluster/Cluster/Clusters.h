#pragma once
#include "stdafx.h"
#include "Atom.h"

class Clusters
{
public:
	Clusters(int N);
	~Clusters(void);

	void setAtomsTypeAndNumber( vector<Atom_Type> types, int number);

protected:
	int N;
	vector<Atom> atoms;
	vector<Atom_Type> types;
	vector<int> numbers;
};

