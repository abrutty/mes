#pragma once

#ifndef _WAREHOUSEMANAGEMENT_SERVICE_
#define _WAREHOUSEMANAGEMENT_SERVICE_
#include <list>
#include "domain/vo/warehousemanagement/WarehouseManagementVO.h"
#include "domain/query/warehousemanagement/WarehouseManagementQuery.h"
#include "domain/dto/warehousemanagement/WarehouseManagementDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class WarehouseManagementService
{
public:
	// 分页查询所有数据
	WarehouseManagementPageDTO::Wrapper listAll(const WarehouseManagementQuery::Wrapper& query);
	// 保存数据
	uint64_t saveData(const WarehouseManagementDTO::Wrapper& dto);
	// 修改数据
	bool updateData(const WarehouseManagementDTO::Wrapper& dto);
	// 通过ID删除数据
	bool removeData(uint64_t id);
};

#endif // !_WAREHOUSEMANAGEMENT_SERVICE_

