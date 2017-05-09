#include <stdio.h>
#define namefile "Grace_kid.c"
#define wr "w"
char *a="#include <stdio.h>%c#define namefile %c%s%c%c#define wr %c%s%c%cchar *a=%c%s%c;%c#define test int main(){/*toto*/FILE *fp; fp=fopen(namefile, wr); fprintf(fp, a, 10, 34, namefile, 34, 10, 34, wr, 34, 10, 34, a, 34, 10, 10, 10);}%ctest%c";
#define test int main(){/*toto*/FILE *fp; fp=fopen(namefile, wr); fprintf(fp, a, 10, 34, namefile, 34, 10, 34, wr, 34, 10, 34, a, 34, 10, 10, 10);}
test
