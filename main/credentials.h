/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
#define USE_ABP
//#define USE_OTAA

#ifdef USE_ABP

    // ttgo-t-beam-esp32-ttnmapper-3
/* 
    // LoRaWAN NwkSKey, network session key
    static const u1_t PROGMEM NWKSKEY[16] = { 0x8B, 0x59, 0xC4, 0x58, 0x00, 0xCB, 0x26, 0xF0, 0xE4, 0x12, 0x36, 0xDA, 0xD1, 0x97, 0xA7, 0xC7 };
    // LoRaWAN AppSKey, application session key
    static const u1_t PROGMEM APPSKEY[16] = { 0xC5, 0x62, 0x74, 0x15, 0x39, 0xC9, 0x00, 0xC1, 0xD9, 0x82, 0x29, 0xF5, 0x16, 0x20, 0xAE, 0xD4 };
    // LoRaWAN end-device address (DevAddr)
    // This has to be unique for every node
    static const u4_t DEVADDR = 0x2601339D; 
 */

    // ttgo-t-beam-esp32-ttnmapper-4
    // LoRaWAN NwkSKey, network session key
    static const u1_t PROGMEM NWKSKEY[16] = { 0x0F, 0x60, 0x13, 0xA3, 0x48, 0xAF, 0xBF, 0xA6, 0x4E, 0x40, 0xCB, 0xE7, 0x33, 0x20, 0x52, 0x26 };
    // LoRaWAN AppSKey, application session key
    static const u1_t PROGMEM APPSKEY[16] = { 0xD1, 0x17, 0x01, 0x74, 0x17, 0xAF, 0x88, 0x62, 0x92, 0x2A, 0xF4, 0x4E, 0x53, 0xB9, 0xBB, 0x7D };
    // LoRaWAN end-device address (DevAddr)
    // This has to be unique for every node
    static const u4_t DEVADDR = 0x260119B9;


#endif

#ifdef USE_OTAA

    // This EUI must be in little-endian format, so least-significant-byte
    // first. When copying an EUI from ttnctl output, this means to reverse
    // the bytes. For TTN issued EUIs the last bytes should be 0x00, 0x00,
    // 0x00.
    static const u1_t PROGMEM APPEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This should also be in little endian format, see above.
    // Note: You do not need to set this field, if unset it will be generated automatically based on the device macaddr
    static u1_t DEVEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This key should be in big endian format (or, since it is not really a
    // number but a block of memory, endianness does not really apply). In
    // practice, a key taken from ttnctl can be copied as-is.
    // The key shown here is the semtech default key.
    static const u1_t PROGMEM APPKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

#endif
