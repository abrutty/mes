#include "stdafx.h"
#include "ProcessinSpectionController.h"
//#include "../../service/sample/SampleService.h"
//#include "../ApiDeclarativeServicesHelper.h"
#include "../ApiDeclarativeServicesHelper.h"

ProcessinSpectionPageJsonVO::Wrapper ProcessinSpectionController::execProcessinSpection(const ProcessinSpectionQuery::Wrapper& query, const PayloadDTO& payload)
{
	return {};
}

Uint64JsonVO::Wrapper ProcessinSpectionController::execRemoveProcessinSpection(const List<UInt64>& ids)
{
	return Uint64JsonVO::Wrapper();
}

StringJsonVO::Wrapper ProcessinSpectionController::execExportProcessinSpection(const oatpp::List<UInt64>& ids)
{
	return StringJsonVO::Wrapper();
}
