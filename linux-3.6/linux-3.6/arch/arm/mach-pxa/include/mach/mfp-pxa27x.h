#ifndef __ASM_ARCH_MFP_PXA27X_H
#define __ASM_ARCH_MFP_PXA27X_H

/*
 * NOTE:  for those special-function bidirectional GPIOs, as described
 * in the "PXA27x Developer's Manual" Section 24.4.2.1, only its input
 * alternative is preserved, the direction is actually selected by the
 * specific controller, and this should work in most cases.
 */

#include <mach/mfp-pxa2xx.h>

/* Note: GPIO3/GPIO4 will be driven by Power I2C when PCFR/PI2C_EN
 * bit is set, regardless of the GPIO configuration
 */
#define GPIO3_GPIO		MFP_CFG_IN(GPIO3, AF0)
#define GPIO4_GPIO		MFP_CFG_IN(GPIO4, AF0)

/* GPIO */
#define GPIO85_GPIO		MFP_CFG_IN(GPIO85, AF0)
#define GPIO86_GPIO		MFP_CFG_IN(GPIO86, AF0)
#define GPIO87_GPIO		MFP_CFG_IN(GPIO87, AF0)
#define GPIO88_GPIO		MFP_CFG_IN(GPIO88, AF0)
#define GPIO89_GPIO		MFP_CFG_IN(GPIO89, AF0)
#define GPIO90_GPIO		MFP_CFG_IN(GPIO90, AF0)
#define GPIO91_GPIO		MFP_CFG_IN(GPIO91, AF0)
#define GPIO92_GPIO		MFP_CFG_IN(GPIO92, AF0)
#define GPIO93_GPIO		MFP_CFG_IN(GPIO93, AF0)
#define GPIO94_GPIO		MFP_CFG_IN(GPIO94, AF0)
#define GPIO95_GPIO		MFP_CFG_IN(GPIO95, AF0)
#define GPIO96_GPIO		MFP_CFG_IN(GPIO96, AF0)
#define GPIO97_GPIO		MFP_CFG_IN(GPIO97, AF0)
#define GPIO98_GPIO		MFP_CFG_IN(GPIO98, AF0)
#define GPIO99_GPIO		MFP_CFG_IN(GPIO99, AF0)
#define GPIO100_GPIO		MFP_CFG_IN(GPIO100, AF0)
#define GPIO101_GPIO		MFP_CFG_IN(GPIO101, AF0)
#define GPIO102_GPIO		MFP_CFG_IN(GPIO102, AF0)
#define GPIO103_GPIO		MFP_CFG_IN(GPIO103, AF0)
#define GPIO104_GPIO		MFP_CFG_IN(GPIO104, AF0)
#define GPIO105_GPIO		MFP_CFG_IN(GPIO105, AF0)
#define GPIO106_GPIO		MFP_CFG_IN(GPIO106, AF0)
#define GPIO107_GPIO		MFP_CFG_IN(GPIO107, AF0)
#define GPIO108_GPIO		MFP_CFG_IN(GPIO108, AF0)
#define GPIO109_GPIO		MFP_CFG_IN(GPIO109, AF0)
#define GPIO110_GPIO		MFP_CFG_IN(GPIO110, AF0)
#define GPIO111_GPIO		MFP_CFG_IN(GPIO111, AF0)
#define GPIO112_GPIO		MFP_CFG_IN(GPIO112, AF0)
#define GPIO113_GPIO		MFP_CFG_IN(GPIO113, AF0)
#define GPIO114_GPIO		MFP_CFG_IN(GPIO114, AF0)
#define GPIO115_GPIO		MFP_CFG_IN(GPIO115, AF0)
#define GPIO116_GPIO		MFP_CFG_IN(GPIO116, AF0)
#define GPIO117_GPIO		MFP_CFG_IN(GPIO117, AF0)
#define GPIO118_GPIO		MFP_CFG_IN(GPIO118, AF0)
#define GPIO119_GPIO		MFP_CFG_IN(GPIO119, AF0)
#define GPIO120_GPIO		MFP_CFG_IN(GPIO120, AF0)

/* Crystal and Clock Signals */
#define GPIO9_HZ_CLK		MFP_CFG_OUT(GPIO9,  AF1, DRIVE_LOW)
#define GPIO10_HZ_CLK		MFP_CFG_OUT(GPIO10, AF1, DRIVE_LOW)
#define GPIO11_48_MHz		MFP_CFG_OUT(GPIO11, AF3, DRIVE_LOW)
#define GPIO12_48_MHz		MFP_CFG_OUT(GPIO12, AF3, DRIVE_LOW)
#define GPIO13_CLK_EXT		MFP_CFG_IN(GPIO13, AF1)

/* OS Timer Signals */
#define GPIO11_EXT_SYNC_0	MFP_CFG_IN(GPIO11, AF1)
#define GPIO12_EXT_SYNC_1	MFP_CFG_IN(GPIO12, AF1)
#define GPIO9_CHOUT_0		MFP_CFG_OUT(GPIO9,  AF3, DRIVE_LOW)
#define GPIO10_CHOUT_1		MFP_CFG_OUT(GPIO10, AF3, DRIVE_LOW)
#define GPIO11_CHOUT_0		MFP_CFG_OUT(GPIO11, AF1, DRIVE_LOW)
#define GPIO12_CHOUT_1		MFP_CFG_OUT(GPIO12, AF1, DRIVE_LOW)

