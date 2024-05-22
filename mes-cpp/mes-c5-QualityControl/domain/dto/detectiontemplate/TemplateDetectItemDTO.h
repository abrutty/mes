#pragma once
#ifndef _TEMPLATEDETECTITEM_DTO_
#define _TEMPLATEDETECTITEM_DTO_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)


// ¼ì²âÄ£°å¼ì²âÏî ´«Êä¶ÔÏó
class TemplateDetectItemDTO : public oatpp::DTO
{
	DTO_INIT(TemplateDetectItemDTO, DTO);
	// ¼ÇÂ¼ID
	DTO_FIELD(UInt64, record_id);
	DTO_FIELD_INFO(record_id) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.record_id");
	}

	// ¼ì²âÄ£°åID
	DTO_FIELD(UInt64, template_id);
	DTO_FIELD_INFO(template_id) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.template_id");
	}

	// ¼ì²âÏîID
	DTO_FIELD(UInt64, index_id);
	DTO_FIELD_INFO(index_id) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.index_id");
	}

	// ¼ì²âÏî±àÂë
	DTO_FIELD(String, index_code);
	DTO_FIELD_INFO(index_code) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.index_code");
	}

	// ¼ì²âÏîÃû³Æ
	DTO_FIELD(String, index_name);
	DTO_FIELD_INFO(index_name) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.index_name");
	}

	// ¼ì²âÏîÀàÐÍ
	DTO_FIELD(String, index_type);
	DTO_FIELD_INFO(index_type) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.index_type");
	}

	// ¼ì²â¹¤¾ß
	DTO_FIELD(String, qc_tool);
	DTO_FIELD_INFO(qc_tool) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.qc_tool");
	}

	// ¼ì²â·½·¨
	DTO_FIELD(String, check_method);
	DTO_FIELD_INFO(check_method) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.check_method");
	}

	// ±ê×¼Öµ
	DTO_FIELD(Float64, stander_val);
	DTO_FIELD_INFO(stander_val) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.stander_val");
	}

	// µ¥Î»
	DTO_FIELD(String, unit_of_measure);
	DTO_FIELD_INFO(unit_of_measure) {
		info->description = ZH_WORDS_GETTER("test.field.unit_of_measure");
	}

	// Îó²îÉÏÏÞ
	DTO_FIELD(Float64, threshold_max);
	DTO_FIELD_INFO(threshold_max) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.threshold_max");
	}

	// Îó²îÏÂÏÞ
	DTO_FIELD(Float64, threshold_min);
	DTO_FIELD_INFO(threshold_min) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.threshold_min");
	}

	// ËµÃ÷Í¼
	DTO_FIELD(String, doc_url);
	DTO_FIELD_INFO(doc_url) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.doc_url");
	}

	// ±¸×¢
	DTO_FIELD(String, remark);
	DTO_FIELD_INFO(remark) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.remark");
	}

	// Ô¤Áô×Ö¶Î1
	DTO_FIELD(String, attr1);
	DTO_FIELD_INFO(attr1) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.attr1");
	}

	// Ô¤Áô×Ö¶Î2
	DTO_FIELD(String, attr2);
	DTO_FIELD_INFO(attr2) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.attr2");
	}

	// Ô¤Áô×Ö¶Î3
	DTO_FIELD(Int32, attr3);
	DTO_FIELD_INFO(attr3) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.attr3");
	}

	// Ô¤Áô×Ö¶Î4
	DTO_FIELD(Int32, attr4);
	DTO_FIELD_INFO(attr4) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.attr4");
	}

	// ´´½¨Õß
	DTO_FIELD(String, create_by);
	DTO_FIELD_INFO(create_by) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.create_by");
	}

	// ´´½¨Ê±¼ä
	DTO_FIELD(String, create_time);
	DTO_FIELD_INFO(create_time) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.create_time");
	}

	// ¸üÐÂÕß
	DTO_FIELD(String, update_by);
	DTO_FIELD_INFO(update_by) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.update_by");
	}

	// ¸üÐÂÊ±¼ä
	DTO_FIELD(String, update_time);
	DTO_FIELD_INFO(update_time) {
		info->description = ZH_WORDS_GETTER("templatedetectitem.field.update_time");
	}
};


//·ÖÒ³´«Êä¶ÔÏó
class TemplateDetectItemPageDTO : public PageDTO<TemplateDetectItemDTO::Wrapper>
{
	DTO_INIT(TemplateDetectItemPageDTO, PageDTO<TemplateDetectItemDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_TEMPLATEDETECTITEM_DTO_