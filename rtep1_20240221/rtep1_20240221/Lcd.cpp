#include <stdio.h>
#include <math.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "Lcd.h"

class Lcd {
	public:
		int* plcd = NULL;
		int lcd_fd = -1;
	public:
		Lcd(){
		
		}
		void lcd_init(){
			
		}
		void lcd_close() {

		}
		BMP get_bmp_info(char* bmpname) {

		}
		//void lcd_point(int x, int y, unsigned int color) {}
		void lcd_draw_bmp(char* bmpname, int x, int y) {

		}
};