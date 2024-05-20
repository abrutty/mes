#pragma once
#ifndef _CONFIRMORDERS_H_
#define _CONFIRMORDERS_H_

#include "ApiHelper.h"
#include "ServerInfo.h"
#include "domain/query/PageQuery.h"
#include "domain/vo/BaseJsonVO.h"
//#include "domain/query/ProcessinSpection/ProcessinSpectionQuery.h"
#include "domain/dto/ProcessinSpection/ProcessinSpectionDTO.h"
//#include "domain/vo/ProcessinSpection/ProcessinSpectionVO.h"

// 0 定义API控制器使用宏
#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

class ConfirmOrdersController : public oatpp::web::server::api::ApiController {
	// 定义控制器
	API_ACCESS_DECLARE(ConfirmOrdersController);


public:	// 定义接口

	// 确认、完成检验单
	API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/processinspection/confirmorders", confirmOrders, 
		BODY_DTO(ProcessinSpectionDTO::Wrapper, dto), execConfirmOrders(dto));


private:
	Uint64JsonVO::Wrapper execConfirmOrders(const ProcessinSpectionDTO::Wrapper& dto);
};

// 0 取消API控制器使用宏
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif // !_CONFIRMORDERS_H_
