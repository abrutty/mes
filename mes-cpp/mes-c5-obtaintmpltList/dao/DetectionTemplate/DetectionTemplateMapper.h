#pragma once
#ifndef _DETECTIONTEMPLATE_MAPPER_
#define _DETECTIONTEMPLATE_MAPPER_

#include "Mapper.h"
#include "../../domain/do/DetectionTemplate/DetectionTemplateDO.h"

class DetectionTemplateMapper : public Mapper<DetectionTemplateDO> {
public:
	DetectionTemplateDO mapper(ResultSet* resultSet) const override {
		DetectionTemplateDO data;
		data.settId(resultSet->getUInt64(1));
		data.settCode(resultSet->getString(2));
		data.settName(resultSet->getString(3));
		data.settTypes(resultSet->getString(4));
		data.settEnFlag(resultSet->getString(5));
		data.settRemark(resultSet->getString(6));
		return data;
	}
};

#endif // !_DETECTIONTEMPLATE_MAPPER_
