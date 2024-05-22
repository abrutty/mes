#pragma once
#ifndef _PROINSPECT_DO_H_
#define _PROINSPECT_DO_H_
#include "../DoInclude.h"

class ProinspectDO
{
	// ±àºÅ
	CC_SYNTHESIZE(uint64_t, id, Id);
	// ÐÕÃû
	CC_SYNTHESIZE(string, name, Name);
	// ÐÔ±ð
	CC_SYNTHESIZE(string, sex, Sex);
	// ÄêÁä
	CC_SYNTHESIZE(int, age, Age);
public:
	ProinspectDO() {
		id = 0;
		name = "";
		sex = "";
		age = -1;
	}
};

#endif // !_PROINSPECTDO_H_