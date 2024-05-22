#include "stdafx.h"
#include <sstream>
#include "MaterialProductsDAO.h"
#include "MaterialProductsMapper.h"
#include "domain/dto/detectiontemplate/materialproductsDTO.h"

//定义条件解析宏，减少重复代码
#define MaterialProducts_TERAM_PARSE(query, sql) \
SqlParams params; \
sql<<" WHERE 1=1"; \
if (query->templateId) { \
		sql << " AND template_id=?"; \
		SQLPARAMS_PUSH(params, "i", int, query->template_id.getValue(0)); \
} \
if (query->itemCode) { \
		sql << " AND item_code=?"; \
		SQLPARAMS_PUSH(params, "s", std::int, query->item_code.getValue(0)); \
} \
if (query->itemName) { \
		sql << " AND item_name=?"; \
		SQLPARAMS_PUSH(params, "s", std::string, query->item_name.getValue("")); \
} \
if (query->specification) { \
		sql << " AND specification=?"; \
		SQLPARAMS_PUSH(params, "s", std::string, query->specification.getValue("")); \
}


int MaterialProductsDAO::updateMaterialProducts(const MaterialProductsDO& uObj)
{
	string sql = "UPDATE `qc_template_product` SET item_name=? WHERE template_id=?";
	return sqlSession->executeUpdate(sql, "%s%ull", uObj.getitemName(), uObj.gettemplateId());
}

uint64_t MaterialProductsDAO::insertMaterialProducts(const MaterialProductsDO& iObj)
{
	string sql = "INSERT INTO `qc_template_product` (`template_id`, `item_code`, `item_name`, `specification`,`unit_of_measure`, `quantity_check`,`cr_rate`,`maj_rate`,`min_rate`,`remark`,`create_time`)VALUES (?,?,?,?,?,?,?,?,?,?,?)";
	return sqlSession->executeInsert(sql, "%ull%ull%s%s%s%s%s%s%s%s%s", iObj.gettemplateId(), iObj.getitemCode(),
		iObj.getitemName(), iObj.getspecification(), iObj.getunitOfmeasure(), iObj.getquantityCheck(), iObj.getcrRate(), iObj.getmajRate(), iObj.getminRate(), \
		iObj.getremark(), iObj.getcreateTime());
}

int MaterialProductsDAO::deleteByRecordId(uint64_t template_id)
{
	string sql = "DELETE FROM `qc_template_product` WHERE `template_id`=?";
	return sqlSession->executeUpdate(sql, "%ull", template_id);
}
