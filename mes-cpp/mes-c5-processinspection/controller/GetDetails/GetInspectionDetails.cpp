#include "stdafx.h"
#include "GetInspectionDetails.h"
//#include "../../service/ProcessinSpection/ProcessinSpectionService.h"
#include "../ApiDeclarativeServicesHelper.h"

ProcessinSpectionPageJsonVO::Wrapper GetInspectionController::execQueryInspectionDetails(const ProcessinSpectionQuery::Wrapper& query, const PayloadDTO& payload) {
	//ProcessinSpectionService service;
	//auto result = service.getInspectionDetails(query);
	auto jvo = ProcessinSpectionPageJsonVO::createShared();
	//jvo->success(result);
	//jvo->success(String("test 1"));
	//jvo->success(1);
	return jvo;
}
