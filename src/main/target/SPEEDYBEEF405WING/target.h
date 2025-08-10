#pragma once

#define TARGET_BOARD_IDENTIFIER "SP4W"
#define USBD_PRODUCT_STRING  "SpeedyBee F405 Wing"

// LEDs
#define LED0                    PA14  //Blue
#define LED1                    PA13  //Green

// Beeper
#define BEEPER                  PC15
#define BEEPER_INVERTED

/*
 * Buses
 */
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN           PB4
#define SPI3_MOSI_PIN           PB5

// Serial ports
#define USE_VCP
#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

// I2C
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9

/*
 * Sensor drivers
 */
// IMU
#define USE_IMU_ICM42605
#define IMU_ICM42605_ALIGN      CW270_DEG
#define ICM42605_CS_PIN         PA4
#define ICM42605_SPI_BUS        BUS_SPI1

// Baro - keep 1 small driver
#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C1
#define USE_BARO_BMP280

// OSD - remove MAX7456, keep MSP DisplayPort for DJI
#define USE_MSP_DISPLAYPORT

// SD Card - disable to save space
//#define USE_SDCARD
//#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT

// RX
#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART1

// *************** ADC ***************************
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream0
#define ADC_CHANNEL_1_PIN           PC0
#define ADC_CHANNEL_2_PIN           PC1
#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2

// Remove LED strip to save space
//#define USE_LED_STRIP

// Features - remove telemetry except CRSF, remove blackbox
#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_OSD | FEATURE_CURRENT_METER | FEATURE_VBAT)
#define CURRENT_METER_SCALE     195

#define USE_DSHOT

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff

#define MAX_PWM_OUTPUT_PORTS    11

#define USE_QUAD_MIXER 1
#define USE_CUSTOM_MIXER 1
#define USE_SERVOMIX 1
#define USE_AIRPLANE_MIXER 1

#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN              PC13
