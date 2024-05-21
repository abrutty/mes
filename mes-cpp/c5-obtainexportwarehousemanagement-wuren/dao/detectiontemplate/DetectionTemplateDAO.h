#pragma once
#ifndef _DETECTIONTEMPLATE_DAO_
#define _DETECTIONTEMPLATE_DAO_
#include "BaseDAO.h"
#include "../../domain/do/detectiontemplate/DetectionTemplateDO.h"
#include "../../domain/query/detectiontemplate/DetectionTemplateQuery.h"

/**
 * 示例表数据库操作实现
 */
class DetectionTemplateDAO : public BaseDAO
{
public:
	// 统计数据条数
	uint64_t count(const DetectionTemplateQuery::Wrapper& query);

	// 插入数据
	uint64_t insert(const DetectionTemplateDO& iObj);

};
#endif // !_DETECTIONTEMPLATE_DAO_
