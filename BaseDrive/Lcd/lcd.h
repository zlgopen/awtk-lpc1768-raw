

#ifndef _LCD_H
#define _LCD_H
#include <stdint.h>
//定义LCD的尺寸
#define LCD_W 240
#define LCD_H 320

                            
/* LCD RGB color definitions                                                 */
#define Black           0x0000		  /*   0,   0,   0 */
#define Navy            0x000F      /*   0,   0, 128 */
#define DarkGreen       0x03E0      /*   0, 128,   0 */
#define DarkCyan        0x03EF      /*   0, 128, 128 */
#define Maroon          0x7800      /* 128,   0,   0 */
#define Purple          0x780F      /* 128,   0, 128 */
#define Olive           0x7BE0      /* 128, 128,   0 */
#define LightGrey       0xC618      /* 192, 192, 192 */
#define DarkGrey        0x7BEF      /* 128, 128, 128 */
#define Blue            0x001F      /*   0,   0, 255 */
#define Green           0x07E0      /*   0, 255,   0 */
#define Cyan            0x07FF      /*   0, 255, 255 */
#define Red             0xF800      /* 255,   0,   0 */
#define Magenta         0xF81F      /* 255,   0, 255 */
#define Yellow          0xFFE0      /* 255, 255, 0   */
#define White           0xFFFF      /* 255, 255, 255 */


#define PIN_RESET	(1 << 7)
#define PIN_EN		(1 << 19)
#define PIN_LE		(1 << 20)
#define PIN_DIR		(1 << 21)
#define PIN_CS    (1 << 22)
#define PIN_RS		(1 << 23)
#define PIN_WR		(1 << 24)
#define PIN_RD		(1 << 25)   

/* pin RESET setting*/
#define LCD_RESET(x)	((x) ? (LPC_GPIO0->FIOSET = PIN_RESET) : (LPC_GPIO0->FIOCLR = PIN_RESET));
/* Pin EN setting to 0 or 1                                                   */
#define LCD_EN(x)   ((x) ? (LPC_GPIO0->FIOSET = PIN_EN) : (LPC_GPIO0->FIOCLR = PIN_EN));
/* Pin LE setting to 0 or 1                                                   */
#define LCD_LE(x)   ((x) ? (LPC_GPIO0->FIOSET = PIN_LE) : (LPC_GPIO0->FIOCLR = PIN_LE));
/* Pin DIR setting to 0 or 1                                                   */
#define LCD_DIR(x)   ((x) ? (LPC_GPIO0->FIOSET = PIN_DIR) : (LPC_GPIO0->FIOCLR = PIN_DIR));
/* Pin CS setting to 0 or 1                                                   */
#define LCD_CS(x)   ((x) ? (LPC_GPIO0->FIOSET = PIN_CS) : (LPC_GPIO0->FIOCLR = PIN_CS));
/* Pin RS setting to 0 or 1                                                   */
#define LCD_RS(x)   ((x) ? (LPC_GPIO0->FIOSET = PIN_RS) : (LPC_GPIO0->FIOCLR = PIN_RS));
/* Pin WR setting to 0 or 1                                                   */
#define LCD_WR(x)   ((x) ? (LPC_GPIO0->FIOSET = PIN_WR) : (LPC_GPIO0->FIOCLR = PIN_WR));
/* Pin RD setting to 0 or 1                                                   */
#define LCD_RD(x)   ((x) ? (LPC_GPIO0->FIOSET = PIN_RD) : (LPC_GPIO0->FIOCLR = PIN_RD));
 

/*********************************************************************************************************
** 底层函数（偶尔供外部调用）
*********************************************************************************************************/

void LCD_SetCursor(uint8_t Xpos, uint16_t Ypos);
 void delay (int cnt);
void LCD_Init           (void);
void LCD_WindowMax (unsigned int x,unsigned int y,unsigned int x_end,unsigned int y_end);
void LCD_Clear          (unsigned short color);
void LCD_DrawChar (unsigned int x, unsigned int y, unsigned char c,uint16_t Text_Color,uint16_t Back_Color) ;
void LCD_DisplayChar (unsigned int x, unsigned int y, unsigned char c,uint8_t size,uint16_t Text_Color,uint16_t Back_Color) ;
void LCD_DrawChar32x32 (unsigned int x, unsigned int y, unsigned char c,uint16_t Text_Color,uint16_t Back_Color); 
void LCD_DisplayString (unsigned int x, unsigned int y, unsigned char *s,uint8_t size,uint16_t Text_Color,uint16_t Back_Color);
void LCD_Bargraph       (unsigned int x, unsigned int y, unsigned int w, unsigned int h, unsigned int val);
void LCD_Bitmap         (unsigned int x, unsigned int y, unsigned int w, unsigned int h, unsigned char *bitmap);
void LCD_Bmp            (unsigned int x, unsigned int y, unsigned int w, unsigned int h, unsigned char *bmp);
void Cube(uint16_t x,uint16_t y,uint16_t w,uint16_t h,uint16_t color);
void LCD_DrawLine(uint16_t xsta, uint16_t ysta, uint16_t xend, uint16_t yend,uint16_t POINT_COLOR);
void LCD_DrawRectangle(uint16_t xsta, uint16_t ysta, uint16_t xend, uint16_t yend,uint16_t POINT_COLOR);
void LCD_DrawPoint (uint16_t x,uint16_t y ,uint16_t Color) ;
void Draw_Circle(uint8_t x0,uint16_t y0,uint8_t r,uint16_t Color);//画圆
void LCD_DisplayAsciiStringCust(uint8_t x,uint16_t y,char *c,uint8_t size,uint16_t Text_Color,uint16_t Back_Color);
void LCD_ShowHzString(uint16_t x0, uint16_t y0, uint8_t *pcStr, uint8_t size,uint16_t PenColor, uint16_t BackColor);
void LCD_DisplayHZString (unsigned int x, unsigned int y, unsigned char *s,uint8_t size,uint16_t Text_Color,uint16_t Back_Color);
void LCD_DisplayAsciiString (unsigned int x, unsigned int y, unsigned char *s,uint8_t size,uint16_t Text_Color,uint16_t Back_Color) ;
#endif 

