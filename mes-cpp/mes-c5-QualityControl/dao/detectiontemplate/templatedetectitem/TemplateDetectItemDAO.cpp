#include "stdafx.h"
#include <sstream>
#include "TemplateDetectItemDAO.h"
#include "TemplateDetectItemMapper.h"

//定义条件解析宏，减少重复代码
#define TemplateDetectItem_TERAM_PARSE(query, sql) \
SqlParams params; \
sql<<" WHERE 1=1"; \
if (query->template_id) { \
		sql << " AND `template_id`=?"; \
		SQLPARAMS_PUSH(params, "i", int, query->template_id.getValue(0)); \
} \
if (query->index_id) { \
		sql << " AND index_id=?"; \
		SQLPARAMS_PUSH(params, "i", int, query->index_id.getValue(0)); \
} \
if (query->index_code) { \
		sql << " AND index_code=?"; \
		SQLPARAMS_PUSH(params, "s", std::string, query->index_code.getValue("")); \
} \
if (query->index_name) { \
		sql << " AND index_name=?"; \
		SQLPARAMS_PUSH(params, "s", std::string, query->index_name.getValue("")); \
} \
if (query->index_type) { \
		sql << " AND index_type=?"; \
		SQLPARAMS_PUSH(params, "s", std::string, query->index_type.getValue("")); \
}

list<TemplateDetectItemDO> TemplateDetectItemDAO::selectTemplateDetectItemWithPage(const TemplateDetectItemQuery::Wrapper& query)
{
	stringstream sql;
	sql << "SELECT * FROM `qc_template_index`";
	TemplateDetectItem_TERAM_PARSE(query, sql);
	sql << " LIMIT " << ((query->pageIndex - 1) * query->pageSize) << "," << query->pageSize;
	TemplateDetectItemMapper mapper;
	string sqlStr = sql.str();
	return sqlSession->executeQuery<TemplateDetectItemDO, TemplateDetectItemMapper>(sqlStr, mapper, params);
}

int TemplateDetectItemDAO::updateTemplateDetectItem(const TemplateDetectItemDO& uObj)
{
	string sql = "UPDATE `qc_template_index` SET index_name=? WHERE record_id=?";
	return sqlSession->executeUpdate(sql, "%s%ull", uObj.getIndex_name(), uObj.getRecord_id());
}

uint64_t TemplateDetectItemDAO::insertTemplateDetectItem(const TemplateDetectItemDO& iObj)
{
	string sql = "INSERT INTO `qc_template_index` (`template_id`, `index_id`, `index_code`, `index_name`,`index_type`, `qc_tool`,`check_method`,`stander_val`,`unit_of_measure`,`threshold_max`,`threshold_min`,`doc_url`,`remark`,`attr1`,`attr2`,`attr3`,`attr4`,`create_by`,`create_time`,`update_by`,`update_time`)VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";
	return sqlSession->executeInsert(sql, "%ull%ull%s%s%s%s%s%d%s%d%d%s%s%s%s%i%i%s%dt%s%dt", iObj.getRecord_id(), iObj.getIndex_id(),
		iObj.getIndex_code(), iObj.getIndex_name(), iObj.getIndex_type(), iObj.getQc_tool(), iObj.getCheck_method(), iObj.getStander_val(), iObj.getUnit_of_measure(), \
		iObj.getThreshold_max(), iObj.getThreshold_min(), iObj.getDoc_url(), iObj.getRemark(), iObj.getAttr1(), iObj.getAttr2(), \
		iObj.getAttr3(), iObj.getAttr4(), iObj.getCreate_by(), iObj.getCreate_time(), iObj.getUpdate_by(), iObj.getUpdate_time());
}

int TemplateDetectItemDAO::deleteByRecordId(uint64_t record_id)
{
	string sql = "DELETE FROM `qc_template_index` WHERE `record_id`=?";
	return sqlSession->executeUpdate(sql, "%ull", record_id);
}
