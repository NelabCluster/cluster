// Cluster.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "BHBase.h"


int _tmain(int argc, _TCHAR* argv[])
{
	BHBaseParameters para = BHBaseParameters::defaultParameters(10,PE_LJ,ATOM_None,ATOM_None,10);
	BHBaseAlgorithm bh(para);

	return 0;
}

