#pragma once
#ifndef _TEMPLATEDETECTITEM_DO_
#define _TEMPLATEDETECTITEM_DO_

#include "../DoInclude.h"

// Ä£°å¼ì²â¼ì²âÏî Êý¾Ý¿âÊµÌåÀà
class TemplateDetectItemDO
{
	// ¼ÇÂ¼ID
	CC_SYNTHESIZE(uint64_t, record_id, Record_id);

	// ¼ì²âÄ£°åID
	CC_SYNTHESIZE(uint64_t, template_id, Template_id);

	// ¼ì²âÏîID
	CC_SYNTHESIZE(uint64_t, index_id, Index_id);

	// ¼ì²âÏî±àÂë
	CC_SYNTHESIZE(string, index_code, Index_code);

	// ¼ì²âÏîÃû³Æ
	CC_SYNTHESIZE(string, index_name, Index_name);

	// ¼ì²âÏîÀàÐÍ
	CC_SYNTHESIZE(string, index_type, Index_type);

	// ¼ì²â¹¤¾ß
	CC_SYNTHESIZE(string, qc_tool, Qc_tool);

	// ¼ì²â·½·¨
	CC_SYNTHESIZE(string, check_method, Check_method);

	// ±ê×¼Öµ
	CC_SYNTHESIZE(double, stander_val, Stander_val);

	// µ¥Î»
	CC_SYNTHESIZE(string, unit_of_measure, Unit_of_measure);

	// Îó²îÉÏÏÞ
	CC_SYNTHESIZE(double, threshold_max, Threshold_max);

	// Îó²îÏÂÏÞ
	CC_SYNTHESIZE(double, threshold_min, Threshold_min);

	// ËµÃ÷Í¼
	CC_SYNTHESIZE(string, doc_url, Doc_url);

	// ±¸×¢
	CC_SYNTHESIZE(string, remark, Remark);

	// Ô¤Áô×Ö¶Î1
	CC_SYNTHESIZE(string, attr1, Attr1);

	// Ô¤Áô×Ö¶Î2
	CC_SYNTHESIZE(string, attr2, Attr2);

	// Ô¤Áô×Ö¶Î3
	CC_SYNTHESIZE(int, attr3, Attr3);

	// Ô¤Áô×Ö¶Î4
	CC_SYNTHESIZE(int, attr4, Attr4);

	// ´´½¨Õß
	CC_SYNTHESIZE(string, create_by, Create_by);

	// ´´½¨Ê±¼ä
	CC_SYNTHESIZE(string, create_time, Create_time);

	// ¸üÐÂÕß
	CC_SYNTHESIZE(string, update_by, Update_by);

	// ¸üÐÂÊ±¼ä
	CC_SYNTHESIZE(string, update_time, Update_time);
public:
	TemplateDetectItemDO()
	{
		record_id = 0;
		template_id = 0;
		index_id = 0;
		index_code = "";
		index_name = "";
		index_type = "";
		qc_tool = "";
		check_method = "";
		stander_val = 0;
		unit_of_measure = "";
		threshold_max = 0;
		threshold_min = 0;
		doc_url = "";
		remark = "";
		attr1 = "";
		attr2 = "";
		attr3 = 0;
		attr4 = 0;
		create_by = "";
		create_time = "";
		update_by = "";
		update_time = "";
	}
};
#endif // !_TEMPLATEDETECTITEM_DO_