/* SDRAM and Static Memory I/O Signals */
#define GPIO20_nSDCS_2		MFP_CFG_OUT(GPIO20, AF1, DRIVE_HIGH)
#define GPIO21_nSDCS_3		MFP_CFG_OUT(GPIO21, AF1, DRIVE_HIGH)
#define GPIO15_nCS_1		MFP_CFG_OUT(GPIO15, AF2, DRIVE_HIGH)
#define GPIO78_nCS_2		MFP_CFG_OUT(GPIO78, AF2, DRIVE_HIGH)
#define GPIO79_nCS_3		MFP_CFG_OUT(GPIO79, AF2, DRIVE_HIGH)
#define GPIO80_nCS_4		MFP_CFG_OUT(GPIO80, AF2, DRIVE_HIGH)
#define GPIO33_nCS_5		MFP_CFG_OUT(GPIO33, AF2, DRIVE_HIGH)

/* Miscellaneous I/O and DMA Signals */
#define GPIO21_DVAL_0		MFP_CFG_OUT(GPIO21, AF2, DRIVE_HIGH)
#define GPIO116_DVAL_0		MFP_CFG_OUT(GPIO116, AF1, DRIVE_HIGH)
#define GPIO33_DVAL_1		MFP_CFG_OUT(GPIO33, AF1, DRIVE_HIGH)
#define GPIO96_DVAL_1		MFP_CFG_OUT(GPIO96, AF2, DRIVE_HIGH)
#define GPIO18_RDY		MFP_CFG_IN(GPIO18, AF1)
#define GPIO20_DREQ_0		MFP_CFG_IN(GPIO20, AF1)
#define GPIO115_DREQ_0		MFP_CFG_IN(GPIO115, AF1)
#define GPIO80_DREQ_1		MFP_CFG_IN(GPIO80, AF1)
#define GPIO97_DREQ_1		MFP_CFG_IN(GPIO97, AF2)
#define GPIO85_DREQ_2		MFP_CFG_IN(GPIO85, AF2)
#define GPIO100_DREQ_2		MFP_CFG_IN(GPIO100, AF2)

/* Alternate Bus Master Mode I/O Signals */
#define GPIO20_MBREQ		MFP_CFG_IN(GPIO20, AF2)
#define GPIO80_MBREQ		MFP_CFG_IN(GPIO80, AF2)
#define GPIO96_MBREQ		MFP_CFG_IN(GPIO96, AF2)
#define GPIO115_MBREQ		MFP_CFG_IN(GPIO115, AF3)
#define GPIO21_MBGNT		MFP_CFG_OUT(GPIO21, AF3, DRIVE_LOW)
#define GPIO33_MBGNT		MFP_CFG_OUT(GPIO33, AF3, DRIVE_LOW)
#define GPIO97_MBGNT		MFP_CFG_OUT(GPIO97, AF2, DRIVE_LOW)
#define GPIO116_MBGNT		MFP_CFG_OUT(GPIO116, AF3, DRIVE_LOW)

/* PC CARD */
#define GPIO15_nPCE_1		MFP_CFG_OUT(GPIO15, AF1, DRIVE_HIGH)
#define GPIO85_nPCE_1		MFP_CFG_OUT(GPIO85, AF1, DRIVE_HIGH)
#define GPIO86_nPCE_1		MFP_CFG_OUT(GPIO86, AF1, DRIVE_HIGH)
#define GPIO102_nPCE_1		MFP_CFG_OUT(GPIO102, AF1, DRIVE_HIGH)
#define GPIO54_nPCE_2		MFP_CFG_OUT(GPIO54, AF2, DRIVE_HIGH)
#define GPIO78_nPCE_2		MFP_CFG_OUT(GPIO78, AF1, DRIVE_HIGH)
#define GPIO87_nPCE_2		MFP_CFG_IN(GPIO87, AF1)
#define GPIO55_nPREG		MFP_CFG_OUT(GPIO55, AF2, DRIVE_HIGH)
#define GPIO50_nPIOR		MFP_CFG_OUT(GPIO50, AF2, DRIVE_HIGH)
#define GPIO51_nPIOW		MFP_CFG_OUT(GPIO51, AF2, DRIVE_HIGH)
#define GPIO49_nPWE		MFP_CFG_OUT(GPIO49, AF2, DRIVE_HIGH)
#define GPIO48_nPOE		MFP_CFG_OUT(GPIO48, AF2, DRIVE_HIGH)
#define GPIO57_nIOIS16		MFP_CFG_IN(GPIO57, AF1)
#define GPIO56_nPWAIT		MFP_CFG_IN(GPIO56, AF1)
#define GPIO79_PSKTSEL		MFP_CFG_OUT(GPIO79, AF1, DRIVE_HIGH)
#define GPIO104_PSKTSEL		MFP_CFG_OUT(GPIO104, AF1, DRIVE_HIGH)

/* I2C */
#define GPIO117_I2C_SCL		MFP_CFG_IN(GPIO117, AF1)
#define GPIO118_I2C_SDA		MFP_CFG_IN(GPIO118, AF1)

