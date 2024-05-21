#pragma once
#ifndef _DETECTIONTEMPLATE_MAPPER_
#define _DETECTIONTEMPLATE_MAPPER_

#include "Mapper.h"
#include "../../domain/do/detectiontemplate/DetectionTemplateDO.h"


class DetectionTemplateMapper : public Mapper<DetectionTemplateDO>
{
public:
	DetectionTemplateDO mapper(ResultSet* resultSet) const override
	{
		DetectionTemplateDO data;
		data.(resultSet->getUInt64(1));
		data.setTemplate_Id(resultSet->getInt(2));
		data.setTemplate_Code(resultSet->getString(3));
		data.setTemplate_Name(resultSet->getString(4));
		data.setItem_Code(resultSet->getString(5));
		data.setItem_Name(resultSet->getString(6));
		data.setQc_Types(resultSet->getString(7));
		data.setEnable_Flag(resultSet->getString(8));
		data.setRemark(resultSet->getString(9));
		return data;
	}
};

#endif // !_DETECTIONTEMPLATE_MAPPER_