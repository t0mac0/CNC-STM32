#ifndef __USB_DESC_H
#define __USB_DESC_H

#include "global.h"

#define MASS_SIZ_DEVICE_DESC              18
#define MASS_SIZ_CONFIG_DESC              32

#define MASS_SIZ_STRING_LANGID            4
#define MASS_SIZ_STRING_VENDOR            38
#define MASS_SIZ_STRING_PRODUCT           38
#define MASS_SIZ_STRING_SERIAL            26
#define MASS_SIZ_STRING_INTERFACE         16

extern const u8 MASS_DeviceDescriptor[MASS_SIZ_DEVICE_DESC];
extern const u8 MASS_ConfigDescriptor[MASS_SIZ_CONFIG_DESC];

extern const u8 MASS_StringLangID[MASS_SIZ_STRING_LANGID];
extern const u8 MASS_StringVendor[MASS_SIZ_STRING_VENDOR];
extern const u8 MASS_StringProduct[MASS_SIZ_STRING_PRODUCT];
extern u8 MASS_StringSerial[MASS_SIZ_STRING_SERIAL];
extern const u8 MASS_StringInterface[MASS_SIZ_STRING_INTERFACE];

#endif /* __USB_DESC_H */
