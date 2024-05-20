#pragma once
#ifndef _DETECTIONTEMPLATE_DAO_
#define _DETECTIONTEMPLATE_DAO_

#include "BaseDAO.h"
#include "../../domain/do/DetectionTemplate/DetectionTemplateDO.h"
#include "../../domain/query/DetectionTemplate/DetectionTemplateQuery.h"

class DetectionTemplateDAO : public BaseDAO {
public:
	// 统计检测模板数据条数
	uint64_t count(const DetectionTemplateQuery::Wrapper& query);
	// 检测模板列表函数, 分页查询数据
	list<DetectionTemplateDO> selectTemplateListWithPage(const DetectionTemplateQuery::Wrapper& query);

};

#endif // !_DETECTIONTEMPLATE_DAO_