/* FFUART */
#define GPIO9_FFUART_CTS	MFP_CFG_IN(GPIO9, AF3)
#define GPIO26_FFUART_CTS	MFP_CFG_IN(GPIO26, AF3)
#define GPIO35_FFUART_CTS	MFP_CFG_IN(GPIO35, AF1)
#define GPIO100_FFUART_CTS	MFP_CFG_IN(GPIO100, AF3)
#define GPIO10_FFUART_DCD	MFP_CFG_IN(GPIO10, AF1)
#define GPIO36_FFUART_DCD	MFP_CFG_IN(GPIO36, AF1)
#define GPIO33_FFUART_DSR	MFP_CFG_IN(GPIO33, AF2)
#define GPIO37_FFUART_DSR	MFP_CFG_IN(GPIO37, AF1)
#define GPIO38_FFUART_RI	MFP_CFG_IN(GPIO38, AF1)
#define GPIO89_FFUART_RI	MFP_CFG_IN(GPIO89, AF3)
#define GPIO19_FFUART_RXD	MFP_CFG_IN(GPIO19, AF3)
#define GPIO33_FFUART_RXD	MFP_CFG_IN(GPIO33, AF1)
#define GPIO34_FFUART_RXD	MFP_CFG_IN(GPIO34, AF1)
#define GPIO41_FFUART_RXD	MFP_CFG_IN(GPIO41, AF1)
#define GPIO53_FFUART_RXD	MFP_CFG_IN(GPIO53, AF1)
#define GPIO85_FFUART_RXD	MFP_CFG_IN(GPIO85, AF1)
#define GPIO96_FFUART_RXD	MFP_CFG_IN(GPIO96, AF3)
#define GPIO102_FFUART_RXD	MFP_CFG_IN(GPIO102, AF3)
#define GPIO16_FFUART_TXD	MFP_CFG_OUT(GPIO16, AF3, DRIVE_HIGH)
#define GPIO37_FFUART_TXD	MFP_CFG_OUT(GPIO37, AF3, DRIVE_HIGH)
#define GPIO39_FFUART_TXD	MFP_CFG_OUT(GPIO39, AF2, DRIVE_HIGH)
#define GPIO83_FFUART_TXD	MFP_CFG_OUT(GPIO83, AF2, DRIVE_HIGH)
#define GPIO99_FFUART_TXD	MFP_CFG_OUT(GPIO99, AF3, DRIVE_HIGH)
#define GPIO27_FFUART_RTS	MFP_CFG_OUT(GPIO27, AF3, DRIVE_HIGH)
#define GPIO41_FFUART_RTS	MFP_CFG_OUT(GPIO41, AF2, DRIVE_HIGH)
#define GPIO83_FFUART_RTS	MFP_CFG_OUT(GPIO83, AF3, DRIVE_HIGH)
#define GPIO98_FFUART_RTS	MFP_CFG_OUT(GPIO98, AF3, DRIVE_HIGH)
#define GPIO40_FFUART_DTR	MFP_CFG_OUT(GPIO40, AF2, DRIVE_HIGH)
#define GPIO82_FFUART_DTR	MFP_CFG_OUT(GPIO82, AF3, DRIVE_HIGH)

/* BTUART */
#define GPIO44_BTUART_CTS	MFP_CFG_IN(GPIO44, AF1)
#define GPIO42_BTUART_RXD	MFP_CFG_IN(GPIO42, AF1)
#define GPIO45_BTUART_RTS	MFP_CFG_OUT(GPIO45, AF2, DRIVE_HIGH)
#define GPIO45_BTUART_RTS_LPM_LOW	MFP_CFG_OUT(GPIO45, AF2, DRIVE_LOW)
#define GPIO43_BTUART_TXD	MFP_CFG_OUT(GPIO43, AF2, DRIVE_HIGH)
#define GPIO43_BTUART_TXD_LPM_LOW	MFP_CFG_OUT(GPIO43, AF2, DRIVE_LOW)

/* STUART */
#define GPIO46_STUART_RXD	MFP_CFG_IN(GPIO46, AF2)
#define GPIO47_STUART_TXD	MFP_CFG_OUT(GPIO47, AF1, DRIVE_HIGH)

/* FICP */
#define GPIO42_FICP_RXD		MFP_CFG_IN(GPIO42, AF2)
#define GPIO46_FICP_RXD		MFP_CFG_IN(GPIO46, AF1)
#define GPIO43_FICP_TXD		MFP_CFG_OUT(GPIO43, AF1, DRIVE_HIGH)
#define GPIO47_FICP_TXD		MFP_CFG_OUT(GPIO47, AF2, DRIVE_HIGH)

/* PWM 0/1/2/3 */
#define GPIO11_PWM2_OUT		MFP_CFG_OUT(GPIO11, AF2, DRIVE_LOW)
#define GPIO12_PWM3_OUT		MFP_CFG_OUT(GPIO12, AF2, DRIVE_LOW)
#define GPIO16_PWM0_OUT		MFP_CFG_OUT(GPIO16, AF2, DRIVE_LOW)
#define GPIO17_PWM1_OUT		MFP_CFG_OUT(GPIO17, AF2, DRIVE_LOW)
#define GPIO38_PWM1_OUT		MFP_CFG_OUT(GPIO38, AF3, DRIVE_LOW)
#define GPIO46_PWM2_OUT		MFP_CFG_OUT(GPIO46, AF2, DRIVE_LOW)
#define GPIO47_PWM3_OUT		MFP_CFG_OUT(GPIO47, AF3, DRIVE_LOW)
#define GPIO79_PWM2_OUT		MFP_CFG_OUT(GPIO79, AF3, DRIVE_LOW)
#define GPIO80_PWM3_OUT		MFP_CFG_OUT(GPIO80, AF3, DRIVE_LOW)
#define GPIO115_PWM1_OUT	MFP_CFG_OUT(GPIO115, AF3, DRIVE_LOW)

