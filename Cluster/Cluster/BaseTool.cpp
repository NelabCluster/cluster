#include "StdAfx.h"
#include "BaseTool.h"


BaseTool::BaseTool(void)
{
}


BaseTool::~BaseTool(void)
{
}

vector<int> BaseTool::RandPerm(int N, int K)
{
	vector<int> allP(N);
	vector<int> p(K);

	for(int i = 0; i < N; i++)
		allP[i] = i;
	for(int i=0;i < K;i++)
	{
		int point = rand()%(N-i);
		int temp = allP[i];
		allP[i] = allP[point+i];
		allP[point+i] = allP[i];
		p[i] = allP[i];
	}
	return p;
}