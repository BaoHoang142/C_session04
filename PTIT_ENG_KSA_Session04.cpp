#include <stdio.h>
int main(){
	//1. Nhap vao 1 so nguyen va kiem tra so nguyen do co phai so chan khong
	//- Chan: "Day la so chan" - Khong chan: khong thuc hien gi
	//-B1: nhap vao so nguyen
	int number;
	printf("Nhap vao mot so nguyen:");
	scanf("%d",&number);
	//-B2: Su dung if kiem tra so chan
	if(number%2==0){
		printf("Day la so chan\n");
	}
	//2. Kiem tra so chan le
	if(number%2==0){
		printf("Day la so chan\n");
	}else{
		printf("Day la so le\n");
	}
	//3. In ra so du trong phep chia 3
	/*
		Chia 3: du 0, du 1, du 2
		--> 3 truong hop --> 3 nhanh --> 3 menh de: 1 if, 1 else, 1 else if
	*/
	if(number%3==0){
		printf("%d chia 3 du 0\n",number);
	}else if(number%3==1){
		printf("%d chia 3 du 1\n",number);
	}else{
		printf("%d chia 3 du 2\n",number);
	}
	//4. In ra so du trong phep chia 5
	//5. Bai toan tinh ve xe bus
	const float TICKET = 7000;	
	int age;
	printf("Nhap vao tuoi cua ban:");
	scanf("%d",&age);
	if(age<6 || age>=60){
		printf("Ban duoc mien phi ve xe bus!!!\n");
	}else if(age<18){
		printf("Ban duoc giam 50% gia xe bus: %f\n",TICKET*0.5);
	}else{
		printf("Ban phai mua ve xe bus voi gia: %f\n",TICKET);
	}
	//6. Kiem tra so nguyen co chia het cho 3 va 5 khong?
	if(number%3==0 && number%5==0){
		printf("So nguyen chia het ca 3 va 5");
	}else{
		if(number%3==0){
			printf("So nguyen chia het cho 3 va khong chia het cho 5");
		}else if(number%5==0){
			printf("So nguyen chia het cho 5 va khong chia het cho 3");
		}else{
			printf("So nguyen khong chia het cho ca 3 va 5");
		}
	}
	//7. Nhap vao mot so nguyen tu 0 - 9, phien am so do
	int firstNumber;
	printf("\nNhap vao mot so nguyen:");
	scanf("%d",&firstNumber);
	switch(firstNumber){
		case 0:
			printf("Khong");
			break;
		case 1:
			printf("Mot");
			break;
		case 2:
			printf("Hai");
			break;
		case 3:
			printf("Ba");
			break;
		case 4:
			printf("Bon");
			break;
		case 5:
			printf("Nam");
			break;
		case 6:
			printf("Sau");
			break;
		case 7:
			printf("Bay");
			break;
		case 8:
			printf("Tam");
			break;
		default:
			printf("Chin");
	}
	//8. Toan tu 3 ngoi
	int secondNumber = (number>10)?20:50;
	printf("Gia tri bien secondNumber la: %d\n",secondNumber);
	
	
	
	
	
	
	
	
		
}
