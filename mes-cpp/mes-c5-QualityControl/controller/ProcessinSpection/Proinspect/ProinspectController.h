#pragma once
#ifndef _PROINSPECT_CONTROLLER_
#define _PROINSPECT_CONTROLLER_
#include "domain/vo/BaseJsonVO.h"
#include "../../../domain/do/proinspect/ProinspectDO.h"
#include "../../../domain/dto/processinspection/proinspect/ProinspectDTO.h"
#include "../../../domain/vo/processinspection/proinspect/ProinspectVO.h"

#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen
class ProinspectController : public oatpp::web::server::api::ApiController {
	// 2 定义控制器访问入口
	API_ACCESS_DECLARE(ProinspectController);
	// 3 定义接口
public:
	ENDPOINT_INFO(addrecord) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("qualitycontrol.defect.addre"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
	}
	// 3.2 定义新增接口处理
	ENDPOINT(API_M_POST, "/proinspect", addrecord, BODY_DTO(ProinspectDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execAddrecord(dto));
	}
	// 3.1 定义修改接口描述
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("qualitycontrol.defect.setre"), execModifyrecord, Uint64JsonVO::Wrapper);
	// 3.2 定义修改接口处理
	API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/proinspect", execModifyrecord, BODY_DTO(ProinspectDTO::Wrapper, dto), execModifyrecord(dto));


	// 3.1 定义删除接口描述
	ENDPOINT_INFO(removerecord) {
		// 定义标题和返回类型以及授权支持
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("qualitycontrol.defect.delre"), Uint64JsonVO::Wrapper);
		// 定义其他路径参数说明
		API_DEF_ADD_PATH_PARAMS(UInt64, "record_id", ZH_WORDS_GETTER("qualitycontrol.defect.record_id"), 1, true);
	}
	// 3.2 定义删除接口处理
	API_HANDLER_ENDPOINT_AUTH(API_M_DEL, "/proinspect/{record_id}", removerecord, PATH(UInt64, record_id), execRemoverecord(record_id));

	////  定义获取过程检验单行列表接口描述
	//ENDPOINT_INFO(queryProcessInspectionList) {
	//	// 定义接口标题
	//	API_DEF_ADD_TITLE(ZH_WORDS_GETTER("processinspection.queryProcessInspectionList.summary"));
	//	// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
	//	API_DEF_ADD_AUTH();
	//	// 定义响应参数格式
	//	API_DEF_ADD_RSP_JSON_WRAPPER(ProcessInspectionPageJsonVO);
	//	// 定义其他查询参数描述
	//	API_DEF_ADD_QUERY_PARAMS(UInt64, "template_id", ZH_WORDS_GETTER("processinspection.field.template_id"), 1, true);
	//}
	////  定义获取过程检验单行列表接口处理
	//ENDPOINT(API_M_GET, "/inspectionitems1", queryProcessInspectionList, QUERIES(QueryParams, queryParams), API_HANDLER_AUTH_PARAME) {
	//	// 解析查询参数为Query领域模型
	//	API_HANDLER_QUERY_PARAM(userQuery, ProcessInspectionQuery, queryParams);
	//	// 呼叫执行函数响应结果
	//	API_HANDLER_RESP_VO(execQueryProcessInspectionList(userQuery, authObject->getPayload()));
	//}
	////  定义获取过程检验单行缺陷列表接口描述
	//ENDPOINT_INFO(queryProcessInspectionDefectList) {
	//	// 定义接口标题
	//	API_DEF_ADD_TITLE(ZH_WORDS_GETTER("processinspection.queryProcessInspectionDefectList.summary"));
	//	// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
	//	API_DEF_ADD_AUTH();
	//	// 定义响应参数格式
	//	API_DEF_ADD_RSP_JSON_WRAPPER(ProinspectPageJsonVO);
	//	// 定义其他查询参数描述
	//	API_DEF_ADD_QUERY_PARAMS(UInt64, "template_id", ZH_WORDS_GETTER("processinspection.field.template_id"), 2, true);
	//}
	////  定义获取过程检验单行缺陷列表接口处理
	//ENDPOINT(API_M_GET, "/inspectionitems2", queryProcessInspectionDefectList, QUERIES(QueryParams, queryParams), API_HANDLER_AUTH_PARAME) {
	//	// 解析查询参数为Query领域模型
	//	API_HANDLER_QUERY_PARAM(userQuery, ProinspectQuery, queryParams);
	//	// 呼叫执行函数响应结果
	//	API_HANDLER_RESP_VO(execQueryProcessInspectionDefectList(userQuery, authObject->getPayload()));
	//}

private:
	//演示添加数据
	Uint64JsonVO::Wrapper execAddrecord(const ProinspectDTO::Wrapper& dto);
	// 3.3 修改数据                           
	Uint64JsonVO::Wrapper execModifyrecord(const ProinspectDTO::Wrapper& dto);
	// 3.3 删除数据
	Uint64JsonVO::Wrapper execRemoverecord(const UInt64& record_id);

	//  获取过程检验单行列表
	//ProinspectPageJsonVO::Wrapper execQueryProcessInspectionList(const ProinspectQuery::Wrapper& query, const PayloadDTO& payload);
	//  获取过程检验单行缺陷列表
	//ProinspectPageJsonVO::Wrapper execQueryProcessInspectionDefectList(const ProinspectQuery::Wrapper& query, const PayloadDTO& payload);
};







// 0 取消API控制器使用宏
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen
#endif // _SAMPLE_CONTROLLER_