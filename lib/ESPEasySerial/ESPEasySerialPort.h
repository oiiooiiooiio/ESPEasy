#ifndef ESPEASY_SERIAL_ESPEASYSERIALPORT_H
#define ESPEASY_SERIAL_ESPEASYSERIALPORT_H

#include <Arduino.h>

// Keep value assigned as it is used in scripts and stored in the Settings.TaskDevicePort
enum class ESPEasySerialPort : uint8_t {
  not_set      = 0,
  sc16is752    = 1,
  serial0      = 2,
  serial0_swap = 3,
  serial1      = 4,
  serial2      = 5,
  software     = 6,
#ifdef ESP32
  usb_cdc_0    = 7,
  usb_cdc_1    = 8,
  usb_hw_cdc   = 9,
#endif

  MAX_SERIAL_TYPE
};

const __FlashStringHelper* ESPEasySerialPort_toString(ESPEasySerialPort serType);

bool isHWserial(ESPEasySerialPort serType);

#endif // ifndef ESPEASY_SERIAL_ESPEASYSERIALPORT_H
