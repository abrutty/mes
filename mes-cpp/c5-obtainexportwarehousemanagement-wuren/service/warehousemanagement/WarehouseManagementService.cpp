#include "stdafx.h"
#include "WarehouseManagementService.h"
#include "../../dao/warehousemanagement/WarehouseManagementDAO.h"

//只写了获取，没有写导出
WarehouseManagementPageDTO::Wrapper WarehouseManagementService::listAll(const WarehouseManagementQuery::Wrapper& query)
{
	// 构建返回对象
	auto pages = WarehouseManagementPageDTO::createShared();
	pages->pageIndex = query->pageIndex;
	pages->pageSize = query->pageSize;

	// 查询数据总条数
	WarehouseManagementDAO dao;
	uint64_t count = dao.count(query);
	if (count <= 0)
	{
		return pages;
	}

	// 分页查询数据
	pages->total = count;
	pages->calcPages();
	list<WarehouseManagementDO> result = dao.selectWithPage(query);
	// 将DO转换成DTO
	for (WarehouseManagementDO sub : result)
	{
		auto dto = WarehouseManagementDTO::createShared();
		// 		dto->id = sub.getId();
		// 		dto->name = sub.getName();
		// 		dto->sex = sub.getSex();
		// 		dto->age = sub.getAge();
		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub,  item_code, Item_Code,  item_name, Item_Name, batch_code, Batch_Code, warehouse_name, Warehouse_Name, vendor_code, Vendor_Code, vendor_name, Vendor_Name)
		pages->addData(dto);
	}
	return pages;
}