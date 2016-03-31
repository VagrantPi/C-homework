#include<stdio.h>
#include <string.h>

main(){
char q[20];
char firstname[20],lastname[10],dash[10];
int i,j,k,lastfag=0,dashfag=0;
scanf("%[^\n]",&q);

for(i=0;i<=strlen(q);i++){
  if(lastfag==1){
    lastname[j]=q[i];
    j+=1;
    if(q[i]==' '){
      break;
    }
  }
  if(q[i]==' '){
    lastfag=1;
  }
  if(dashfag==1){
    dash[k]=q[i];
    k+=1;
    if(q[i]==' '){
      dashfag=0;
    }
  }
  if(q[i]=='-'){
    dashfag=1;
  }
  if((lastfag==0)&&(dashfag==0)){
    firstname[i]=q[i];
  }

}

printf("F %s\n",firstname);
printf("L %s\n",lastname);
printf("D %s\n",dash);
}
