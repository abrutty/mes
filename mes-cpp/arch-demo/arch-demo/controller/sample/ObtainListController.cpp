#include "stdafx.h"
#include "SampleController.h"
#include "../../service/sample/SampleService.h"
#include "../ApiDeclarativeServicesHelper.h"

SamplePageJsonVO::Wrapper SampleController::execQuerySample(const SampleQuery::Wrapper& query, const PayloadDTO& payload)
{
	// 定义一个Service
	SampleService service;
	// 查询数据
	auto result = service.listAll(query);
	// 响应结果
	auto jvo = SamplePageJsonVO::createShared();
	jvo->success(result);
	return jvo;
}
