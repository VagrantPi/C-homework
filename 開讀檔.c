#include <stdio.h>

int main(){
     
FILE *fPtr;
int a;
char data[100]="\0";
fPtr=fopen("test.txt","r+");
if ( fPtr ==NULL ) { printf("�}Ū�ɥ���!"); } /* �B�̶}Ū�ɥ��Ѫ����� */
for(a=0;a<100;a++){
    fscanf(fPtr,"%c",&data[a]); /* Ū�J100�Ӧr���� data[100] */
    printf("%c",data[a]) ; }
 fclose(fPtr);
}
