#pragma once
#ifndef _PROCESSINSPECTION_DAO_
#define _PROCESSINSPECTION_DAO_

#include "BaseDAO.h"
#include "../../domain/do/ProcessinSpection/ProcessinSpectionDO.h"
#include "../../domain/query/ProcessinSpection/ProcessinSpectionQuery.h"

class ProcessinSpectionDAO : public BaseDAO {
public:
	ProcessinSpectionDO getInspectionDetails(const ProcessinSpectionQuery::Wrapper& query);
};

#endif // !_PROCESSINSPECTION_DAO_
