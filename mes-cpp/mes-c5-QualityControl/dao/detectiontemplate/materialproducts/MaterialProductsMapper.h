#pragma once
#ifndef _MATERIALPRODUCTS_MAPPER_
#define _MATERIALPRODUCTS_MAPPER_

#include "Mapper.h"
#include "../../../domain/do/DetectionTemplate/MaterialProductsDO.h"

class MaterialProductsMapper : public Mapper<MaterialProductsDO>
{
public:
	MaterialProductsDO mapper(ResultSet* resultSet) const override
	{
		MaterialProductsDO data;
		data.settemplateId(resultSet->getUInt64(1));
		data.setitemCode(resultSet->getUInt64(2));
		data.setitemName(resultSet->getString(3));
		data.setspecification(resultSet->getString(4));
		data.setunitOfmeasure(resultSet->getString(5));
		data.setquantityCheck(resultSet->getString(6));
		data.setcrRate(resultSet->getString(7));
		data.setmajRate(resultSet->getString(8));
		data.setminRate(resultSet->getString(9));
		data.setremark(resultSet->getString(11));
		data.setcreateTime(resultSet->getString(12));
		return data;
	}
};
#endif // !_MATERIALPRODUCTS_MAPPER_
