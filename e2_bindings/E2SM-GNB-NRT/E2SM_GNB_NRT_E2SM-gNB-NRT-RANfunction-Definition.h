/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-NRT-IEs"
 * 	found in "/local/mnt/openairinterface5g/openair2/RIC_AGENT/MESSAGES/ASN1/R01/e2sm-gNB-NRT-v401.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /local/mnt/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/E2SM-GNB-NRT/`
 */

#ifndef	_E2SM_GNB_NRT_E2SM_gNB_NRT_RANfunction_Definition_H_
#define	_E2SM_GNB_NRT_E2SM_gNB_NRT_RANfunction_Definition_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2SM_GNB_NRT_RANfunction-Name.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E2SM_GNB_NRT_RIC_EventTriggerStyle_List;
struct E2SM_GNB_NRT_RIC_ReportStyle_List;
struct E2SM_GNB_NRT_RIC_InsertStyle_List;
struct E2SM_GNB_NRT_RIC_ControlStyle_List;
struct E2SM_GNB_NRT_RIC_PolicyStyle_List;

/* E2SM_GNB_NRT_E2SM-gNB-NRT-RANfunction-Definition */
typedef struct E2SM_GNB_NRT_E2SM_gNB_NRT_RANfunction_Definition {
	E2SM_GNB_NRT_RANfunction_Name_t	 ranFunction_Name;
	struct E2SM_GNB_NRT_E2SM_gNB_NRT_RANfunction_Definition__ric_EventTriggerStyle_List {
		A_SEQUENCE_OF(struct E2SM_GNB_NRT_RIC_EventTriggerStyle_List) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ric_EventTriggerStyle_List;
	struct E2SM_GNB_NRT_E2SM_gNB_NRT_RANfunction_Definition__ric_ReportStyle_List {
		A_SEQUENCE_OF(struct E2SM_GNB_NRT_RIC_ReportStyle_List) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ric_ReportStyle_List;
	struct E2SM_GNB_NRT_E2SM_gNB_NRT_RANfunction_Definition__ric_InsertStyle_List {
		A_SEQUENCE_OF(struct E2SM_GNB_NRT_RIC_InsertStyle_List) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ric_InsertStyle_List;
	struct E2SM_GNB_NRT_E2SM_gNB_NRT_RANfunction_Definition__ric_ControlStyle_List {
		A_SEQUENCE_OF(struct E2SM_GNB_NRT_RIC_ControlStyle_List) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ric_ControlStyle_List;
	struct E2SM_GNB_NRT_E2SM_gNB_NRT_RANfunction_Definition__ric_PolicyStyle_List {
		A_SEQUENCE_OF(struct E2SM_GNB_NRT_RIC_PolicyStyle_List) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ric_PolicyStyle_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_GNB_NRT_E2SM_gNB_NRT_RANfunction_Definition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_GNB_NRT_E2SM_gNB_NRT_RANfunction_Definition;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_GNB_NRT_E2SM_gNB_NRT_RANfunction_Definition_H_ */
#include "asn_internal.h"
