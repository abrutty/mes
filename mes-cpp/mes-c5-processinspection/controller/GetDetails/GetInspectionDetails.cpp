#include "stdafx.h"
#include "GetInspectionDetails.h"
#include "../../service/ProcessinSpection/ProcessinSpectionService.h"
#include "../ApiDeclarativeServicesHelper.h"

ProcessinSpectionJsonVO::Wrapper EnsureFinishOrdersController::execQueryInspectionDetails(const ProcessinSpectionQuery::Wrapper& query, const PayloadDTO& payload) {
	ProcessinSpectionService service;
	auto result = service.getInspectionDetails(query);
	auto jvo = ProcessinSpectionJsonVO::createShared();
	jvo->success(result);
	return jvo;
}
