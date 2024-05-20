#pragma once
#ifndef _DETECTIONITEMSETTINGS_CONTROLLER_
#define _DETECTIONITEMSETTINGS_CONTROLLER_

#include "domain/vo/BaseJsonVO.h"
#include "domain/query/detectionitemsettings/DetectionItemSettingsQuery.h"
#include "domain/dto/detectionitemsettings/DetectionItemSettingsDTO.h"
#include "domain/vo/detectionitemsettings/DetectionItemSettingsVO.h"
#include OATPP_CODEGEN_BEGIN(ApiController)

class DetectionItemSettingsController : public oatpp::web::server::api::ApiController
{
	API_ACCESS_DECLARE(DetectionItemSettingsController);
public:
	//分页查询接口
	ENDPOINT_INFO(QueryqcSettings) {
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("qualitycontrol.detectionitemsettings.controller.query.summary"));
		API_DEF_ADD_AUTH();
		API_DEF_ADD_RSP_JSON_WRAPPER(DetectionItemSettingsPageJsonVO);
		API_DEF_ADD_PAGE_PARAMS();
		API_DEF_ADD_QUERY_PARAMS(String, "code", ZH_WORDS_GETTER("qualitycontrol.detectionitemsettings.controller.query.code"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "name", ZH_WORDS_GETTER("qualitycontrol.detectionitemsettings.controller.query.name"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "type", ZH_WORDS_GETTER("qualitycontrol.detectionitemsettings.controller.query.type"), "", false);
	}
	ENDPOINT(API_M_GET, "/query-qcsettings", QueryqcSettings,QUERIES(QueryParams, queryParams), API_HANDLER_AUTH_PARAME) {
		API_HANDLER_QUERY_PARAM(qcsettingsQuery, DetectionItemSettingsQuery, queryParams);
		//API_HANDLER_RESP_VO(execQueryqc(qcsettingsQuery,authObject->getPayload()));
		API_HANDLER_RESP_VO(execQueryqc(qcsettingsQuery));
	}

	//添加检测项接口
	ENDPOINT_INFO(addDetectionItemSettings) {
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("qualitycontrol.detectionitemsettings.controller.add.summary"));
		API_DEF_ADD_AUTH();
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
	}
	ENDPOINT(API_M_POST, "/add-qcsettings", addDetectionItemSettings, BODY_DTO(DetectionItemSettingsDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execAddqc(dto));
	}
	
	//修改检测项接口
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("qualitycontrol.detectionitemsettings.controller.modify.summary"), modifyDetectionItemSettings, Uint64JsonVO::Wrapper);
	API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/modify-qcsettings", modifyDetectionItemSettings, BODY_DTO(DetectionItemSettingsDTO::Wrapper, dto), execModifyqc(dto));

private:
	//DetectionItemSettingsPageJsonVO::Wrapper execQueryqc(const DetectionItemSettingsQuery::Wrapper& query, const PayloadDTO& payload);
	DetectionItemSettingsPageJsonVO::Wrapper execQueryqc(const DetectionItemSettingsQuery::Wrapper& query);
	Uint64JsonVO::Wrapper execAddqc(const DetectionItemSettingsDTO::Wrapper& dto);
	Uint64JsonVO::Wrapper execModifyqc(const DetectionItemSettingsDTO::Wrapper& dto);
};

#include OATPP_CODEGEN_END(ApiController)

#endif // !_DETECTIONITEMSETTINGS_CONTROLLER_