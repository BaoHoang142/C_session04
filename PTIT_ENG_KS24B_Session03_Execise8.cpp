#include <stdio.h>
int main(){
	//B1. Nhap vao so co 4 chu so
	int number;
	printf("Nhap vao so nguyen co 4 chu so:");
	scanf("%d",&number);
	//B2. Tach cac chu so hang nghin, tram, chuc, dvi
	int thousand = number/1000;
	int hundred = (number%1000)/100;
	int dozen = (number%100)/10;
	int unit = number%10;
	//B3. Tinh so nghich dao va in ra
	int reveredNumber = unit*1000 + dozen*100 + hundred*10 + thousand;
	printf("So dao nguoc cua %d la %d\n",number,reveredNumber);
}
