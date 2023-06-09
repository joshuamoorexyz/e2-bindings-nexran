/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/srslte-ric/srsenb/src/ric/messages/asn1/e2sm-kpm-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /srslte-ric/build/srsenb/src/ric/messages/E2SM-KPM/`
 */

#include "E2SM_KPM_Trigger-ConditionIE-Item.h"

asn_TYPE_member_t asn_MBR_E2SM_KPM_Trigger_ConditionIE_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_Trigger_ConditionIE_Item, report_Period_IE),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_KPM_RT_Period_IE,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"report-Period-IE"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_KPM_Trigger_ConditionIE_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_KPM_Trigger_ConditionIE_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* report-Period-IE */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_Trigger_ConditionIE_Item_specs_1 = {
	sizeof(struct E2SM_KPM_Trigger_ConditionIE_Item),
	offsetof(struct E2SM_KPM_Trigger_ConditionIE_Item, _asn_ctx),
	asn_MAP_E2SM_KPM_Trigger_ConditionIE_Item_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_Trigger_ConditionIE_Item = {
	"Trigger-ConditionIE-Item",
	"Trigger-ConditionIE-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_KPM_Trigger_ConditionIE_Item_tags_1,
	sizeof(asn_DEF_E2SM_KPM_Trigger_ConditionIE_Item_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_Trigger_ConditionIE_Item_tags_1[0]), /* 1 */
	asn_DEF_E2SM_KPM_Trigger_ConditionIE_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_KPM_Trigger_ConditionIE_Item_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_Trigger_ConditionIE_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_KPM_Trigger_ConditionIE_Item_1,
	1,	/* Elements count */
	&asn_SPC_E2SM_KPM_Trigger_ConditionIE_Item_specs_1	/* Additional specs */
};

