#ifndef _PROINSPECTVO_H_
#define  _PROINSPECTVO_H_

#include "../../GlobalInclude.h"
#include "../../dto/proinspect/ProinspectDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class ProinspectJsonVO : public JsonVO<ProinspectDTO::Wrapper> {
	DTO_INIT(ProinspectJsonVO, JsonVO<ProinspectDTO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)

#endif // !_SAMPLE_VO_