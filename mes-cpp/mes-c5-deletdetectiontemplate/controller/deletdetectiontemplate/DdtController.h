#pragma once

#ifndef _DDTCONTROLLER_H_
#define _DDTCONTROLLER_H_

#include "ApiHelper.h"
#include "domain/vo/BaseJsonVO.h"
#include "service/deletdetectiontemplate/DdtService.h"
#include "domain/vo/DdtVO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class DdtController : public oatpp::web::server::api::ApiController
{
	//定义控制器访问入口
	API_ACCESS_DECLARE(DdtController);
public://定义接口
	ENDPOINT_INFO(removeSample) {
		// 定义标题和返回类型以及授权支持
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("detection_template.delete.summary"), Uint64JsonVO::Wrapper);
		// 定义其他路径参数说明
		API_DEF_ADD_PATH_PARAMS(UInt64, "id", ZH_WORDS_GETTER("detection_template.fields.id"), 1, true);
	}
	// 3.2 定义删除接口处理
	API_HANDLER_ENDPOINT_AUTH(API_M_DEL, "/template/{id}", removeSample, PATH(UInt64, id), execRemoveSample(id));

private:
	Uint64JsonVO::Wrapper execRemoveSample(const UInt64& id);
};

#endif