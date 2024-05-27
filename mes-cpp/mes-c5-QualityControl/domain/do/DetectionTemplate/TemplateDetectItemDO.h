#pragma once
#ifndef _TEMPLATEDETECTITEM_DO_
#define _TEMPLATEDETECTITEM_DO_

#include "../DoInclude.h"

// ���ģ������ DO
class TemplateDetectItemDO
{
	// ��¼ID
	CC_SYNTHESIZE(uint64_t, record_id, Record_id);

	// ���ģ��ID
	CC_SYNTHESIZE(uint64_t, template_id, Template_id);

	// �����ID
	CC_SYNTHESIZE(uint64_t, index_id, Index_id);

	// ��������
	CC_SYNTHESIZE(string, index_code, Index_code);

	// ���������
	CC_SYNTHESIZE(string, index_name, Index_name);

	// ���������
	CC_SYNTHESIZE(string, index_type, Index_type);

	// ��⹤��
	CC_SYNTHESIZE(string, qc_tool, Qc_tool);

	// ��ⷽ��
	CC_SYNTHESIZE(string, check_method, Check_method);

	// ��׼ֵ
	CC_SYNTHESIZE(double, stander_val, Stander_val);

	// ��λ
	CC_SYNTHESIZE(string, unit_of_measure, Unit_of_measure);

	// �������
	CC_SYNTHESIZE(double, threshold_max, Threshold_max);

	// �������
	CC_SYNTHESIZE(double, threshold_min, Threshold_min);

	// ˵��ͼ
	CC_SYNTHESIZE(string, doc_url, Doc_url);

	// ��ע
	CC_SYNTHESIZE(string, remark, Remark);

	// Ԥ���ֶ�1
	CC_SYNTHESIZE(string, attr1, Attr1);

	// Ԥ���ֶ�2
	CC_SYNTHESIZE(string, attr2, Attr2);

	// Ԥ���ֶ�3
	CC_SYNTHESIZE(int, attr3, Attr3);

	// Ԥ���ֶ�4
	CC_SYNTHESIZE(int, attr4, Attr4);

	// ������
	CC_SYNTHESIZE(string, create_by, Create_by);

	// ����ʱ��
	CC_SYNTHESIZE(string, create_time, Create_time);

	// ������
	CC_SYNTHESIZE(string, update_by, Update_by);

	// ����ʱ��
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