/* AC97 */
#define GPIO31_AC97_SYNC	MFP_CFG_OUT(GPIO31, AF2, DRIVE_LOW)
#define GPIO94_AC97_SYNC	MFP_CFG_OUT(GPIO94, AF1, DRIVE_LOW)
#define GPIO30_AC97_SDATA_OUT	MFP_CFG_OUT(GPIO30, AF2, DRIVE_LOW)
#define GPIO93_AC97_SDATA_OUT	MFP_CFG_OUT(GPIO93, AF1, DRIVE_LOW)
#define GPIO45_AC97_SYSCLK	MFP_CFG_OUT(GPIO45, AF1, DRIVE_LOW)
#define GPIO89_AC97_SYSCLK	MFP_CFG_OUT(GPIO89, AF1, DRIVE_LOW)
#define GPIO98_AC97_SYSCLK	MFP_CFG_OUT(GPIO98, AF1, DRIVE_LOW)
#define GPIO95_AC97_nRESET	MFP_CFG_OUT(GPIO95, AF1, DRIVE_LOW)
#define GPIO113_AC97_nRESET	MFP_CFG_OUT(GPIO113, AF2, DRIVE_LOW)
#define GPIO28_AC97_BITCLK	MFP_CFG_IN(GPIO28, AF1)
#define GPIO29_AC97_SDATA_IN_0	MFP_CFG_IN(GPIO29, AF1)
#define GPIO116_AC97_SDATA_IN_0	MFP_CFG_IN(GPIO116, AF2)
#define GPIO99_AC97_SDATA_IN_1	MFP_CFG_IN(GPIO99, AF2)

/* I2S */
#define GPIO28_I2S_BITCLK_IN	MFP_CFG_IN(GPIO28, AF2)
#define GPIO28_I2S_BITCLK_OUT	MFP_CFG_OUT(GPIO28, AF1, DRIVE_LOW)
#define GPIO29_I2S_SDATA_IN	MFP_CFG_IN(GPIO29, AF2)
#define GPIO30_I2S_SDATA_OUT	MFP_CFG_OUT(GPIO30, AF1, DRIVE_LOW)
#define GPIO31_I2S_SYNC		MFP_CFG_OUT(GPIO31, AF1, DRIVE_LOW)
#define GPIO113_I2S_SYSCLK	MFP_CFG_OUT(GPIO113, AF1, DRIVE_LOW)

/* SSP 1 */
#define GPIO23_SSP1_SCLK_IN	MFP_CFG_IN(GPIO23, AF2)
#define GPIO23_SSP1_SCLK	MFP_CFG_OUT(GPIO23, AF2, DRIVE_LOW)
#define GPIO29_SSP1_SCLK	MFP_CFG_IN(GPIO29, AF3)
#define GPIO27_SSP1_SYSCLK	MFP_CFG_OUT(GPIO27, AF1, DRIVE_LOW)
#define GPIO53_SSP1_SYSCLK	MFP_CFG_OUT(GPIO53, AF3, DRIVE_LOW)
#define GPIO24_SSP1_SFRM	MFP_CFG_IN(GPIO24, AF2)
#define GPIO28_SSP1_SFRM	MFP_CFG_IN(GPIO28, AF3)
#define GPIO25_SSP1_TXD		MFP_CFG_OUT(GPIO25, AF2, DRIVE_LOW)
#define GPIO57_SSP1_TXD		MFP_CFG_OUT(GPIO57, AF3, DRIVE_LOW)
#define GPIO26_SSP1_RXD		MFP_CFG_IN(GPIO26, AF1)
#define GPIO27_SSP1_SCLKEN	MFP_CFG_IN(GPIO27, AF2)

/* SSP 2 */
#define GPIO19_SSP2_SCLK	MFP_CFG_IN(GPIO19, AF1)
#define GPIO22_SSP2_SCLK	MFP_CFG_IN(GPIO22, AF3)
#define GPIO29_SSP2_SCLK	MFP_CFG_OUT(GPIO29, AF3, DRIVE_LOW)
#define GPIO36_SSP2_SCLK	MFP_CFG_IN(GPIO36, AF2)
#define GPIO50_SSP2_SCLK	MFP_CFG_IN(GPIO50, AF3)
#define GPIO22_SSP2_SYSCLK	MFP_CFG_OUT(GPIO22, AF2, DRIVE_LOW)
#define GPIO14_SSP2_SFRM	MFP_CFG_IN(GPIO14, AF2)
#define GPIO37_SSP2_SFRM	MFP_CFG_IN(GPIO37, AF2)
#define GPIO87_SSP2_SFRM	MFP_CFG_OUT(GPIO87, AF3, DRIVE_LOW)
#define GPIO88_SSP2_SFRM	MFP_CFG_IN(GPIO88, AF3)
#define GPIO13_SSP2_TXD		MFP_CFG_OUT(GPIO13, AF1, DRIVE_LOW)
#define GPIO38_SSP2_TXD		MFP_CFG_OUT(GPIO38, AF2, DRIVE_LOW)
#define GPIO87_SSP2_TXD		MFP_CFG_OUT(GPIO87, AF1, DRIVE_LOW)
#define GPIO89_SSP2_TXD		MFP_CFG_OUT(GPIO89, AF3, DRIVE_LOW)
#define GPIO11_SSP2_RXD		MFP_CFG_IN(GPIO11, AF2)
#define GPIO29_SSP2_RXD		MFP_CFG_OUT(GPIO29, AF1, DRIVE_LOW)
#define GPIO40_SSP2_RXD		MFP_CFG_IN(GPIO40, AF1)
#define GPIO86_SSP2_RXD		MFP_CFG_IN(GPIO86, AF1)
#define GPIO88_SSP2_RXD		MFP_CFG_IN(GPIO88, AF2)
#define GPIO22_SSP2_EXTCLK	MFP_CFG_IN(GPIO22, AF1)
#define GPIO27_SSP2_EXTCLK	MFP_CFG_IN(GPIO27, AF1)
#define GPIO22_SSP2_SCLKEN	MFP_CFG_IN(GPIO22, AF2)
#define GPIO23_SSP2_SCLKEN	MFP_CFG_IN(GPIO23, AF2)

