#pragma once
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
#ifndef _DETECTIONITEMSETTINGS_CONTROLLER_
#define _DETECTIONITEMSETTINGS_CONTROLLER_

#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "ServerInfo.h"
#include "ApiHelper.h"
#include "domain\query\PageQuery.h"
#include "domain\vo\BaseJsonVO.h"
#include "../../Macros.h"
#include OATPP_CODEGEN_BEGIN(ApiController)

class DetectionItemSettingsController : public oatpp::web::server::api::ApiController
{
	API_ACCESS_DECLARE(DetectionItemSettingsController);
public: // 定义接口

	ENDPOINT_INFO(removeTheDetection) {
		// 定义标题和返回类型以及授权支持
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("detectionitemsettings.delete.summary"), Uint64JsonVO::Wrapper);
		// 定义其他路径参数说明
		API_DEF_ADD_PATH_PARAMS(UInt64, "id", ZH_WORDS_GETTER("detectionitemsettings.field.id"), 1, true);
	}
	API_HANDLER_ENDPOINT_AUTH(API_M_DEL, "/detectionitemsettings/{id}", removeTheDetection, PATH(UInt64, id), execRemoveTheDetection(id));

private: // 定义接口的执行函数

	Uint64JsonVO::Wrapper execRemoveTheDetection(const UInt64& id);
	
};


#include OATPP_CODEGEN_END(ApiController) 
#endif