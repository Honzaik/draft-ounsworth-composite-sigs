/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "MyShopPurchaseOrders"
 * 	found in "productExample1.asn"
 */

#ifndef	_CustomerInfo_H_
#define	_CustomerInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <VisibleString.h>
#include "Address.h"
#include <NumericString.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CustomerInfo */
typedef struct CustomerInfo {
	VisibleString_t	 companyName;
	Address_t	 billingAddress;
	NumericString_t	 contactPhone;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CustomerInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CustomerInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _CustomerInfo_H_ */
#include <asn_internal.h>