#include <LPC17xx.H>                    
#include "sys_tick.h"

/* Systick Register address, refer datasheet for more info */
#define STCTRL      (*( ( volatile unsigned long *) 0xE000E010 ))
#define STRELOAD    (*( ( volatile unsigned long *) 0xE000E014 ))
#define STCURR      (*( ( volatile unsigned long *) 0xE000E018 ))  

/*******STCTRL bits*******/
#define SBIT_ENABLE     0
#define SBIT_TICKINT    1
#define SBIT_CLKSOURCE  2

/* 100000000Mhz * 1ms = 1000000 - 1 */
#define RELOAD_VALUE  99999

void sys_tick_init(void) {
  STRELOAD = RELOAD_VALUE;    // Reload value for 1ms tick
  /* Enable the Systick, Systick Interrup and select CPU Clock Source */
	STCTRL = (1<<SBIT_ENABLE) | (1<<SBIT_TICKINT) | (1<<SBIT_CLKSOURCE);
	
	return;
}