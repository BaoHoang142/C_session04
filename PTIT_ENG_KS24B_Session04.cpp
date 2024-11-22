#include <stdio.h>

int main(){
	//1. Nhap vao mot so nguyen va kiem tra so nguyen do co phai so chan hay khong
	//output: chan --> Day la so chan, le: khong xu ly gi
	//output: chan --> Day la so chan, le: day la so le
	int number;
	printf("Nhap vao mot so nguyen:");
	scanf("%d",&number);
	if(number%2==0){
		printf("%d la so chan\n",number);	
	}else{
		printf("%d la so le\n",number);
	}
	//2. In ra so du trong phep chia 3
	/*
		1 so chia 3 co 3 so du: du 0, du 1, du 2
			--> 3 truong hop xay ra
			--> tuong ung 3 nhanh
			--> su dung 3 menh de: 1 if, 1 else, 1 else-if
	*/
	if(number%3==0){
		printf("%d chia het cho 3\n",number);
	}else if(number%3==1){
		printf("%d chia 3 du 1\n",number);
	}else{
		printf("%d chia 3 du 2\n",number);
	}
	//3. In ra so du trong phep chia 5: 5 truong hop --> 5 nhanh -> 5 menh de: 1 if, 1 else, 3 else-if
	//4. Tinh ve xe bus
	const float TICKET = 10000;
	int age;
	printf("Nhap vao tuoi cua ban:");
	scanf("%d",&age);
	if(age<6 || age>=60){
		printf("Gia xe bus cua ban la: %.0f\n",0);
	}else if(age<18){
		printf("Gia xe bus cua ban la: %.0f\n",TICKET*0.5);
	}else{
		printf("Gia xe bus cua ban la: %.0f\n",TICKET);
	}
	
	//5. Su dung cau lenh switch...case in ra so du trong phep chia 5
	switch(number%5){
		case 0:
			printf("%d chia het cho 5\n",number);
			break;
		case 1:
			printf("%d chia 5 du 1\n",number);
			break;
		case 2:
			printf("%d chia 5 du 2\n",number);
			break;
		case 3:
			printf("%d chia 5 du 3\n",number);
			break;
		default:
			printf("%d chia 5 du 4\n",number);
	}
	//Kiem tra number la so chan hay so le
	printf("%d la so %s\n",number,(number%2==0)?"chan":"le");	
}
