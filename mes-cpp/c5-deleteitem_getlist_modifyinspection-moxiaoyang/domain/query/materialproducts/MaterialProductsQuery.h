#pragma once
#ifndef _MATERIALPRODUCTSDTO_QUERY_
#define _MATERIALPRODUCTSDTO_QUERY_

#include "../../GlobalInclude.h"
#include "../../dto/materialproducts/materialproductsDTO.h"
#include "domain/query/PageQuery.h"
#include OATPP_CODEGEN_BEGIN(DTO)


class MaterialProductsQuery : public PageQuery
{
	DTO_INIT(MaterialProductsQuery, PageQuery);
	// 物料编号
	DTO_FIELD(UInt64, templateId);
	DTO_FIELD_INFO(templateId) {
		info->description = ZH_WORDS_GETTER("MaterialProducts.field.templateId");
	}
	// 模板编码
	DTO_FIELD(Int32, itemCode);
	DTO_FIELD_INFO(itemCode) {
		info->description = ZH_WORDS_GETTER("MaterialProducts.field.itemCode");
	}
	// 模板名称
	DTO_FIELD(String, itemName);
	DTO_FIELD_INFO(itemName) {
		info->description = ZH_WORDS_GETTER("MaterialProducts.field.itemName");
	}
	// 模板规格
	DTO_FIELD(String, specification);
	DTO_FIELD_INFO(specification) {
		info->description = ZH_WORDS_GETTER("MaterialProducts.field.specification");
	}
	// 单位
	DTO_FIELD(String, unitOfmeasure);
	DTO_FIELD_INFO(unitOfmeasure) {
		info->description = ZH_WORDS_GETTER("MaterialProducts.field.unitOfmeasure");
	}
	// 数量检测
	DTO_FIELD(String, quantityCheck);
	DTO_FIELD_INFO(quantityCheck) {
		info->description = ZH_WORDS_GETTER("MaterialProducts.field.quantityCheck");
	}
	// 致命缺陷数量
	DTO_FIELD(String, crRate);
	DTO_FIELD_INFO(crRate) {
		info->description = ZH_WORDS_GETTER("MaterialProducts.field.crRate");
	}
	// 严重缺陷数量
	DTO_FIELD(String, majRate);
	DTO_FIELD_INFO(majRate) {
		info->description = ZH_WORDS_GETTER("MaterialProducts.field.majRate");
	}
	// 轻微缺陷数量
	DTO_FIELD(String, minRate);
	DTO_FIELD_INFO(minRate) {
		info->description = ZH_WORDS_GETTER("MaterialProducts.field.minRate");
	}
	// 备注
	DTO_FIELD(String, remark);
	DTO_FIELD_INFO(remark) {
		info->description = ZH_WORDS_GETTER("MaterialProducts.field.remark");
	}
	// 创建时间
	DTO_FIELD(String, createTime);
	DTO_FIELD_INFO(createTime) {
		info->description = ZH_WORDS_GETTER("MaterialProducts.field.createTime");
	}

};

#include OATPP_CODEGEN_END(DTO)
#endif // !_SAMPLE_DTO_