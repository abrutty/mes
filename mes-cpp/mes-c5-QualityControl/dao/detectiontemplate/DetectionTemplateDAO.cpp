//#include "stdafx.h"
//#include "DetectionTemplateDAO.h"
//#include "DetectionTemplateMapper.h"
//#include <sstream>
//
////�������������꣬�����ظ�����
//#define DETECTIONTEMPLATE_TERAM_PARSE(query, sql) \
//SqlParams params; \
//sql<<" WHERE 1=1"; \
//if (query->template_id) { \
//	sql << " AND `template_id`=?"; \
//	SQLPARAMS_PUSH(params, "ull", uint64_t, query->template_id.getValue(0)); \
//} \
//if (query->template_code) { \
//	sql << " AND `template_code`=?"; \
//	SQLPARAMS_PUSH(params, "s", std::string, query->template_code.getValue("")); \
//} \
//if (query->template_name) { \
//	sql << " AND template_name=?"; \
//	SQLPARAMS_PUSH(params, "s", std::string, query->template_name.getValue("")); \
//} \
//if (query->qc_types) { \
//	sql << " AND qc_types=?"; \
//	SQLPARAMS_PUSH(params, "s", std::string, query->qc_types.getValue("")); \
//} \
//if (query->enable_flag) { \
//	sql << " AND enable_flag=?"; \
//	SQLPARAMS_PUSH(params, "s", std::string, query->enable_flag.getValue("")); \
//}
//
//int DetectionTemplateDAO::deleteById(uint64_t id)
//{
//	string sql = "DELETE FROM `qc_template` WHERE `id`=?";
//	return sqlSession->executeUpdate(sql, "%ull", id);
//}
//
//uint64_t DetectionTemplateDAO::count(const DetectionTemplateQuery::Wrapper& query) {
//	stringstream sql;
//	sql << "SELECT COUNT(*) FROM qc_template";
//	DETECTIONTEMPLATE_TERAM_PARSE(query, sql);
//	string sqlStr = sql.str();
//	return sqlSession->executeQueryNumerical(sqlStr, params);
//}
//
//std::list<DetectionTemplateDO> DetectionTemplateDAO::selectTemplateListWithPage(const DetectionTemplateQuery::Wrapper& query) {
//	stringstream sql;
//	sql << "SELECT template_id,template_code,template_name,qc_types,enable_flag FROM qc_template";
//	DETECTIONTEMPLATE_TERAM_PARSE(query, sql);
//	sql << " LIMIT " << ((query->pageIndex - 1) * query->pageSize) << "," << query->pageSize;
//	DetectionTemplateMapper mapper;
//	string sqlStr = sql.str();
//	return sqlSession->executeQuery<DetectionTemplateDO, DetectionTemplateMapper>(sqlStr, mapper, params);
//}
//
//uint64_t DetectionTemplateDAO::insert(const DetectionTemplateDO& iObj)
//{
//	string sql = "INSERT INTO `qc_template` (`template_code`, `template_name` , `qc_types` , `enable_flag` , `remark` ) VALUES (?, ?, ?, ?, ?)";
//	return sqlSession->executeInsert(sql, "%s%s%s%s%s", iObj.getTemplate_Code(), iObj.getTemplate_Name(),
//		iObj.getQc_Types(), iObj.getEnable_Flag(), iObj.getRemark());
//}