/*******************************************************************************
  * Company: Wang Electronic Technology Co., Ltd.
  ******************************************************************************
  * 文件名称：main.c
  * 功能说明：宝马1768_3.2寸LCD test
  * 版    本：V1.1
  * 作    者：openmcu	
  * 日    期: 2014-05-28
********************************************************************************
  * 文件名称：
  * 功能说明：
  * 版    本：
  * 更新作者:	
  * 日    期：
  * 更新原因：
********************************************************************************/                 
#include <LPC17xx.H>                    
#include "lcd.h"
#include "string.h"
#include "sys_tick.h"
#include "tkc/platform.h"
#include "lcd/lcd_mem_fragment.h"

void lcd_test(void) {
	rect_t r = rect_init(0, 0, 30, 30);
	lcd_t* lcd = lcd_mem_fragment_create(LCD_W, LCD_H);
	color_t red = color_init(0xff, 0, 0, 0xff);
	color_t green  = color_init(0, 0xff, 0, 0xff);
	color_t blue = color_init(0, 0, 0xff, 0xff);
	
	while(1) {
		lcd_begin_frame(lcd, &r, LCD_DRAW_NORMAL);
		lcd_set_fill_color(lcd, red);
		lcd_fill_rect(lcd, 0, 0, 10, 10);
		lcd_set_fill_color(lcd, green);
		lcd_fill_rect(lcd, 10, 10, 10, 10);
		lcd_set_fill_color(lcd, blue);
		lcd_fill_rect(lcd, 20, 20, 10, 10);
		
		lcd_end_frame(lcd);
	}
}

void systick_test(void) {
  int64_t start = get_time_ms64();
  sleep_ms(1000);
  int64_t end = get_time_ms64();
  int64_t duration = end - start;
	
  assert(duration == 1000);
}

int main (void)                        
{
  SystemInit();
  sys_tick_init();
	
  LCD_Init();
  LCD_Clear(White);
	
  platform_prepare();
  systick_test();
	
  lcd_test();
}

