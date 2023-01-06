#include<stdio.h>

int main()
{
	char names[10][20] = {"Murat", "Nedime", "Suleyman", "Necati",
	"Gizem", "Ferda", "Nurettin", "Aleyna", "Gurbuz", "Selami"};
	
	int i;
	
	for(i = 0; i < 10; ++i){
		puts(names[i]);
	}

}
