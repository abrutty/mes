#include "stdafx.h"
#include "DetectionTemplateController.h"

#include "../../service/sample/SampleService.h"
#include "../ApiDeclarativeServicesHelper.h"


Uint64JsonVO::Wrapper DetectionTemplateController::execAddDetectionTemplate(const DetectionTemplateDTO::Wrapper& dto)
{
	// 定义返回数据对象
	auto jvo = Uint64JsonVO::createShared();
	// 参数校验
	// 非空校验
	if (!dto->template_code || !dto->template_name || !dto->qc_types)
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}


	// 定义一个Service
	SampleService service;
	// 执行数据新增
	uint64_t id = service.saveData(dto);
	if (id > 0) {
		jvo->success(UInt64(id));
	}
	else
	{
		jvo->fail(UInt64(id));
	}
	//响应结果
	return jvo;
}
