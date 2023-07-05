
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
     FILE *a;
     a= fopen("vidu.bin","wb");
      if(a==NULL){
        printf("LOI FILE ");
        return ;
      }
      int n=100;
      fwrite(&n,sizeof(n),1,a);
      fclose(a);
}
