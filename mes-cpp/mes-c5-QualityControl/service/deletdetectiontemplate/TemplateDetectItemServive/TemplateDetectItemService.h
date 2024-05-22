#pragma once
#ifndef _TEMPLATEDETECTITEM_SERVICE_
#define _TEMPLATEDETECTITEM_SERVICE_

#include <list>
#include "../../../domain/dto/detectiontemplate/TemplateDetectItemDTO.h"
#include "../../../domain/vo/detectiontemplate/TemplateDetectItemJsonVO.h"
#include "../../../domain/do/DetectionTemplate/TemplateDetectItemDO.h"
#include "../../../domain/query/detectiontemplate/TemplateDetectItemQuery.h"

class TemplateDetectItemService
{
public:
	// ��ҳ��ѯ��������
	TemplateDetectItemPageDTO::Wrapper listAllTemplateDetectItem(const TemplateDetectItemQuery::Wrapper& query);
	// �޸�����
	bool updateTemplateDetectItem(const TemplateDetectItemDTO::Wrapper& dto);
	// ��������
	uint64_t saveTemplateDetectItem(const TemplateDetectItemDTO::Wrapper& dto);
	// ͨ��IDɾ������
	bool removeTemplateDetectItem(uint64_t id);
};

#endif // !_TEMPLATEDETECTITEM_SERVICE_