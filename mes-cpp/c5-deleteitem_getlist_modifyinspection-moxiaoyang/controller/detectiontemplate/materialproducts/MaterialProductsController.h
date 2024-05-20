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
#ifndef _MATERIALPRODUCTSDTO_CONTROLLER_
#define _MATERIALPRODUCTSDTO_CONTROLLER_

#include "domain/dto/processinspection/ProcessinSpectionDTO.h"
#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "ServerInfo.h"
#include "ApiHelper.h"
#include "domain\query\PageQuery.h"
#include "domain\vo\BaseJsonVO.h"
#include "domain/vo/materialproducts/MaterialProductsVO.h"
#include "domain/query/materialproducts/MaterialProductsQuery.h"
#include "service/detectiontemplate/materialproducts/MaterialProductsControllerService.h"
#include OATPP_CODEGEN_BEGIN(ApiController)

class MaterialProductsController : public oatpp::web::server::api::ApiController
{

	API_ACCESS_DECLARE(MaterialProductsController);

public: // 定义接口

	ENDPOINT_INFO(queryMaterialProducts) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("sample.get.summary"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(MaterialProductsJsonVO);
		// 定义分页查询参数描述
		API_DEF_ADD_PAGE_PARAMS();

		// 定义其他查询参数描述

		API_DEF_ADD_QUERY_PARAMS(String, "name", ZH_WORDS_GETTER("sample.field.name"), "li ming", false);
		API_DEF_ADD_QUERY_PARAMS(String, "sex", ZH_WORDS_GETTER("sample.field.sex"), "N", false);
		API_DEF_ADD_QUERY_PARAMS(String, "age", ZH_WORDS_GETTER("sample.field.sex"), "1", false);

	}

	ENDPOINT(API_M_GET, "/materialproducts", queryMaterialProducts, QUERIES(QueryParams, queryParams), API_HANDLER_AUTH_PARAME) {
		// 解析查询参数为Query领域模型
		API_HANDLER_QUERY_PARAM(userQuery, MaterialProductsQuery, queryParams);
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execMaterialProducts(userQuery, authObject->getPayload()));
	}
	


private: // 定义接口的执行函数

	// 分页查询数据
	MaterialProductsJsonVO::Wrapper execMaterialProducts(const MaterialProductsQuery::Wrapper& query, const PayloadDTO& payload);
	
};

#include OATPP_CODEGEN_END(ApiController) 
#endif