/* SSP 3 */
#define GPIO34_SSP3_SCLK	MFP_CFG_IN(GPIO34, AF3)
#define GPIO40_SSP3_SCLK	MFP_CFG_OUT(GPIO40, AF3, DRIVE_LOW)
#define GPIO52_SSP3_SCLK	MFP_CFG_IN(GPIO52, AF2)
#define GPIO84_SSP3_SCLK	MFP_CFG_IN(GPIO84, AF1)
#define GPIO45_SSP3_SYSCLK	MFP_CFG_OUT(GPIO45, AF3, DRIVE_LOW)
#define GPIO35_SSP3_SFRM	MFP_CFG_IN(GPIO35, AF3)
#define GPIO39_SSP3_SFRM	MFP_CFG_IN(GPIO39, AF3)
#define GPIO83_SSP3_SFRM	MFP_CFG_IN(GPIO83, AF1)
#define GPIO35_SSP3_TXD		MFP_CFG_OUT(GPIO35, AF3, DRIVE_LOW)
#define GPIO38_SSP3_TXD		MFP_CFG_OUT(GPIO38, AF1, DRIVE_LOW)
#define GPIO81_SSP3_TXD		MFP_CFG_OUT(GPIO81, AF1, DRIVE_LOW)
#define GPIO41_SSP3_RXD		MFP_CFG_IN(GPIO41, AF3)
#define GPIO82_SSP3_RXD		MFP_CFG_IN(GPIO82, AF1)
#define GPIO89_SSP3_RXD		MFP_CFG_IN(GPIO89, AF1)

/* MMC */
#define GPIO32_MMC_CLK		MFP_CFG_OUT(GPIO32, AF2, DRIVE_LOW)
#define GPIO92_MMC_DAT_0	MFP_CFG_IN(GPIO92, AF1)
#define GPIO109_MMC_DAT_1	MFP_CFG_IN(GPIO109, AF1)
#define GPIO110_MMC_DAT_2	MFP_CFG_IN(GPIO110, AF1)
#define GPIO111_MMC_DAT_3	MFP_CFG_IN(GPIO111, AF1)
#define GPIO112_MMC_CMD		MFP_CFG_IN(GPIO112, AF1)

/* LCD */
#define GPIO58_LCD_LDD_0	MFP_CFG_OUT(GPIO58, AF2, DRIVE_LOW)
#define GPIO59_LCD_LDD_1	MFP_CFG_OUT(GPIO59, AF2, DRIVE_LOW)
#define GPIO60_LCD_LDD_2	MFP_CFG_OUT(GPIO60, AF2, DRIVE_LOW)
#define GPIO61_LCD_LDD_3	MFP_CFG_OUT(GPIO61, AF2, DRIVE_LOW)
#define GPIO62_LCD_LDD_4	MFP_CFG_OUT(GPIO62, AF2, DRIVE_LOW)
#define GPIO63_LCD_LDD_5	MFP_CFG_OUT(GPIO63, AF2, DRIVE_LOW)
#define GPIO64_LCD_LDD_6	MFP_CFG_OUT(GPIO64, AF2, DRIVE_LOW)
#define GPIO65_LCD_LDD_7	MFP_CFG_OUT(GPIO65, AF2, DRIVE_LOW)
#define GPIO66_LCD_LDD_8	MFP_CFG_OUT(GPIO66, AF2, DRIVE_LOW)
#define GPIO67_LCD_LDD_9	MFP_CFG_OUT(GPIO67, AF2, DRIVE_LOW)
#define GPIO68_LCD_LDD_10	MFP_CFG_OUT(GPIO68, AF2, DRIVE_LOW)
#define GPIO69_LCD_LDD_11	MFP_CFG_OUT(GPIO69, AF2, DRIVE_LOW)
#define GPIO70_LCD_LDD_12	MFP_CFG_OUT(GPIO70, AF2, DRIVE_LOW)
#define GPIO71_LCD_LDD_13	MFP_CFG_OUT(GPIO71, AF2, DRIVE_LOW)
#define GPIO72_LCD_LDD_14	MFP_CFG_OUT(GPIO72, AF2, DRIVE_LOW)
#define GPIO73_LCD_LDD_15	MFP_CFG_OUT(GPIO73, AF2, DRIVE_LOW)
#define GPIO86_LCD_LDD_16	MFP_CFG_OUT(GPIO86, AF2, DRIVE_LOW)
#define GPIO87_LCD_LDD_17	MFP_CFG_OUT(GPIO87, AF2, DRIVE_LOW)
#define GPIO74_LCD_FCLK		MFP_CFG_OUT(GPIO74, AF2, DRIVE_LOW)
#define GPIO75_LCD_LCLK		MFP_CFG_OUT(GPIO75, AF2, DRIVE_LOW)
#define GPIO76_LCD_PCLK		MFP_CFG_OUT(GPIO76, AF2, DRIVE_LOW)
#define GPIO77_LCD_BIAS		MFP_CFG_OUT(GPIO77, AF2, DRIVE_LOW)
#define GPIO14_LCD_VSYNC	MFP_CFG_IN(GPIO14, AF1)
#define GPIO19_LCD_CS		MFP_CFG_OUT(GPIO19, AF2, DRIVE_LOW)

