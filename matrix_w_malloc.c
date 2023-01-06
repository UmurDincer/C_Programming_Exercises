#include<stdio.h>
#include"cumur.h"
#include<stdlib.h>

int main()
{
	size_t row, col;
	int **pd;
	size_t i;
	printf("matrisin satir ve sutun sayisini giriniz: ");
	scanf("%zu%zu", &row, &col);
	printf("%d satir ve %d sutunluk bir matris olusturuluyor.\n", row, col);
	
	randomize();
	
	if((pd =(int **)malloc(row * sizeof(int*))) == NULL){
		fprintf(stderr, "bellek yetersiz\n");
		return 1;
	}	
	for(i = 0; i < row; ++i){
		if((pd[i] = (int*)malloc(col * sizeof(int))) == NULL){
			fprintf(stderr, "bellek yetersiz\n");
			return 2;
		}
	}
	size_t k;
	for(i = 0; i < row; ++i){
		for(k = 0; k < col; ++k){
			pd[i][k] = rand() % 10;
		}
	}
	
	for(i = 0; i < row; ++i){
		for(k = 0; k < col; ++k){
			printf("%d ", pd[i][k]);
		}
		printf("\n");
	}
	dline();
//  matrisin satirlarý tek bir bellek bloðunda deðil
//  bu sebeple :
//	int *ptr = &pd[0][0];
//	int n = row * col;
//	while (n--){
//		printf("%d "i *ptr++);
//		_getch();
//	}
// yukarýdaki kod tanýmsýz davranýþ (UB).
	for(i = 0; i < row; ++i){
			free(pd[i]);
		}
	free(pd);
}
