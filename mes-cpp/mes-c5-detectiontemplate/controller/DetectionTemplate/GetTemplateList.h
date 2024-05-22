#pragma once
#ifndef _GETTEMPLATELIST_H_
#define _GETTEMPLATELIST_H_


#include "ApiHelper.h"
#include "ServerInfo.h"
#include "domain/query/PageQuery.h"
#include "domain/vo/BaseJsonVO.h"
#include "domain/query/DetectionTemplate/DetectionTemplateQuery.h"
#include "domain/dto/DetectionTemplate/DetectionTemplateDTO.h"
#include "domain/vo/DetectionTemplate/DetectionTemplateVO.h"

// 0 定义API控制器使用宏
#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

class GetDetectionTemplateController : public oatpp::web::server::api::ApiController {
	// 定义控制器
	API_ACCESS_DECLARE(GetDetectionTemplateController);


public:	// 定义接口

	ENDPOINT_INFO(queryDetectionTemplateList) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("DetectionTemplate.get.title"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(DetectionTemplatePageJsonVO);
		// 定义分页查询参数描述
		API_DEF_ADD_PAGE_PARAMS();
		// 定义其他查询参数描述
		API_DEF_ADD_QUERY_PARAMS(UInt64, "template_id", ZH_WORDS_GETTER("DetectionTemplate.field.template_id"), 18, false);
		API_DEF_ADD_QUERY_PARAMS(String, "template_code", ZH_WORDS_GETTER("DetectionTemplate.field.template_code"), "QCT2022040", false);
		API_DEF_ADD_QUERY_PARAMS(String, "template_name", ZH_WORDS_GETTER("DetectionTemplate.field.template_name"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "enable_flag", ZH_WORDS_GETTER("DetectionTemplate.field.enable_flag"), "Y", false);
		//API_DEF_ADD_QUERY_PARAMS(String, "remark", ZH_WORDS_GETTER("DetectionTemplate.field.remark"), "", false);
	}

	ENDPOINT(API_M_GET, "/detectiontemplate/getdetectiontemplatelist/page", queryDetectionTemplateList, QUERIES(QueryParams, queryParams), API_HANDLER_AUTH_PARAME) {
		// 解析查询参数为Query领域模型
		API_HANDLER_QUERY_PARAM(templateListQuery, DetectionTemplateQuery, queryParams);
		// 呼叫执行函数
		API_HANDLER_RESP_VO(execQueryDetectionTemplateList(templateListQuery, authObject->getPayload()));
	}


private:	// 定义接口执行函数
	DetectionTemplatePageJsonVO::Wrapper execQueryDetectionTemplateList(const DetectionTemplateQuery::Wrapper& query, const PayloadDTO& payload);
};


// 0 取消API控制器使用宏
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen


#endif // !_GETTEMPLATELIST_H_
