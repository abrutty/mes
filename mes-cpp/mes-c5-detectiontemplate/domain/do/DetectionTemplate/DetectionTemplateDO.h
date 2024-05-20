#pragma once
#ifndef _DETECTIONTEMPLATE_DO_
#define _DETECTIONTEMPLATE_DO_

#include "../DoInclude.h"

class DetectionTemplateDO {
	// 检测模板ID
	CC_SYNTHESIZE(uint64_t, template_id, tId);
	// 检测模板编号
	CC_SYNTHESIZE(string, template_code, tCode);
	// 检测模板名称
	CC_SYNTHESIZE(string, template_name, tName);
	// 检测种类
	CC_SYNTHESIZE(string, qc_types, tTypes);
	// 是否启用
	CC_SYNTHESIZE(string, enable_flag, tEnFlag);
	// 备注
	//CC_SYNTHESIZE(string, remark, tRemark);

public:
	DetectionTemplateDO() {
		// 检测模板ID
		template_id = 0;
		// 检测模板编号
		template_code = "";
		// 检测模板名称
		template_name = "";
		// 检测种类
		qc_types = "";
		// 是否启用
		enable_flag = "";
		// 备注
		//remark = "";
	}
};

#endif // !_DETECTIONTEMPLATE_DO_
