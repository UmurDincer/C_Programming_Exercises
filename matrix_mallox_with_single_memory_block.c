#include<stdio.h>
#include"cumur.h"
#include<stdlib.h>

int main(){

	size_t row, col;
	int *pd;
	size_t i;
	
	randomize();
	
	printf("matrisin satir ve sutun sayisini giriniz: ");
	scanf("%zu%zu", &row, &col);
	printf("%d satir ve %d sutunluk bir matris olusturuluyor.\n", row, col);
	
	
	
	if((pd =(int *)malloc(row * col * sizeof(int))) == NULL){
		fprintf(stderr, "bellek yetersiz\n");
		return 1;
	}	
	size_t k;
	
	for(i = 0; i < row; ++i){
		for(k = 0; k < col; ++k){
			pd[i * col + k] = rand() % 10;
		}
	}
	dline();
	
	for(i = 0; i < row; ++i){
		for(k = 0; k < col; ++k){
			printf("%d ", pd[i * col + k]);
		}
		printf("\n");
	}
	dline();

//bu sefer memory tek bir blok halinde olduðu için
//aþaðýdaki kod tanýmsýz davranýþ olmaktan çýkýyor

	int *ptr = pd;
	int n = row * col;
	while (n--){
		printf("%d ", *ptr++);
		_getch();
	}

	
	free(pd);
	
	
}
