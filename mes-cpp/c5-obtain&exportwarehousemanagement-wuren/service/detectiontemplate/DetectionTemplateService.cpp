#include "stdafx.h"
#include "DetectionTemplateService.h"
#include "../../dao/detectiontemplate/DetectionTemplateDAO.h"

uint64_t DetectionTemplateService::saveData(const DetectionTemplateDTO::Wrapper& dto)
{
	// 组装DO数据
	DetectionTemplateDO data;
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Template_Id, template_id, Template_Code, template_code, Template_Name, template_name)
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Item_Code, item_code, Item_Name, item_name, Qc_Types, qc_types)
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Enable_Flag, enable_flag, Remark, remark)
		// 执行数据添加
		DetectionTemplateDAO dao;
	return dao.insert(data);
}
