#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/25 0:27:04

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

	  https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#ifndef _PROCESSINSPECTION_CONTROLLER_
#define _PROCESSINSPECTION_CONTROLLER_

#include "domain/dto/processinspection/ProcessinSpectionDTO.h"
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "ServerInfo.h"
#include "ApiHelper.h"
#include "domain\query\PageQuery.h"
#include "domain\vo\BaseJsonVO.h"
#include OATPP_CODEGEN_BEGIN(ApiController)

class ProcessInspectionController : public oatpp::web::server::api::ApiController
{
	API_ACCESS_DECLARE(ProcessInspectionController);
public: // 定义接口

	// 定义接口描述
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("processinspection.get.summary"), modifyTheProcessInspection, Uint64JsonVO::Wrapper);
	
	// 定义修改过程检验接口处理
	API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/processinspection/modify", modifyTheProcessInspection, BODY_DTO(ProcessinSpectionDTO::Wrapper, dto), execModifyTheProcessInspection(dto));
	

private: // 定义接口的执行函数

	// 修改过程检验
	Uint64JsonVO::Wrapper execModifyTheProcessInspection(const ProcessinSpectionDTO::Wrapper& dto);
};


#include OATPP_CODEGEN_END(ApiController) 
#endif