#pragma once
#ifndef _DETECTIONTEMPLATE_CONTROLLER_
#define _DETECTIONTEMPLATE_CONTROLLER_

#include "Macros.h"
#include "domain/vo/BaseJsonVO.h"
#include "../../domain/dto/detectiontemplate/DetectionTemplateDTO.h"
#include "../../domain/query/detectiontemplate/DetectionTemplateQuery.h"
#include "../../domain/vo/detectiontemplate/DetectionTemplateVO.h"

// 0 定义API控制器使用宏
#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

/**
 * 修改检测模板 余晖
 */
class DetectionTemplateController : public oatpp::web::server::api::ApiController // 1 继承控制器
{
	// 2 定义控制器访问入口
	API_ACCESS_DECLARE(DetectionTemplateController);
	// 3 定义接口
public:
	// 3.1 定义修改接口描述
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("DetectionTemplate.put.summary"), modifyDetectionTemplate, Uint64JsonVO::Wrapper);
	// 3.2 定义修改接口处理
	API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/DetectionTemplate/modify", modifyDetectionTemplate, BODY_DTO(DetectionTemplateDTO::Wrapper, dto), execModifyDetectionTemplate(dto));

private:
	Uint64JsonVO::Wrapper execModifyDetectionTemplate(const DetectionTemplateDTO::Wrapper& dto);
};

// 0 取消API控制器使用宏
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen
#endif // _DETECTIONTEMPLATE_CONTROLLER_