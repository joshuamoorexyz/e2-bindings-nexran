/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/srslte-ric/srsenb/src/ric/messages/asn1/e2sm-kpm-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /srslte-ric/build/srsenb/src/ric/messages/E2SM-KPM/`
 */

#include "E2SM_KPM_PerUEReportListItem.h"

static int
memb_E2SM_KPM_rnti_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_E2SM_KPM_dl_PRBUsage_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const INTEGER_t *st = (const INTEGER_t *)sptr;
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(asn_INTEGER2long(st, &value)) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value too large (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((value >= 0 && value <= 10000000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_E2SM_KPM_ul_PRBUsage_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const INTEGER_t *st = (const INTEGER_t *)sptr;
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(asn_INTEGER2long(st, &value)) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value too large (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((value >= 0 && value <= 10000000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_E2SM_KPM_rnti_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_E2SM_KPM_dl_PRBUsage_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  34, -1,  0,  10000000000 }	/* (0..10000000000,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_E2SM_KPM_ul_PRBUsage_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  34, -1,  0,  10000000000 }	/* (0..10000000000,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_E2SM_KPM_PerUEReportListItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, rnti),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_E2SM_KPM_rnti_constr_2,  memb_E2SM_KPM_rnti_constraint_1 },
		0, 0, /* No default value */
		"rnti"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, dl_PRBUsage),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{ 0, &asn_PER_memb_E2SM_KPM_dl_PRBUsage_constr_3,  memb_E2SM_KPM_dl_PRBUsage_constraint_1 },
		0, 0, /* No default value */
		"dl-PRBUsage"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, ul_PRBUsage),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{ 0, &asn_PER_memb_E2SM_KPM_ul_PRBUsage_constr_4,  memb_E2SM_KPM_ul_PRBUsage_constraint_1 },
		0, 0, /* No default value */
		"ul-PRBUsage"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, tx_pkts),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tx-pkts"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, tx_errors),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tx-errors"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, tx_brate),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tx-brate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, rx_pkts),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rx-pkts"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, rx_errors),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rx-errors"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, rx_brate),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rx-brate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, dl_cqi),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-cqi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, dl_ri),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-ri"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, dl_pmi),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-pmi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, ul_phr),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-phr"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, ul_sinr),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-sinr"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, ul_rssi),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-rssi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, ul_mcs),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-mcs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, ul_samples),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-samples"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, dl_mcs),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-mcs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_PerUEReportListItem, dl_samples),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-samples"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_KPM_PerUEReportListItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_KPM_PerUEReportListItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rnti */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-PRBUsage */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-PRBUsage */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tx-pkts */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tx-errors */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* tx-brate */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rx-pkts */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rx-errors */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* rx-brate */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* dl-cqi */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* dl-ri */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* dl-pmi */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ul-phr */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ul-sinr */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* ul-rssi */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* ul-mcs */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* ul-samples */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* dl-mcs */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 } /* dl-samples */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_PerUEReportListItem_specs_1 = {
	sizeof(struct E2SM_KPM_PerUEReportListItem),
	offsetof(struct E2SM_KPM_PerUEReportListItem, _asn_ctx),
	asn_MAP_E2SM_KPM_PerUEReportListItem_tag2el_1,
	19,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	19,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_PerUEReportListItem = {
	"PerUEReportListItem",
	"PerUEReportListItem",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_KPM_PerUEReportListItem_tags_1,
	sizeof(asn_DEF_E2SM_KPM_PerUEReportListItem_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_PerUEReportListItem_tags_1[0]), /* 1 */
	asn_DEF_E2SM_KPM_PerUEReportListItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_KPM_PerUEReportListItem_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_PerUEReportListItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_KPM_PerUEReportListItem_1,
	19,	/* Elements count */
	&asn_SPC_E2SM_KPM_PerUEReportListItem_specs_1	/* Additional specs */
};

