#ifndef __BMP_H
#define __BMP_H

typedef struct BMP
{
	char* bmpname;			//保存bmp图片的名称
	int size;				//文件的总大小
	int width;				//文件的宽
	int height; 			//文件的高
	short bpp;				//色深
	char* data; 			//像素数组的首地址
}BMP;

void lcd_init();
void lcd_point(int x, int y, unsigned int color);
void lcd_close();
BMP get_bmp_info(char* bmpname);
void lcd_draw_bmp(char* bmpname, int x, int y);

#endif