/* Keypad */
#define GPIO93_KP_DKIN_0	MFP_CFG_IN(GPIO93, AF1)
#define GPIO94_KP_DKIN_1	MFP_CFG_IN(GPIO94, AF1)
#define GPIO95_KP_DKIN_2	MFP_CFG_IN(GPIO95, AF1)
#define GPIO96_KP_DKIN_3	MFP_CFG_IN(GPIO96, AF1)
#define GPIO97_KP_DKIN_4	MFP_CFG_IN(GPIO97, AF1)
#define GPIO98_KP_DKIN_5	MFP_CFG_IN(GPIO98, AF1)
#define GPIO99_KP_DKIN_6	MFP_CFG_IN(GPIO99, AF1)
#define GPIO13_KP_KDIN_7	MFP_CFG_IN(GPIO13, AF2)
#define GPIO100_KP_MKIN_0	MFP_CFG_IN(GPIO100, AF1)
#define GPIO101_KP_MKIN_1	MFP_CFG_IN(GPIO101, AF1)
#define GPIO102_KP_MKIN_2	MFP_CFG_IN(GPIO102, AF1)
#define GPIO34_KP_MKIN_3	MFP_CFG_IN(GPIO34, AF2)
#define GPIO37_KP_MKIN_3	MFP_CFG_IN(GPIO37, AF3)
#define GPIO97_KP_MKIN_3	MFP_CFG_IN(GPIO97, AF3)
#define GPIO98_KP_MKIN_4	MFP_CFG_IN(GPIO98, AF3)
#define GPIO38_KP_MKIN_4	MFP_CFG_IN(GPIO38, AF2)
#define GPIO39_KP_MKIN_4	MFP_CFG_IN(GPIO39, AF1)
#define GPIO16_KP_MKIN_5	MFP_CFG_IN(GPIO16, AF1)
#define GPIO90_KP_MKIN_5	MFP_CFG_IN(GPIO90, AF1)
#define GPIO99_KP_MKIN_5	MFP_CFG_IN(GPIO99, AF3)
#define GPIO17_KP_MKIN_6	MFP_CFG_IN(GPIO17, AF1)
#define GPIO91_KP_MKIN_6	MFP_CFG_IN(GPIO91, AF1)
#define GPIO95_KP_MKIN_6	MFP_CFG_IN(GPIO95, AF3)
#define GPIO13_KP_MKIN_7	MFP_CFG_IN(GPIO13, AF3)
#define GPIO36_KP_MKIN_7	MFP_CFG_IN(GPIO36, AF3)
#define GPIO103_KP_MKOUT_0	MFP_CFG_OUT(GPIO103, AF2, DRIVE_HIGH)
#define GPIO104_KP_MKOUT_1	MFP_CFG_OUT(GPIO104, AF2, DRIVE_HIGH)
#define GPIO105_KP_MKOUT_2	MFP_CFG_OUT(GPIO105, AF2, DRIVE_HIGH)
#define GPIO106_KP_MKOUT_3	MFP_CFG_OUT(GPIO106, AF2, DRIVE_HIGH)
#define GPIO107_KP_MKOUT_4	MFP_CFG_OUT(GPIO107, AF2, DRIVE_HIGH)
#define GPIO108_KP_MKOUT_5	MFP_CFG_OUT(GPIO108, AF2, DRIVE_HIGH)
#define GPIO35_KP_MKOUT_6	MFP_CFG_OUT(GPIO35, AF2, DRIVE_HIGH)
#define GPIO22_KP_MKOUT_7	MFP_CFG_OUT(GPIO22, AF1, DRIVE_HIGH)
#define GPIO40_KP_MKOUT_6	MFP_CFG_OUT(GPIO40, AF1, DRIVE_HIGH)
#define GPIO41_KP_MKOUT_7	MFP_CFG_OUT(GPIO41, AF1, DRIVE_HIGH)
#define GPIO96_KP_MKOUT_6	MFP_CFG_OUT(GPIO96, AF3, DRIVE_HIGH)

