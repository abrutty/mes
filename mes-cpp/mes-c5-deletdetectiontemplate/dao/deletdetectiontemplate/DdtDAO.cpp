#include "stdafx.h"
#include "DdtDAO.h"
#include <sstream>



int DdtDAO::deleteById(uint64_t id)
{
	string sql = "DELETE FROM `qc_template` WHERE `id`=?";
	return sqlSession->executeUpdate(sql, "%ull", id);
}