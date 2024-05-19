#include "stdafx.h"
#include "DetectionTemplateService.h"
#include "dao/DetectionTemplate/DetectionTemplateDAO.h"

DetectionTemplatePageDTO::Wrapper DetectionTemplateService::listAllTemplateList(const DetectionTemplateQuery::Wrapper& query) {
	// 构建返回对象
	auto pages = DetectionTemplatePageDTO::createShared();
	pages->pageIndex = query->pageIndex;
	pages->pageSize = query->pageSize;

	// 查询数据总条数
	DetectionTemplateDAO dao;
	uint64_t count = dao.count(query);
	if (count <= 0) {
		return pages;
	}

	// 分页查询数据
	pages->total = count;
	pages->calcPages();
	list<DetectionTemplateDO> result = dao.selectTemplateListWithPage(query);
	// 将DO转换成DTO
	for (DetectionTemplateDO sub : result) {
		auto dto = DetectionTemplateDTO::createShared();
		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub, template_id, tId, template_code, tCode, template_name, tName, enable_flag, tEnFlag, remark, tRemark);
		pages->addData(dto);
	}
	return pages;
}
