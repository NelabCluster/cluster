// Cluster.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "BHBase.h"


int _tmain(int argc, _TCHAR* argv[])
{
	BHBaseParameters para = BHBaseParameters::defaultParameters(10,PE_LJ,ATOM_None,ATOM_None,10);
	BHBaseAlgorithm bh(para);

	return 0;
}

