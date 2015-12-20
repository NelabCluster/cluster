// Cluster.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Common.h"
#include "BHBase.h"
#include "DEBase.h"

int _tmain(int argc, _TCHAR* argv[])
{
//	BHBaseParameters para = BHBaseParameters::defaultParameters(10,PE_LJ,ATOM_None,ATOM_None,10);
//	BHBaseAlgorithm bh(para);

	DEBaseParameters para(10,PE_LJ,ATOM_None,ATOM_None,10);
	DEBaseAlgorithm de(para);
	de.Initialization();
	de.Process();

	system("pause");
	return 0;
}

