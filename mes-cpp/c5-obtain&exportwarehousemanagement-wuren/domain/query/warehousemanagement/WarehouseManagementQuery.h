#pragma once

#ifndef _WAREHOUSEMANAGEMENT_QUERY_
#define _WAREHOUSEMANAGEMENT_QUERY_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

//分页查询对象
class WarehouseManagementQuery : public PageQuery
{
	DTO_INIT(WarehouseManagementQuery, PageQuery);
	//产品物料编码
	DTO_FIELD(String, item_code);
	DTO_FIELD_INFO(item_code) {
		info->description = ZH_WORDS_GETTER("WarehouseManagement.field.item_code");
	}

	// 产品物料名称
	DTO_FIELD(String, item_name);
	DTO_FIELD_INFO(item_name) {
		info->description = ZH_WORDS_GETTER("WarehouseManagement.field.item_name");
	}

	// 入库批次号
	DTO_FIELD(String, batch_code);
	DTO_FIELD_INFO(batch_code) {
		info->description = ZH_WORDS_GETTER("WarehouseManagement.field.batch_code");
	}

	//仓库名称
	DTO_FIELD(String, warehouse_name);
	DTO_FIELD_INFO(warehouse_name) {
		info->description = ZH_WORDS_GETTER("WarehouseManagement.field.warehouse_name");
	}

	// 供应商编号
	DTO_FIELD(String, vendor_code);
	DTO_FIELD_INFO(vendor_code) {
		info->description = ZH_WORDS_GETTER("WarehouseManagement.field.vendor_code");
	}

	// 供应商名称
	DTO_FIELD(UInt32, vendor_name);
	DTO_FIELD_INFO(vendor_name) {
		info->description = ZH_WORDS_GETTER("WarehouseManagement.field.vendor_name");
	}




};

#include OATPP_CODEGEN_END(DTO)
#endif // !_WAREHOUSEMANAGEMENT_QUERY_