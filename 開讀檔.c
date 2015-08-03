#include <stdio.h>

int main(){
     
FILE *fPtr;
int a;
char data[100]="\0";
fPtr=fopen("test.txt","r+");
if ( fPtr ==NULL ) { printf("開讀檔失敗!"); } /* 處裡開讀檔失敗的情形 */
for(a=0;a<100;a++){
    fscanf(fPtr,"%c",&data[a]); /* 讀入100個字元到 data[100] */
    printf("%c",data[a]) ; }
 fclose(fPtr);
}
