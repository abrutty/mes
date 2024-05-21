#pragma once
#ifndef _GETDETAILS_H_
#define _GETDETAILS_H_

#include "ApiHelper.h"
#include "ServerInfo.h"
#include "domain/query/PageQuery.h"
#include "domain/vo/BaseJsonVO.h"
#include "domain/query/ProcessinSpection/ProcessinSpectionQuery.h"
#include "domain/dto/ProcessinSpection/ProcessinSpectionDTO.h"
#include "domain/vo/ProcessinSpection/ProcessinSpectionVO.h"

// 0 定义API控制器使用宏
#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

class GetInspectionController : public oatpp::web::server::api::ApiController {
	// 定义控制器
	API_ACCESS_DECLARE(GetInspectionController);


public:	// 定义接口
	ENDPOINT_INFO(queryGetInspectionDetails) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("todo"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(ProcessinSpectionPageJsonVO);
		// 定义分页查询参数描述
		API_DEF_ADD_PAGE_PARAMS();
		// 定义其他查询参数描述
		API_DEF_ADD_QUERY_PARAMS(String, "ipqc_code", ZH_WORDS_GETTER("processinspection.field.ipqc_code"), "test", true);	// 只能根据检验单编号查询
	}
	ENDPOINT(API_M_GET, "/processinspection/inspectiondetails", queryGetInspectionDetails, QUERIES(QueryParams, queryParams), API_HANDLER_AUTH_PARAME) {
		API_HANDLER_QUERY_PARAM(detailsQuery, ProcessinSpectionQuery, queryParams);
		API_HANDLER_RESP_VO(execQueryInspectionDetails(detailsQuery, authObject->getPayload()));
	}

private:
	ProcessinSpectionPageJsonVO::Wrapper execQueryInspectionDetails(const ProcessinSpectionQuery::Wrapper& query, const PayloadDTO& payload);
};

// 0 取消API控制器使用宏
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif // !_GETDETAILS_H_
