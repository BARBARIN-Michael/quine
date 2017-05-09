#include <stdio.h>
//First comm
char *a="#include <stdio.h>%c%c%cFirst comm%cchar *a=%c%s%c;%cint main(){%c*Second comm*%cprintf(a, 10, '/', '/', 10, 34, a, 34, 10, '/', '/', 10, 10); return 0;}%cvoid secondfunction(){}%c";
int main(){/*Second comm*/printf(a, 10, '/', '/', 10, 34, a, 34, 10, '/', '/', 10, 10); return 0;}
void secondfunction(){}