/* USB P3 */
#define GPIO10_USB_P3_5		MFP_CFG_IN(GPIO10, AF3)
#define GPIO11_USB_P3_1		MFP_CFG_IN(GPIO11, AF3)
#define GPIO30_USB_P3_2		MFP_CFG_OUT(GPIO30, AF3, DRIVE_LOW)
#define GPIO31_USB_P3_6		MFP_CFG_OUT(GPIO31, AF3, DRIVE_LOW)
#define GPIO56_USB_P3_4		MFP_CFG_OUT(GPIO56, AF1, DRIVE_LOW)
#define GPIO86_USB_P3_5		MFP_CFG_IN(GPIO86, AF3)
#define GPIO87_USB_P3_1		MFP_CFG_IN(GPIO87, AF3)
#define GPIO90_USB_P3_5		MFP_CFG_IN(GPIO90, AF2)
#define GPIO91_USB_P3_1		MFP_CFG_IN(GPIO91, AF2)
#define GPIO113_USB_P3_3	MFP_CFG_IN(GPIO113, AF3)

/* USB P2 */
#define GPIO34_USB_P2_2		MFP_CFG_OUT(GPIO34, AF1, DRIVE_LOW)
#define GPIO35_USB_P2_1		MFP_CFG_IN(GPIO35, AF2)
#define GPIO36_USB_P2_4		MFP_CFG_OUT(GPIO36, AF1, DRIVE_LOW)
#define GPIO37_USB_P2_8		MFP_CFG_OUT(GPIO37, AF1, DRIVE_LOW)
#define GPIO38_USB_P2_3		MFP_CFG_IN(GPIO38, AF3)
#define GPIO39_USB_P2_6		MFP_CFG_OUT(GPIO39, AF1, DRIVE_LOW)
#define GPIO40_USB_P2_5		MFP_CFG_IN(GPIO40, AF3)
#define GPIO41_USB_P2_7		MFP_CFG_IN(GPIO41, AF2)
#define GPIO53_USB_P2_3		MFP_CFG_IN(GPIO53, AF2)

/* USB Host Port 1/2 */
#define GPIO88_USBH1_PWR	MFP_CFG_IN(GPIO88, AF1)
#define GPIO89_USBH1_PEN	MFP_CFG_OUT(GPIO89, AF2, DRIVE_LOW)
#define GPIO119_USBH2_PWR	MFP_CFG_IN(GPIO119, AF1)
#define GPIO120_USBH2_PEN	MFP_CFG_OUT(GPIO120, AF2, DRIVE_LOW)

/* QCI - default to Master Mode: CIF_FV/CIF_LV Direction In */
#define GPIO115_CIF_DD_3	MFP_CFG_IN(GPIO115, AF2)
#define GPIO116_CIF_DD_2	MFP_CFG_IN(GPIO116, AF1)
#define GPIO12_CIF_DD_7		MFP_CFG_IN(GPIO12, AF2)
#define GPIO17_CIF_DD_6		MFP_CFG_IN(GPIO17, AF2)
#define GPIO23_CIF_MCLK		MFP_CFG_OUT(GPIO23, AF1, DRIVE_LOW)
#define GPIO24_CIF_FV		MFP_CFG_IN(GPIO24, AF1)
#define GPIO25_CIF_LV		MFP_CFG_IN(GPIO25, AF1)
#define GPIO26_CIF_PCLK		MFP_CFG_IN(GPIO26, AF2)
#define GPIO27_CIF_DD_0		MFP_CFG_IN(GPIO27, AF3)
#define GPIO42_CIF_MCLK		MFP_CFG_OUT(GPIO42, AF3, DRIVE_LOW)
#define GPIO43_CIF_FV		MFP_CFG_IN(GPIO43, AF3)
#define GPIO44_CIF_LV		MFP_CFG_IN(GPIO44, AF3)
#define GPIO45_CIF_PCLK		MFP_CFG_IN(GPIO45, AF3)
#define GPIO47_CIF_DD_0		MFP_CFG_IN(GPIO47, AF1)
#define GPIO48_CIF_DD_5		MFP_CFG_IN(GPIO48, AF1)
#define GPIO50_CIF_DD_3		MFP_CFG_IN(GPIO50, AF1)
#define GPIO51_CIF_DD_2		MFP_CFG_IN(GPIO51, AF1)
#define GPIO52_CIF_DD_4		MFP_CFG_IN(GPIO52, AF1)
#define GPIO53_CIF_MCLK		MFP_CFG_OUT(GPIO53, AF2, DRIVE_LOW)
#define GPIO54_CIF_PCLK		MFP_CFG_IN(GPIO54, AF3)
#define GPIO55_CIF_DD_1		MFP_CFG_IN(GPIO55, AF1)
#define GPIO81_CIF_DD_0		MFP_CFG_IN(GPIO81, AF2)
#define GPIO82_CIF_DD_5		MFP_CFG_IN(GPIO82, AF3)
#define GPIO83_CIF_DD_4		MFP_CFG_IN(GPIO83, AF3)
#define GPIO84_CIF_FV		MFP_CFG_IN(GPIO84, AF3)
#define GPIO85_CIF_LV		MFP_CFG_IN(GPIO85, AF3)
#define GPIO90_CIF_DD_4		MFP_CFG_IN(GPIO90, AF3)
#define GPIO91_CIF_DD_5		MFP_CFG_IN(GPIO91, AF3)
#define GPIO93_CIF_DD_6		MFP_CFG_IN(GPIO93, AF2)
#define GPIO94_CIF_DD_5		MFP_CFG_IN(GPIO94, AF2)
#define GPIO95_CIF_DD_4		MFP_CFG_IN(GPIO95, AF2)
#define GPIO98_CIF_DD_0		MFP_CFG_IN(GPIO98, AF2)
#define GPIO103_CIF_DD_3	MFP_CFG_IN(GPIO103, AF1)
#define GPIO104_CIF_DD_2	MFP_CFG_IN(GPIO104, AF1)
#define GPIO105_CIF_DD_1	MFP_CFG_IN(GPIO105, AF1)
#define GPIO106_CIF_DD_9	MFP_CFG_IN(GPIO106, AF1)
#define GPIO107_CIF_DD_8	MFP_CFG_IN(GPIO107, AF1)
#define GPIO108_CIF_DD_7	MFP_CFG_IN(GPIO108, AF1)
#define GPIO114_CIF_DD_1	MFP_CFG_IN(GPIO114, AF1)

