#pragma once
#ifndef _TEMPLATEDETECTITEM_CONTROLLER_
#define _TEMPLATEDETECTITEM_CONTROLLER_

#include "ApiHelper.h"
#include "ServerInfo.h"
#include "domain/vo/BaseJsonVO.h"
#include "../../../domain/vo/detectiontemplate/TemplateDetectItemJsonVO.h"
#include "../../../domain/dto/detectiontemplate/TemplateDetectItemDTO.h"
#include "../../../domain/query/detectiontemplate/TemplateDetectItemQuery.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class DetectionItemsController : public oatpp::web::server::api::ApiController
{
	API_ACCESS_DECLARE(DetectionItemsController); // �������������
public:
	ENDPOINT_INFO(queryTemplateDetectItem) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("templatedetectitem.get.summary"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(TemplateDetectItemPageJsonVO);
		// �����ҳ��ѯ��������
		API_DEF_ADD_PAGE_PARAMS();

	}
	// �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/qc/query-template-detect-item", queryTemplateDetectItem, QUERIES(QueryParams, queryParams), API_HANDLER_AUTH_PARAME) {
		// ������ѯ����ΪQuery����ģ��
		API_HANDLER_QUERY_PARAM(query, TemplateDetectItemQuery, queryParams);
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(execQueryTemplateDetectItem(query));
	}

	// �����޸Ľӿ�����
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("templatedetectitem.put.summary"), modifyTemplateDetectItem, Uint64JsonVO::Wrapper);
	// �����޸Ľӿڴ���
	API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/qc/modify-template-detect-item", modifyTemplateDetectItem, BODY_DTO(TemplateDetectItemDTO::Wrapper, dto), execModifyTemplateDetectItem(dto));

	// ���������ӿ�����
	ENDPOINT_INFO(addTemplateDetectItem) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("templatedetectitem.post.summary"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
	}
	// ���������ӿڴ���
	ENDPOINT(API_M_POST, "/qc/add-template-detect-item", addTemplateDetectItem, BODY_DTO(TemplateDetectItemDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(execAddTemplateDetectItem(dto));
	}

	// ����ɾ���ӿ�����
	ENDPOINT_INFO(removeTemplateDetectItem) {
		// �������ͷ��������Լ���Ȩ֧��
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("templatedetectitem.delete.summary"), Uint64JsonVO::Wrapper);
		// ��������·������˵��
		API_DEF_ADD_PATH_PARAMS(UInt64, "record_id", ZH_WORDS_GETTER("templatedetectitem.field.record_id"), 1, true);
	}
	// 3.2 ����ɾ���ӿڴ���
	API_HANDLER_ENDPOINT_AUTH(API_M_DEL, "/qc/delete-template-detect-item/{record_id}", removeTemplateDetectItem, PATH(UInt64, record_id), execRemoveTemplateDetectItem(record_id));

private: // ����ӿڵ�ִ�к���
	TemplateDetectItemPageJsonVO::Wrapper execQueryTemplateDetectItem(const TemplateDetectItemQuery::Wrapper& query); // ��ҳ��ѯִ�к���
	Uint64JsonVO::Wrapper execModifyTemplateDetectItem(const TemplateDetectItemDTO::Wrapper& dto);
	Uint64JsonVO::Wrapper execAddTemplateDetectItem(const TemplateDetectItemDTO::Wrapper& dto);
	Uint64JsonVO::Wrapper execRemoveTemplateDetectItem(const UInt64& record_id);
};

#include OATPP_CODEGEN_END(ApiController)
#endif // !_TEMPLATEDETECTITEM_CONTROLLER_