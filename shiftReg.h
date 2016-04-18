#include <stdbool.h>
#include <stdint.h>
#include "nrf_gpio.h"
#include "boards.h"

//Define shift register pins
#define RCLK 	23
#define SRCLK 	24
#define SRCLR 	25
#define QA1 	19
#define QA2 	20
#define QA3 	22

//Define button pins
#define btn1 28
#define btn2 3
#define btn3 4
#define btn4 30
#define btn5 29
#define btn6 31

//Define colors, bitwise
#define whiteA 	1
#define redA 	8
#define greenA	4
#define blueA	2
#define whiteB 	16
#define redB 	128
#define greenB	64
#define blueB	32



void shiftRegInit(void);
void shiftRegPulse(void);
void shiftRegLatch(void);
void shiftRegWrite(uint8_t reg1, uint8_t reg2, uint8_t reg3);
uint8_t testFunksjon(uint8_t btn, uint8_t btncounter);



