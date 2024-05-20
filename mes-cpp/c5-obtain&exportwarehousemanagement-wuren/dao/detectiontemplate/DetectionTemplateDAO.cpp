#include "stdafx.h"
#include "DetectionTemplateDAO.h"
#include "DetectionTemplateMapper.h"
#include <sstream>

//定义条件解析宏，减少重复代码
#define DETECTIONTEMPLATE_TERAM_PARSE(query, sql) \
SqlParams params; \
sql<<" WHERE 1=1"; \
if (query->template_code) { \
	sql << " AND template_code=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->template_code.getValue("")); \
} \
if (query->template_name) {\
	sql << " AND template_name=?"; \
	SQLPARAMS_PUSH(params, "s", int, query->template_name.getValue("")); \
}\
if (query->qc_types) {\
	\
		sql << " AND qc_types=?"; \
		SQLPARAMS_PUSH(params, "s", int, query->qc_types.getValue("")); \
}\
if (query->enable_flag) {\
	\
		sql << " AND enable_flag=?"; \
		SQLPARAMS_PUSH(params, "s", std::string, query->enable_flag.getValue("")); \
} \
if (query->remark) {\
	\
		sql << " AND remark=?"; \
		SQLPARAMS_PUSH(params, "s", int, query->remark.getValue("")); \
}\


uint64_t DetectionTemplateDAO::count(const DetectionTemplateQuery::Wrapper & query)
{
	stringstream sql;
	sql << "SELECT COUNT(*) FROM qc_template";
	DETECTIONTEMPLATE_TERAM_PARSE(query, sql);
	string sqlStr = sql.str();
	return sqlSession->executeQueryNumerical(sqlStr, params);
}

uint64_t DetectionTemplateDAO::insert(const DetectionTemplateDO& iObj)
{
	string sql = "INSERT INTO `qc_template` (`template_code`, `template_name` , `qc_types` , `enable_flag` , `remark` ) VALUES (?, ?, ?, ?, ?)";
	return sqlSession->executeInsert(sql, "%s%s%s%s%s", iObj.template_code(), iObj.template_name(),
		 iObj.`qc_types`(), iObj.`enable_flag`(), iObj.`remark`());
}