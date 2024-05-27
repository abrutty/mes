#include "stdafx.h"
#include "DetectionItemsController.h"
#include "../../ApiDeclarativeServicesHelper.h"
#include "../../../service/deletdetectiontemplate/TemplateDetectItemServive/TemplateDetectItemService.h"
TemplateDetectItemPageJsonVO::Wrapper DetectionItemsController::execQueryTemplateDetectItem(const TemplateDetectItemQuery::Wrapper& query)
{
	TemplateDetectItemService service;
	auto result = service.listAllTemplateDetectItem(query); // ��ҳ��ѯ���ģ����������
	auto jvo = TemplateDetectItemPageJsonVO::createShared();
	jvo->success(result);
	return jvo;
}

Uint64JsonVO::Wrapper DetectionItemsController::execModifyTemplateDetectItem(const TemplateDetectItemDTO::Wrapper& dto)
{
	// ���巵�����ݶ���
	auto jvo = Uint64JsonVO::createShared();
	TemplateDetectItemService service;
	// ִ�������޸�
	if (service.updateTemplateDetectItem(dto)) {
		jvo->success(dto->record_id);
	}
	else {
		jvo->fail(dto->record_id);
	}
	// ��Ӧ���
	return jvo;
}

Uint64JsonVO::Wrapper DetectionItemsController::execAddTemplateDetectItem(const TemplateDetectItemDTO::Wrapper& dto)
{
	// ���巵�����ݶ���
	auto jvo = Uint64JsonVO::createShared();
	// ����У��
	// �ǿ�У��
	if (!dto->template_id || !dto->index_id || !dto->index_code || !dto->index_name || !dto->index_type)
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}
	// ��ЧֵУ��
	if (dto->template_id < 0 || dto->index_id<0 || dto->index_code->empty() || dto->index_name->empty() || dto->index_type->empty())
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}

	// ����һ��Service
	TemplateDetectItemService service;
	// ִ����������
	uint64_t id = service.saveTemplateDetectItem(dto);
	if (id > 0) {
		jvo->success(UInt64(id));
	}
	else {
		jvo->fail(UInt64(id));
	}
	//��Ӧ���
	return jvo;
}

Uint64JsonVO::Wrapper DetectionItemsController::execRemoveTemplateDetectItem(const UInt64& record_id)
{
	// ���巵�����ݶ���
	auto jvo = Uint64JsonVO::createShared();
	// ����У��
	if (!record_id || record_id <= 0)
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}
	// ����һ��Service
	TemplateDetectItemService service;
	// ִ������ɾ��
	if (service.removeTemplateDetectItem(record_id.getValue(0))) {
		jvo->success(record_id);
	}
	else {
		jvo->fail(record_id);
	}
	// ��Ӧ���
	return jvo;
}
