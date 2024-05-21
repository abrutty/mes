#include "stdafx.h"
#include "WarehouseManagementController.h"
#include "../../service/warehousemanagement/WarehouseManagementService.h"
#include "../ApiDeclarativeServicesHelper.h"

WarehouseManagementPageJsonVO::Wrapper WarehouseManagementController::execQueryWarehouseManagement(const WarehouseManagementQuery::Wrapper& query, const PayloadDTO& payload)
{
	
	// 定义一个Service
	WarehouseManagementService service;
	// 查询数据
	
	auto result = service.listAll(query);
	// 响应结果
	auto jvo = WarehouseManagementPageJsonVO::createShared();
	jvo->success(result);
	
	return jvo;
}

StringJsonVO::Wrapper WarehouseManagementController::execExportWarehouseManagement(const oatpp::List<UInt64>& ids)
{
	return StringJsonVO::Wrapper();
}