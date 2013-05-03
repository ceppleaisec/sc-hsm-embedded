/*
 *  ---------
 * |.**> <**.|  CardContact Software & System Consulting
 * |*       *|  32429 Minden, Germany (www.cardcontact.de)
 * |*       *|  Copyright (c) 1999-2003. All rights reserved
 * |'**> <**'|  See file COPYING for details on licensing
 *  --------- 
 *
 * The Smart Card Development Platform (SCDP) provides a basic framework to
 * implement smartcard aware applications.
 *
 * Abstract :       Functions for private key object management
 *
 * Author :         Frank Thater (FTH)
 *
 *****************************************************************************/

#ifndef ___PRIVATEKEYOBJECT_H_INC___
#define ___PRIVATEKEYOBJECT_H_INC___


#include <pkcs11/p11generic.h>
#include <pkcs11/session.h>
#include <pkcs11/cryptoki.h>
#include <pkcs11/object.h>

#define NEEDED_ATTRIBUTES_PRIVATEKEYOBJECT   12

int createPrivateKeyObject(CK_ATTRIBUTE_PTR pTemplate, CK_ULONG ulCount, struct p11Object_t *object);

#endif /* ___PRIVATEKEYOBJECT_H_INC___ */
