/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/25 11:13:11

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
#include "MaterialProductsService.h"
#include "../../../domain/do/DetectionTemplate/MaterialProductsDO.h"
#include "../../../dao/detectiontemplate/materialproducts/MaterialProductsDAO.h"
MaterialProductsDTO::Wrapper MaterialProductsService::listAll(const MaterialProductsQuery::Wrapper& query)
{
	return {};
}

uint64_t MaterialProductsService::saveMaterialProducts(const MaterialProductsDTO::Wrapper& dto)
{
	// 组装DO数据
	MaterialProductsDO data;
	// 	data.setName(dto->name.getValue(""));
	// 	data.setSex(dto->sex.getValue(""));
	// 	data.setAge(dto->age.getValue(1));
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, templateId, templateId, itemCode, itemCode, itemName, itemName)
	// 执行数据添加
	MaterialProductsDAO dao;
	return dao.insertMaterialProducts(data);
}

bool MaterialProductsService::updateMaterialProducts(const MaterialProductsDTO::Wrapper& dto)
{
	// 组装DO数据
	MaterialProductsDO data;
	// 	data.setId(dto->id.getValue(0));
	// 	data.setName(dto->name.getValue(""));
	// 	data.setSex(dto->sex.getValue(""));
	// 	data.setAge(dto->age.getValue(1));
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, templateId, templateId, itemCode, itemCode, itemName, itemName)
	// 执行数据修改
	MaterialProductsDAO dao;
	return dao.updateMaterialProducts(data) == 1;
}

bool MaterialProductsService::deleteByRecordId(uint64_t templateId)
{
	MaterialProductsDAO dao;
	return dao.deleteByRecordId(templateId) == 1;
}
