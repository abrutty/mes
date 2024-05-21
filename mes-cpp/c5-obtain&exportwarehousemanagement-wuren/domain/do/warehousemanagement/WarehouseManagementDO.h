#pragma once

#ifndef _WAREHOUSEMANAGEMENT_DO_
#define _WAREHOUSEMANAGEMENT_DO_
#include "../DoInclude.h"

/**
 * 数据库实体类
 */
class WarehouseManagementDO
{

	//产品物料编码
	CC_SYNTHESIZE(string, item_code, Item_Code);

	// 产品物料名称
	CC_SYNTHESIZE(string, item_name, Item_Name);
	// 规格型号
	CC_SYNTHESIZE(string, specification, Specification);
	// 单位
	CC_SYNTHESIZE(string, unit_of_measure, Unit_Of_Measure);
	// 入库批次号
	CC_SYNTHESIZE(string, batch_code, Batch_Code);
	//仓库名称
	CC_SYNTHESIZE(string, warehouse_name, Warehouse_Name);
	// 库区名称
	CC_SYNTHESIZE(string, location_name, Location_Name);
	// 库位名称
	CC_SYNTHESIZE(string, area_name, Area_Name);
	// 供应商编号
	CC_SYNTHESIZE(string, vendor_code, Vendor_Code);
	// 供应商名称
	CC_SYNTHESIZE(uint32_t, vendor_name, Vendor_Name);
	// 供应商简称
	CC_SYNTHESIZE(string, vendor_nick, Vendor_Nick);
	// 生产工单编号
	CC_SYNTHESIZE(string, workorder_code, Workorder_Code);
	// 接收日期
	CC_SYNTHESIZE(string, recpt_date, Recpt_Date);
	// 库存有效期
	CC_SYNTHESIZE(uint32_t, expire_date, Expire_Date);
public:
	WarehouseManagementDO() {
		item_code = "";
		item_name = "";
		specification = "";
		unit_of_measure = "";
		batch_code = "";
		warehouse_name = "";
		location_name = "";
		area_name = "";
		vendor_code = "";
		vendor_name = 0;
		vendor_nick = "";
		workorder_code = "";
		recpt_date = "";
		expire_date = 0;
	}
};

#endif // !_WAREHOUSEMANAGEMENT_DO_
