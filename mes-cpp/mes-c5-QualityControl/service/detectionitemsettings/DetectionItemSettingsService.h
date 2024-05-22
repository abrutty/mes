#pragma once
#ifndef _DETECTIONITEMSETTINGS_SERVICE_
#define _DETECTIONITEMSETTINGS_SERVICE_

#include <list>
#include "domain/query/detectionitemsettings/DetectionItemSettingsQuery.h"
#include "domain/dto/detectionitemsettings/DetectionItemSettingsDTO.h"
#include "domain/vo/detectionitemsettings/DetectionItemSettingsJsonVO.h"

class DetectionItemSettingsService
{
public:
	DetectionItemSettingsPageDTO::Wrapper listAll(const DetectionItemSettingsQuery::Wrapper& query);
	uint64_t saveData(const DetectionItemSettingsDTO::Wrapper& dto);
	bool updateData(const DetectionItemSettingsDTO::Wrapper& dto);
	bool removeData(uint64_t id);
};

#endif // !_DETECTIONITEMSETTINGS_SERVICE_
