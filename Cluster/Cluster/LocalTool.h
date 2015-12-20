#pragma once
#include "Common.h"

class LocalTool
{
public:
	LocalTool(void);
	~LocalTool(void);

	static void LocalMinimize(Clusters& beforeLocal, Clusters& afterLocal);
};