/* Universal Subscriber ID Interface */
#define GPIO114_UVS0		MFP_CFG_OUT(GPIO114, AF2, DRIVE_LOW)
#define GPIO115_nUVS1		MFP_CFG_OUT(GPIO115, AF2, DRIVE_LOW)
#define GPIO116_nUVS2		MFP_CFG_OUT(GPIO116, AF2, DRIVE_LOW)
#define GPIO14_UCLK		MFP_CFG_OUT(GPIO14, AF3, DRIVE_LOW)
#define GPIO91_UCLK		MFP_CFG_OUT(GPIO91, AF2, DRIVE_LOW)
#define GPIO19_nURST		MFP_CFG_OUT(GPIO19, AF3, DRIVE_LOW)
#define GPIO90_nURST		MFP_CFG_OUT(GPIO90, AF2, DRIVE_LOW)
#define GPIO116_UDET		MFP_CFG_IN(GPIO116, AF3)
#define GPIO114_UEN		MFP_CFG_OUT(GPIO114, AF1, DRIVE_LOW)
#define GPIO115_UEN		MFP_CFG_OUT(GPIO115, AF1, DRIVE_LOW)

/* Mobile Scalable Link (MSL) Interface */
#define GPIO81_BB_OB_DAT_0	MFP_CFG_OUT(GPIO81, AF2, DRIVE_LOW)
#define GPIO48_BB_OB_DAT_1	MFP_CFG_OUT(GPIO48, AF1, DRIVE_LOW)
#define GPIO50_BB_OB_DAT_2	MFP_CFG_OUT(GPIO50, AF1, DRIVE_LOW)
#define GPIO51_BB_OB_DAT_3	MFP_CFG_OUT(GPIO51, AF1, DRIVE_LOW)
#define GPIO52_BB_OB_CLK	MFP_CFG_OUT(GPIO52, AF1, DRIVE_LOW)
#define GPIO53_BB_OB_STB	MFP_CFG_OUT(GPIO53, AF1, DRIVE_LOW)
#define GPIO54_BB_OB_WAIT	MFP_CFG_IN(GPIO54, AF2)
#define GPIO82_BB_IB_DAT_0	MFP_CFG_IN(GPIO82, AF2)
#define GPIO55_BB_IB_DAT_1	MFP_CFG_IN(GPIO55, AF2)
#define GPIO56_BB_IB_DAT_2	MFP_CFG_IN(GPIO56, AF2)
#define GPIO57_BB_IB_DAT_3	MFP_CFG_IN(GPIO57, AF2)
#define GPIO83_BB_IB_CLK	MFP_CFG_IN(GPIO83, AF2)
#define GPIO84_BB_IB_STB	MFP_CFG_IN(GPIO84, AF2)
#define GPIO85_BB_IB_WAIT	MFP_CFG_OUT(GPIO85, AF2, DRIVE_LOW)

/* Memory Stick Host Controller */
#define GPIO92_MSBS		MFP_CFG_OUT(GPIO92, AF2, DRIVE_LOW)
#define GPIO109_MSSDIO		MFP_CFG_IN(GPIO109, AF2)
#define GPIO112_nMSINS		MFP_CFG_IN(GPIO112, AF2)
#define GPIO32_MSSCLK		MFP_CFG_OUT(GPIO32, AF1, DRIVE_LOW)

/* commonly used pin configurations */
#define GPIOxx_LCD_16BPP	\
	GPIO58_LCD_LDD_0,	\
	GPIO59_LCD_LDD_1,	\
	GPIO60_LCD_LDD_2,	\
	GPIO61_LCD_LDD_3,	\
	GPIO62_LCD_LDD_4,	\
	GPIO63_LCD_LDD_5,	\
	GPIO64_LCD_LDD_6,	\
	GPIO65_LCD_LDD_7,	\
	GPIO66_LCD_LDD_8,	\
	GPIO67_LCD_LDD_9,	\
	GPIO68_LCD_LDD_10,	\
	GPIO69_LCD_LDD_11,	\
	GPIO70_LCD_LDD_12,	\
	GPIO71_LCD_LDD_13,	\
	GPIO72_LCD_LDD_14,	\
	GPIO73_LCD_LDD_15

#define GPIOxx_LCD_TFT_16BPP	\
	GPIOxx_LCD_16BPP,	\
	GPIO74_LCD_FCLK,	\
	GPIO75_LCD_LCLK,	\
	GPIO76_LCD_PCLK,	\
	GPIO77_LCD_BIAS


extern int keypad_set_wake(unsigned int on);
#endif /* __ASM_ARCH_MFP_PXA27X_H */
