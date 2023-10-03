/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPDefinitions"
 * 	found in "../../../asn1/rsp.asn"
 * 	`asn1c -fwide-types -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ProfileClass_H_
#define	_ProfileClass_H_


#include "asn_application.h"

/* Including external dependencies */
#include "INTEGER.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProfileClass {
	ProfileClass_test	= 0,
	ProfileClass_provisioning	= 1,
	ProfileClass_operational	= 2
} e_ProfileClass;

/* ProfileClass */
typedef INTEGER_t	 ProfileClass_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProfileClass;
asn_struct_free_f ProfileClass_free;
asn_struct_print_f ProfileClass_print;
asn_constr_check_f ProfileClass_constraint;
ber_type_decoder_f ProfileClass_decode_ber;
der_type_encoder_f ProfileClass_encode_der;
xer_type_decoder_f ProfileClass_decode_xer;
xer_type_encoder_f ProfileClass_encode_xer;
oer_type_decoder_f ProfileClass_decode_oer;
oer_type_encoder_f ProfileClass_encode_oer;
per_type_decoder_f ProfileClass_decode_uper;
per_type_encoder_f ProfileClass_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ProfileClass_H_ */
#include "asn_internal.h"