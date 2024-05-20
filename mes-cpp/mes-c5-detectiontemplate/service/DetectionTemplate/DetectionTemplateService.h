#pragma once
#ifndef _DETECTIONTEMPLATE_SERVICE_
#define _DETECTIONTEMPLATE_SERVICE_

#include <list>
#include "domain/vo/DetectionTemplate/DetectionTemplateVO.h"
#include "domain/query/DetectionTemplate/DetectionTemplateQuery.h"
#include "domain/dto/DetectionTemplate/DetectionTemplateDTO.h"

class DetectionTemplateService {
public:
	// 获取检测模板列表函数, 分页查询所有数据
	DetectionTemplatePageDTO::Wrapper listAllTemplateList(const DetectionTemplateQuery::Wrapper& query);
};


#endif // !_DETECTIONTEMPLATE_SERVICE_
