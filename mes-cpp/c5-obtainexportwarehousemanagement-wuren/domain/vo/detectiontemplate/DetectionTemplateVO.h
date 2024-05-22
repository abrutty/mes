#pragma once

#ifndef _DETECTIONTEMPLATE_VO_
#define _DETECTIONTEMPLATE_VO_

#include "../../GlobalInclude.h"
#include "../../dto/detectiontemplate/DetectionTemplateDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 显示JsonVO，用于响应给客户端的Json对象
 */
class DetectionTemplateJsonVO : public JsonVO<DetectionTemplateDTO::Wrapper> {
	DTO_INIT(DetectionTemplateJsonVO, JsonVO<DetectionTemplateDTO::Wrapper>);
};

/**
 * 分页显示JsonVO，用于响应给客户端的Json对象
 */
class DetectionTemplatePageJsonVO : public JsonVO<DetectionTemplatePageDTO::Wrapper> {
	DTO_INIT(DetectionTemplatePageJsonVO, JsonVO<DetectionTemplatePageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_DETECTIONTEMPLATE_VO_