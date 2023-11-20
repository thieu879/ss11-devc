#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,j;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	int numbers[n];
	printf("Nhap so gia tri cua phan tu trong  mang:\n");
	for(i=0;i<n;i++){
		printf("numbers[%d]:",i);
		scanf("%d",&numbers[i]);
	}
	do{
		printf("**************MENU******************\n");
		printf("1. In gia tri cac phan tu cua mang\n");
		printf("2. Su dung Insertion Sort sap xep ang giam dan va in ra\n");
		printf("3. Su dung Selection Sort sap xep mang tang dan va in ra\n");
		printf("4. Su dung Bubble Sort sap xep mang giam dan và in ra\n");
		printf("5. Thoat\n");
		int choice;
		printf("vui long lua chon:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("cac gia tri cua phan tu trong mang:");
				for(i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 2:
				for(i=1;i<n;i++){
					int key=numbers[i];
					j=i-1;
					while(j>=0 && numbers[j]<key){
						numbers[j+1]=numbers[j];
						j=j-1;
					}
					numbers[j+1]=key;
				}
				printf("Mang sau sap xep:");
				for(i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 3:
				for(i=0;i<n-1;i++){
					for(j=i+1;j<n;j++){
						if(numbers[i]>numbers[j]){
							int temp=numbers[i];
							numbers[i]=numbers[j];
							numbers[j]=temp;
						}
					}
				}
				printf("Mang sau sap xep:");
				for(i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 4:
				for(i=0;i<n-1;i++){
					for(j=0;j<n-i-1;j++){
						if(numbers[j]<numbers[j+1]){
							int temp = numbers[j];
							numbers[j]=numbers[j+1];
							numbers[j+1]=teemp;
						}
					}
				}
				printf("Mang sau sap xep:");
				for(i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Vui long lua chon:");
		} 
	}while(1==1);
} 
