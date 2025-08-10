#pragma once

#define TARGET_BOARD_IDENTIFIER "SP4W"
#define USBD_PRODUCT_STRING  "CustomFC"

// LEDs
#define LED0                    PA14  // Blue
#define LED1                    PA13  // Green

// Beeper
#define BEEPER                  PC15
#define BEEPER_INVERTED

/*
 * Buses
 */

// SPI1 - IMU only
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

// No SPI2 (OSD removed)
// No SPI3 (SD card removed)

// Serial ports - keep only what’s needed for CRSF
#define USE_VCP
#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define SERIAL_PORT_COUNT       2

/*
 * I2C - disabled to remove unused sensor drivers
 */
// #define USE_I2C

/*
 * Sensors - keep only IMU
 */
#define USE_IMU_ICM42605
#define IMU_ICM42605_ALIGN      CW270_DEG
#define ICM42605_CS_PIN         PA4
#define ICM42605_SPI_BUS        BUS_SPI1

// Remove barometer
// Remove magnetometer
// Remove pitot
// Remove temperature sensor

/*
 * OSD - remove MAX7456
 */
// #define USE_MAX7456

/*
 * SD Card - removed
 */
// #define USE_SDCARD
// #define USE_SDCARD_SPI

/*
 * RX Setup - CRSF only
 */
#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART1

/*
 * ADC - keep only VBAT and Current if needed
 */
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream0
#define ADC_CHANNEL_1_PIN           PC0
#define ADC_CHANNEL_2_PIN           PC1
#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2

/*
 * LED strip - removed
 */
// #define USE_LED_STRIP

/*
 * Default features - only the essentials
 */
#define DEFAULT_FEATURES        (FEATURE_VBAT | FEATURE_TELEMETRY | FEATURE_AIRMODE)
#define CURRENT_METER_SCALE     195

/*
 * Motor outputs
 */
#define USE_DSHOT
#define MAX_PWM_OUTPUT_PORTS    11

/*
 * IO masks
 */
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))
