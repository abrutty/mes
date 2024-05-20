#pragma once

#ifndef _WAREHOUSEMANAGEMENT_DO_
#define _WAREHOUSEMANAGEMENT_DO_
#include "../DoInclude.h"

/**
 * 数据库实体类
 */
class WarehouseManagementDO
{
	// 编号
	CC_SYNTHESIZE(uint64_t, id, Id);
	// 姓名
	CC_SYNTHESIZE(string, name, Name);
	// 性别
	CC_SYNTHESIZE(string, sex, Sex);
	// 年龄
	CC_SYNTHESIZE(int, age, Age);
	// 编号
	CC_SYNTHESIZE(uint64_t, id, Id);
	// 姓名
	CC_SYNTHESIZE(string, name, Name);
	// 性别
	CC_SYNTHESIZE(string, sex, Sex);
	// 年龄
	CC_SYNTHESIZE(int, age, Age);

public:
	WarehouseManagementDO() {
		id = 0;
		name = "";
		sex = "";
		age = -1;
	}
};

#endif // !_WAREHOUSEMANAGEMENT_DO_
