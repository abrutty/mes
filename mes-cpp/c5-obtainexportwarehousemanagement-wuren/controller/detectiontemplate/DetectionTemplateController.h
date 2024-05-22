#pragma once
#ifndef _DETECTIONTEMPLATECONTROLLER_CONTROLLER_
#define _DETECTIONTEMPLATECONTROLLER_CONTROLLER_

#include "domain/vo/BaseJsonVO.h"
#include "domain/query/detectiontemplate/DetectionTemplateQuery.h"
#include "domain/dto/detectiontemplate/DetectionTemplateDTO.h"
#include "domain/vo/detectiontemplate/DetectionTemplateVO.h"

// 0 定义API控制器使用宏
#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

class DetectionTemplateController : public oatpp::web::server::api::ApiController // 继承控制器
{
	//定义控制器访问入口
	API_ACCESS_DECLARE(DetectionTemplateController);
	
public:

	// 定义新增接口描述
	ENDPOINT_INFO(addDetectionTemplate) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("DetectionTemplate.post.summary"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
	}
	// 定义新增接口处理
	ENDPOINT(API_M_POST, "/detectiontemplate", addDetectionTemplate, BODY_DTO(DetectionTemplateDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execAddDetectionTemplate(dto));
	}
private:

	// 新增数据
	Uint64JsonVO::Wrapper execAddDetectionTemplate(const DetectionTemplateDTO::Wrapper& dto);

};

// 0 取消API控制器使用宏
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen
#endif // _DETECTIONTEMPLATECONTROLLER_CONTROLLER_