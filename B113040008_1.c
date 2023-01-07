#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	float base, height; //宣告單精度浮點數 
	
	printf("請輸入三角形的底邊長度 : ");
	scanf("%f", &base); //使用%f將資料儲存於base位址 
	printf("請輸入三角形的高度 : ");
	scanf("%f", &height); //使用%f將資料儲存於height位址 
	
	printf("三角形的面積為 : %f", base*height/2); //輸出最終結果, %f預設保留小數點後六位  
	
	return 0;
}
