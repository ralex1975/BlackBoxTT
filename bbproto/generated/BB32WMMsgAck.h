/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ProtocolModule"
 * 	found in "C:/devel/BlackBoxTT/bbproto/bbproto.asn1"
 * 	`asn1c -gen-PER -fuse-int64 -S`
 */

#ifndef	_BB32WMMsgAck_H_
#define	_BB32WMMsgAck_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BB32WMMsgAck */
typedef struct BB32WMMsgAck {
	int64_t	 bbhwnd;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BB32WMMsgAck_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BB32WMMsgAck;

#ifdef __cplusplus
}
#endif

#endif	/* _BB32WMMsgAck_H_ */
#include <asn_internal.h>
