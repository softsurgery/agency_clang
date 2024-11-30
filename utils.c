#include <stdio.h>
#include <stdlib.h>
#include "utils.h"


void menu(){
     FILE* f = fopen("menu.txt","r");
     char ch;
	 while(ch!=EOF){
		ch=fgetc(f);
		printf("%c",ch);
	 }
	fclose (f);
}
