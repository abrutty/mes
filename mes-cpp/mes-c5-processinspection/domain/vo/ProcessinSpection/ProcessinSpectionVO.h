#pragma once
#ifndef _PROCESSINSPECTION_VO_
#define _PROCESSINSPECTION_VO_

#include "../../GlobalInclude.h"
#include "../../dto/ProcessinSpection/ProcessinSpectionDTO.h"

// JsonVO
class ProcessinSpectionJsonVO : public JsonVO<ProcessinSpectionDTO::Wrapper> {
	DTO_INIT(ProcessinSpectionJsonVO, JsonVO<ProcessinSpectionDTO::Wrapper>);
};

// PageJsonVO
class ProcessinSpectionPageJsonVO : public JsonVO<ProcessinSpectionPageDTO::Wrapper> {
	DTO_INIT(ProcessinSpectionPageJsonVO, JsonVO<ProcessinSpectionPageDTO::Wrapper>)
};

#endif // !_PROCESSINSPECTION_VO_
