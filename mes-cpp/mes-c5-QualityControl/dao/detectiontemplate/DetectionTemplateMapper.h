//#pragma once
//#ifndef _DETECTIONTEMPLATE_MAPPER_
//#define _DETECTIONTEMPLATE_MAPPER_
//
//#include "Mapper.h"
//#include "../../domain/do/DetectionTemplate/DetectionTemplateDO.h"
////Ausnty
//class DetectionTemplateMapper : public Mapper<DetectionTemplateDO> {
//public:
//	DetectionTemplateDO mapper(ResultSet* resultSet) const override {
//		DetectionTemplateDO data;
//		data.settId(resultSet->getUInt64(1));
//		data.settCode(resultSet->getString(2));
//		data.settName(resultSet->getString(3));
//		data.settTypes(resultSet->getString(4));
//		data.settEnFlag(resultSet->getString(5));
//		data.settRemark(resultSet->getString(6));
//		return data;
//	}
//};
////Œﬁ»À
//class DetectionTemplateMapper : public Mapper<DetectionTemplateDO>
//{
//public:
//	DetectionTemplateDO mapper(ResultSet* resultSet) const override
//	{
//		DetectionTemplateDO data;
//		//data.(resultSet->getUInt64(1));
//
//		data.setTemplate_Id(resultSet->getInt(1));
//		data.setTemplate_Code(resultSet->getString(2));
//		data.setTemplate_Name(resultSet->getString(3));
//		data.setItem_Code(resultSet->getString(4));
//		data.setItem_Name(resultSet->getString(5));
//		data.setQc_Types(resultSet->getString(6));
//		data.setEnable_Flag(resultSet->getString(7));
//		data.setRemark(resultSet->getString(8));
//		return data;
//	}
//};
//
//#endif // !_DETECTIONTEMPLATE_MAPPER_
