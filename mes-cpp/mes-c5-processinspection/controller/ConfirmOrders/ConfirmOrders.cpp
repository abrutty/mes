#include "stdafx.h"
#include "ConfirmOrders.h"
//#include "../../service/ProcessinSpection/ProcessinSpectionService.h"
#include "../ApiDeclarativeServicesHelper.h"


// TODO: 完成检验单后续更改数据库数据
Uint64JsonVO::Wrapper ConfirmOrdersController::execConfirmOrders(const ProcessinSpectionDTO::Wrapper& dto) {
	auto jvo = Uint64JsonVO::createShared();
	//jvo->success(UInt64(1));
	return jvo;

}
