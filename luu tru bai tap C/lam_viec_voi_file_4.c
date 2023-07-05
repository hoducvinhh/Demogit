/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *f = fopen("nhiphan.bin","wb");
    int n[10];
    if(f==NULL){
        printf("LOI TAO FILE ");
        return;
    }
    for(int i=0;i<5;i++){
        scanf("%d",&n[i]);
        fwrite(&n[i],sizeof(int),1,f);
    }
    fclose(f);
}
*/
///*
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *f = fopen("nhiphan.bin","rb");
    int n[10];
    if(f==NULL){
        printf("LOI TAO FILE ");
        return;
    }
    for(int i=0;i<5;i++){
        fread(&n[i],sizeof(int),1,f);
    }
    for(int i=0;i<5;i++){
        printf("%d ",n[i]);
    }
    fclose(f);
}
//*/
