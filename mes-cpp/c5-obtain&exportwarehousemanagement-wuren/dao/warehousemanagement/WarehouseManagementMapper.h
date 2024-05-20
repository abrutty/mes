#pragma once
#ifndef _DETECTIONTEMPLATE_MAPPER_
#define _DETECTIONTEMPLATE_MAPPER_

#include "Mapper.h"
#include "../../domain/do/detectiontemplate/DetectionTemplateDO.h"


class DetectionTemplateMapper : public Mapper<SampleDO>
{
public:
	DetectionTemplateDO mapper(ResultSet* resultSet) const override
	{
		DetectionTemplateDO data;
		data.setId(resultSet->getUInt64(1));
		data.setName(resultSet->getString(2));
		data.setSex(resultSet->getString(3));
		data.setAge(resultSet->getInt(4));
		

		return data;
	}
};

#endif // !_DETECTIONTEMPLATE_MAPPER_