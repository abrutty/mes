/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/25 10:58:42

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
#include "stdafx.h"
#include "MaterialProductsController.h"
#include "../../ApiDeclarativeServicesHelper.h"
#include "../../../service/deletdetectiontemplate/materialproducts/MaterialProductsService.h"


MaterialProductsJsonVO::Wrapper MaterialProductsController::execMaterialProducts(const MaterialProductsQuery::Wrapper& query, const PayloadDTO& payload)
{
	// 定义一个Service
	MaterialProductsService service;
	// 查询数据
	auto result = service.listAll(query);
	// 响应结果
	auto jvo = MaterialProductsJsonVO::createShared();
	jvo->success(result);
	return jvo;
	return {};
}

Uint64JsonVO::Wrapper MaterialProductsController::execModifyMaterialProducts(const MaterialProductsDTO::Wrapper& dto)
{
	// 定义返回数据对象
	auto jvo = Uint64JsonVO::createShared();
	// 参数校验
	if (!dto->templateId || dto->templateId <= 0)
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}
	// 定义一个Service
	MaterialProductsService service;
	// 执行数据修改
	if (service.updateMaterialProducts(dto)) {
		jvo->success(dto->templateId);
	}
	else
	{
		jvo->fail(dto->templateId);
	}
	// 响应结果
	return jvo;
}

Uint64JsonVO::Wrapper MaterialProductsController::execRemoveMaterialProduct(const UInt64& templateId)
{
	// 定义返回数据对象
	auto jvo = Uint64JsonVO::createShared();
	// 参数校验
	if (!templateId || templateId <= 0)
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}
	// 定义一个Service
	MaterialProductsService service;
	// 执行数据删除
	if (service.deleteByRecordId(templateId.getValue(0))) {
		jvo->success(templateId);
	}
	else
	{
		jvo->fail(templateId);
	}
	// 响应结果
	return jvo;
}

Uint64JsonVO::Wrapper MaterialProductsController::execAddMaterialProducts(const MaterialProductsDTO::Wrapper& dto)
{
	// 定义返回数据对象
	auto jvo = Uint64JsonVO::createShared();
	// 参数校验
	// 非空校验
	if (!dto->templateId || !dto->itemCode || !dto->itemName)
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}
	// 有效值校验
	if (dto->templateId < 0 || dto->itemName->empty())
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}

	// 定义一个Service
	MaterialProductsService service;
	// 执行数据新增
	uint64_t templateId = service.saveMaterialProducts(dto);
	if (templateId > 0) {
		jvo->success(UInt64(templateId));
	}
	else
	{
		jvo->fail(UInt64(templateId));
	}
	//响应结果
	return jvo;
}
