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
	int _N;						//ԭ������
	vector<Atom> _atoms;		//ԭ��ʵ��
	vector<ATOM_TYPE> _types;	//ԭ������
	vector<int> _numbers;		//�����͵ĸ���
//	vector<int> _note;			//0����ʾ��һ�����ͣ�1����ʾ�ڶ������ͣ��Դ�����

	double *_R;					//�������

	void InitHandles();
};

