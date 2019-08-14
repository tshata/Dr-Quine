#include <stdio.h>
int main(){
char*s="#include <stdio.h>%cint main(){%cchar*s=%c%s%c;%cprintf(s,10,10,34,s,34,10);return 0;}";
printf(s,10,10,34,s,34,10);return 0;}


/*int printf(char*f,...);int main(){char*s="int printf(char*f,...);int main(){char*s=%c%s%c;printf(s,34,s,34);}";printf(s,34,s,34);} */