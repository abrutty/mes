#pragma once
#ifndef _WAREHOUSEMANAGEMENT_MAPPER_
#define _WAREHOUSEMANAGEMENT_MAPPER_

#include "Mapper.h"
#include "../../domain/do/warehousemanagement/WarehouseManagementDO.h"


class WarehouseManagementMapper : public Mapper<WarehouseManagementDO>
{
public:
	WarehouseManagementDO mapper(ResultSet* resultSet) const override
	{
		WarehouseManagementDO data;
		data.setItem_Code(resultSet->getString(2));
		data.setItem_Name(resultSet->getString(3));
		data.setSpecification(resultSet->getString(4));
		data.setUnit_Of_Measure(resultSet->getString(5));
		data.setBatch_Code(resultSet->getString(6));
		data.setWarehouse_Name(resultSet->getString(7));
		data.setLocation_Name(resultSet->getString(8));
		data.setArea_Name(resultSet->getString(9));
		data.setVendor_Code(resultSet->getString(10));
		data.setVendor_Name(resultSet->getIUnt32(11));
		data.setVendor_Nick(resultSet->getString(12));
		data.setWorkorder_Code(resultSet->getString(13));
		data.setRecpt_Date(resultSet->getString(14));
		data.setExpire_Date(resultSet->getUInt32(15));
		
		return data;
	}
};

#endif // !_WAREHOUSEMANAGEMENT_MAPPER_