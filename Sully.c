#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int i = 5;
char *a="#include <stdlib.h>%c#include <string.h>%c#include <stdio.h>%cint i = %d;%cchar *a=%c%s%c;%cint main(){if(!strcmp(__FILE__, %cSully.c%c))i++; char cmd[255]={0}; char file[]=%cSully_X.c%c; char name[]=%cSully_X%c; file[6]='0' + --i; name[6]='0' + i; FILE *fp; fp=fopen(file, %cw%c); fprintf(fp, a, 10, 10, 10, i, 10, 34, a, 34, 10, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 10); fclose(fp); system(strcat(strcat(strcat(strcat(cmd, %cgcc %c), file), %c -o %c), name)); cmd[0]=0; if (i != 0) system(strcat(strcat(cmd, %c./%c), name));}%c";
int main(){if(!strcmp(__FILE__, "Sully.c"))i++; char cmd[255]={0}; char file[]="Sully_X.c"; char name[]="Sully_X"; file[6]='0' + --i; name[6]='0' + i; FILE *fp; fp=fopen(file, "w"); fprintf(fp, a, 10, 10, 10, i, 10, 34, a, 34, 10, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 10); fclose(fp); system(strcat(strcat(strcat(strcat(cmd, "gcc "), file), " -o "), name)); cmd[0]=0; if (i != 0) system(strcat(strcat(cmd, "./"), name));}
