#include "stdafx.h"
#include "GetTemplateList.h"
#include "../../service/DetectionTemplate/DetectionTemplateService.h"
#include "../ApiDeclarativeServicesHelper.h"

DetectionTemplatePageJsonVO::Wrapper GetDetectionTemplateController::execQueryDetectionTemplateList(const DetectionTemplateQuery::Wrapper& query, const PayloadDTO& payload) {
	DetectionTemplateService service;
	auto result = service.listAllTemplateList(query);
	auto jvo = DetectionTemplatePageJsonVO::createShared();
	jvo->success(result);
	return jvo;
}
