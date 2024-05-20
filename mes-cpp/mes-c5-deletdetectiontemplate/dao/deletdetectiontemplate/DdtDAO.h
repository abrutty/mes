#pragma once
#ifndef _DDT_DAO_
#define _DDT_DAO_
#include "BaseDAO.h"

/**
 * 示例表数据库操作实现
 */
class DdtDAO : public BaseDAO
{
public:

	// 通过ID删除数据
	int deleteById(uint64_t id);
};
#endif // !_Ddt_DAO_