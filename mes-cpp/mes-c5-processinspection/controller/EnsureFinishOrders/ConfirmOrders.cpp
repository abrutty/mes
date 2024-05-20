#include "stdafx.h"
#include "ConfirmOrders.h"
#include "../../service/ProcessinSpection/ProcessinSpectionService.h"
#include "../ApiDeclarativeServicesHelper.h"


// TODO: 完成检验单后续更改数据库数据
Uint64JsonVO::Wrapper ConfirmOrdersController::execConfirmOrders(const ProcessinSpectionDTO::Wrapper& dto) {
	auto jvo = Uint64JsonVO::createShared();
	// 确认检验单需要选择检验结果
	if (dto->check_result == "") {
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}
	ProcessinSpectionService service;
	if (service.confirmOrders(dto)) {
		jvo->success(dto->check_result);
	} else {
		jvo->fail(dto->check_result);
	}
	return jvo;

}
