#pragma once
#pragma once
#ifndef _MATERIALPRODUCTS_DO_
#define _MATERIALPRODUCTS_DO_

#include "../DoInclude.h"


class MaterialProductsDO
{

	CC_SYNTHESIZE(uint64_t, templateId, templateId);


	CC_SYNTHESIZE(uint64_t, itemCode, itemCode);


	CC_SYNTHESIZE(string, itemName, itemName);


	CC_SYNTHESIZE(string, specification, specification);


	CC_SYNTHESIZE(string, unitOfmeasure, unitOfmeasure);


	CC_SYNTHESIZE(string, quantityCheck, quantityCheck);


	CC_SYNTHESIZE(string, crRate, crRate);


	CC_SYNTHESIZE(string, majRate, majRate);

	CC_SYNTHESIZE(string, minRate, minRate);


	CC_SYNTHESIZE(string, remark, remark);


	CC_SYNTHESIZE(string, createTime, createTime);


	CC_SYNTHESIZE(string, attr1, Attr1);


	CC_SYNTHESIZE(string, attr2, Attr2);


	CC_SYNTHESIZE(int, attr3, Attr3);


	CC_SYNTHESIZE(int, attr4, Attr4);



public:
	MaterialProductsDO()
	{
		templateId = 0;
		itemCode = 0;
		itemName = "";
		specification = "";
		unitOfmeasure = "";;
		quantityCheck = "";;
		crRate = "";
		majRate = "";;
		minRate = "";;
		remark = "";
		attr1 = "";
		attr2 = "";
		attr3 = 0;
		attr4 = 0;
		createTime = "";
	}
};
#endif // !_MATERIALPRODUCTS_DO_