#include "stdafx.h"
#include "ProcessinSpectionService.h"
#include "dao/ProcessinSpection/ProcessinSpectionDAO.h"

ProcessinSpectionDTO::Wrapper ProcessinSpectionService::getInspectionDetails(const ProcessinSpectionQuery::Wrapper& query) {
	auto resDTO = ProcessinSpectionDTO::createShared();

	ProcessinSpectionDAO dao;
	ProcessinSpectionDO resDO = dao.getInspectionDetails(query);
	// DO -> DTO
	//ZO_STAR_DOMAIN_DO_TO_DTO(resDTO, resDO, );

	return resDTO;
}

bool ProcessinSpectionService::confirmOrders(const ProcessinSpectionDTO::Wrapper& dto) {
	ProcessinSpectionDO date;
	//ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, );
	//执行数据修改
	ProcessinSpectionDAO dao;
	//return dao.confirmOrders_update(data) == 1;
}
