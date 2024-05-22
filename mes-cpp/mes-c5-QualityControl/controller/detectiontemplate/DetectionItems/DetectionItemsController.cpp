#include "stdafx.h"
#include "DetectionItemsController.h"
#include "../../ApiDeclarativeServicesHelper.h"
//#include "../../../service/detectiontemplate/TemplateDetectItemService.h"
#include "../../../service/deletdetectiontemplate/TemplateDetectItemServive/TemplateDetectItemService.h"
TemplateDetectItemPageJsonVO::Wrapper DetectionItemsController::execQueryTemplateDetectItem(const TemplateDetectItemQuery::Wrapper& query)
{
	TemplateDetectItemService service;
	auto result = service.listAllTemplateDetectItem(query); // 分页查询检测模板检测项数据
	auto jvo = TemplateDetectItemPageJsonVO::createShared();
	jvo->success(result);
	return jvo;
	return {};
}

Uint64JsonVO::Wrapper DetectionItemsController::execModifyTemplateDetectItem(const TemplateDetectItemDTO::Wrapper& dto)
{
	// 定义返回数据对象
	auto jvo = Uint64JsonVO::createShared();
	TemplateDetectItemService service;
	// 执行数据修改
	if (service.updateTemplateDetectItem(dto)) {
		jvo->success(dto->record_id);
	}
	else {
		jvo->fail(dto->record_id);
	}
	// 响应结果
	return jvo;
	return {};
}

Uint64JsonVO::Wrapper DetectionItemsController::execAddTemplateDetectItem(const TemplateDetectItemDTO::Wrapper& dto)
{
	// 定义返回数据对象
	auto jvo = Uint64JsonVO::createShared();
	// 参数校验
	// 非空校验
	if (!dto->template_id || !dto->index_id || !dto->index_code || !dto->index_name || !dto->index_type)
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}
	// 有效值校验
	/*if (dto->template_id < 0 || dto->index_id<0 || dto->index_code->empty() || dto->index_name->empty() || dto->index_type->empty())
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}*/

	// 定义一个Service
	TemplateDetectItemService service;
	// 执行数据新增
	uint64_t id = service.saveTemplateDetectItem(dto);
	if (id > 0) {
		jvo->success(UInt64(id));
	}
	else {
		jvo->fail(UInt64(id));
	}
	//响应结果
	return jvo;
	return {};
}

Uint64JsonVO::Wrapper DetectionItemsController::execRemoveTemplateDetectItem(const UInt64& record_id)
{
	// 定义返回数据对象
	auto jvo = Uint64JsonVO::createShared();
	// 参数校验
	if (!record_id || record_id <= 0)
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}
	// 定义一个Service
	TemplateDetectItemService service;
	// 执行数据删除
	if (service.removeTemplateDetectItem(record_id.getValue(0))) {
		jvo->success(record_id);
	}
	else {
		jvo->fail(record_id);
	}
	// 响应结果
	return jvo;
	return {};
}
