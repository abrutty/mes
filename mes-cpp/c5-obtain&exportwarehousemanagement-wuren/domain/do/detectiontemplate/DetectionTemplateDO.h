#pragma once

#ifndef _DETECTIONTEMPLATE_DO_
#define _DETECTIONTEMPLATE_DO_
#include "../DoInclude.h"

/**
 * 数据库实体类
 */
class DetectionTemplateDO
{
	// 编号
	CC_SYNTHESIZE(uint64_t, id, Id);
	// 姓名
	CC_SYNTHESIZE(string, name, Name);
	// 性别
	CC_SYNTHESIZE(string, sex, Sex);
	// 年龄
	CC_SYNTHESIZE(int, age, Age);
public:
	DetectionTemplateDO() {
		id = 0;
		name = "";
		sex = "";
		age = -1;
	}
};

#endif // !_DETECTIONTEMPLATE_DO_
