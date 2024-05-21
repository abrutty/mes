#pragma once
#ifndef _DETECTIONTEMPLATE_SERVICE_
#define _DETECTIONTEMPLATE_SERVICE_
#include <list>
#include "domain/vo/detectiontemplate/DetectionTemplateVO.h"
#include "domain/query/detectiontemplate/DetectionTemplateQuery.h"
#include "domain/dto/detectiontemplate/DetectionTemplateDTO.h"

/**
 * 服务实现，基础的示例服务实现
 */
class DetectionTemplateService
{
public:
	// 分页查询所有数据
	DetectionTemplatePageDTO::Wrapper listAll(const DetectionTemplateQuery::Wrapper& query);
	// 保存数据
	uint64_t saveData(const DetectionTemplateDTO::Wrapper& dto);
	// 修改数据
	bool updateData(const DetectionTemplateDTO::Wrapper& dto);
	// 通过ID删除数据
	bool removeData(uint64_t id);
};

#endif // !_DETECTIONTEMPLATE_SERVICE_

