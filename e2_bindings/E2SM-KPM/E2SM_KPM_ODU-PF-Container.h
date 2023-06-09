/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/srslte-ric/srsenb/src/ric/messages/asn1/e2sm-kpm-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /srslte-ric/build/srsenb/src/ric/messages/E2SM-KPM/`
 */

#ifndef	_E2SM_KPM_ODU_PF_Container_H_
#define	_E2SM_KPM_ODU_PF_Container_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E2SM_KPM_CellResourceReportListItem;

/* E2SM_KPM_ODU-PF-Container */
typedef struct E2SM_KPM_ODU_PF_Container {
	struct E2SM_KPM_ODU_PF_Container__cellResourceReportList {
		A_SEQUENCE_OF(struct E2SM_KPM_CellResourceReportListItem) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellResourceReportList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_KPM_ODU_PF_Container_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_ODU_PF_Container;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_ODU_PF_Container_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_KPM_ODU_PF_Container_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_KPM_ODU_PF_Container_H_ */
#include "asn_internal.h"
