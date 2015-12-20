#pragma once
#include "Common.h"

class LocalTool
{
public:
	LocalTool(void);
	~LocalTool(void);

	static void LocalMinimize(Clusters& beforeLocal, Clusters& afterLocal,PE_TYPE type);
	static Clusters LocalMinimize(Clusters& beforeLocal,PE_TYPE type);
	static void LocalMinimizeClusters(Clusters& clusters,PE_TYPE type);
};

