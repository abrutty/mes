#pragma once
#ifndef _DDT_SERVICE_
#define _DDT_SERVICE_
#include <list>
#include "./dao/deletdetectiontemplate/DdtDAO.h"


class DdtService
{
public:

	// 通过ID删除数据
	bool removeData(uint64_t id);

};

#endif // !_TEST_SERVICE_#pragma once
