#include "stdafx.h"
#include "DdtService.h"


bool DdtService::removeData(uint64_t id)
{
	DdtDAO dao;
	return dao.deleteById(id) == 1;
}