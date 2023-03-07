#ifndef BLE_CHARACTERISTICS_H_
#define BLE_CHARACTERISTICS_H_

#include "ble_config.h"

/*

 Pinecil exposes two main services; Status and settings

 Status:
 - Current setpoint temperature
 - Current live tip temperature
 - Current DC Input
 - Current Handle cold junction temperature
 - Current power level (aka pwm level)

 Settings:
 - One entry for every setting in the unit
*/

// d85efab4-168e-4a71-affd-33e27f9bc533
#define BT_UUID_SVC_LIVE_DATA BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
// f6d75f91-5a10-4eba-a233-47d3f26a907f
#define BT_UUID_SVC_SETTINGS_DATA BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xAA55, 0x47d3f26a907f))
// 9eae1adb-9d0d-48c5-a6e7-ae93f0ea37b0
#define BT_UUID_SVC_BULK_DATA BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x9eae1adb, 0x9d0d, 0x48c5, 0xAA55, 0xae93f0ea37b0))

#define BT_UUID_CHAR_BLE_LIVE_LIVE_TEMP     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b0001))
#define BT_UUID_CHAR_BLE_LIVE_SETPOINT_TEMP BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b0002))
#define BT_UUID_CHAR_BLE_LIVE_DC_INPUT      BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b0003))
#define BT_UUID_CHAR_BLE_LIVE_HANDLE_TEMP   BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b0004))
#define BT_UUID_CHAR_BLE_LIVE_POWER_LEVEL   BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b0005))
#define BT_UUID_CHAR_BLE_LIVE_POWER_SRC     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b0006))
#define BT_UUID_CHAR_BLE_LIVE_TIP_RES       BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b0007))
#define BT_UUID_CHAR_BLE_LIVE_UPTIME        BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b0008))
#define BT_UUID_CHAR_BLE_LIVE_MOVEMENT      BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b0009))
#define BT_UUID_CHAR_BLE_LIVE_MAX_TEMP      BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b000A))
#define BT_UUID_CHAR_BLE_LIVE_RAW_TIP       BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b000B))
#define BT_UUID_CHAR_BLE_LIVE_HALL_SENSOR   BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b000C))
#define BT_UUID_CHAR_BLE_LIVE_OP_MODE       BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b000D))
#define BT_UUID_CHAR_BLE_LIVE_EST_WATTS     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85efab4, 0x168e, 0x4a71, 0xaffd, 0x33e27f9b000E))

// Bulk data that returns non-fixed sized objects
#define BT_UUID_CHAR_BLE_LIVE_BULK_LIVE_DATA BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x9eae1adb, 0x9d0d, 0x48c5, 0xa6e7, 0xae93f0ea0001))
#define BT_UUID_CHAR_BLE_LIVE_ACCEL_NAME     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x9eae1adb, 0x9d0d, 0x48c5, 0xa6e7, 0xae93f0ea0002))
#define BT_UUID_CHAR_BLE_LIVE_BUILD          BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x9eae1adb, 0x9d0d, 0x48c5, 0xa6e7, 0xae93f0ea0003))
#define BT_UUID_CHAR_BLE_LIVE_DEV_ID         BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x9eae1adb, 0x9d0d, 0x48c5, 0xa6e7, 0xae93f0ea0004))

// Settings

#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_SAVE  BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26aFFFF))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_RESET BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26aFFFE))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_0     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a000))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_1     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a001))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_2     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a002))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_3     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a003))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_4     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a004))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_5     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a005))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_6     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a006))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_7     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a007))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_8     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a008))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_9     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a009))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_10    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0010))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_11    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0011))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_12    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0012))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_13    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0013))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_14    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0014))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_15    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0015))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_16    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0016))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_17    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0017))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_18    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0018))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_19    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0019))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_20    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0020))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_21    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0021))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_22    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0022))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_23    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0023))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_24    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0024))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_25    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0025))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_26    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0026))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_27    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0027))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_28    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0028))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_29    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0029))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_30    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0030))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_31    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0031))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_32    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0032))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_33    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0033))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_34    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0034))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_35    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0035))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_36    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0036))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_37    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0037))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_38    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d75f91, 0x5a10, 0x4eba, 0xa233, 0x47d3f26a0038))

#endif
