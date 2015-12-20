#pragma once
#include "stdafx.h"
#include "Atom.h"

class Clusters
{
public:
	Clusters(int N);
	Clusters(int N,ATOM_TYPE atom);
	Clusters(int N,ATOM_TYPE atom1,ATOM_TYPE atom2,int numberOfAtom1);
	Clusters(int N, vector<ATOM_TYPE> types, vector<int> numbers);
	~Clusters(void);

	int GetAtomsNumber();
	double* GetDistancePointer();

protected:
	int _N;						//原子总数
	vector<Atom> _atoms;		//原子实例
	vector<ATOM_TYPE> _types;	//原子类型
	vector<int> _numbers;		//各类型的个数
//	vector<int> _note;			//0：表示第一种类型，1：表示第二种类型，以此类推

	double *_R;					//距离矩阵

	void InitHandles();
};

