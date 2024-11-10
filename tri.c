#include <stdio.h>
void affichage(int *t,int k);
void echange(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void affichage(int *t,int k){
 for(int i=0;i<k;i++){
    printf("%d|",t[i]);
 }}
// trouver le plus grand element de tableau 
int *tribulle(int *t,int k){
for(int i=0;i<k;i++){
  for(int j=0;j<k-i-1;j++){
    if(t[j]>t[j+1]){
        echange(&t[j],&t[j+1]);
    }
  }
}return t;
}
// tri par selection trouver le plus petit element de tableau 
int  *triselect(int *t,int k){
    int min;int b;
    int temp;
    for(int i=0;i<k;i++){
        min=t[i];
        for(int j=i+1;j<k;j++){
             if(t[j]<min){
            min=t[j];
            b=j;
         }
         if(j==k-1 && min!=t[i]){
            t[b]=t[i];
            t[i]=min;}
        }
    }
    return t;
}
// tri par insertion 
/*
int *trinserstion(int *t,int k){
    int temp=0;int j;
    for(int i=0;i<k;i++){
        
        for(int v=i;v>=0;v--){
            j=v+1;
            temp=t[j];
         if(temp<t[v]){
            t[j]=t[v];
            t[i]=temp;
            
         }
        }
        
    }
   
    return t;
}


*/

void main(){

int k[]={2,6,3,5,8,4,1};

//int *sorting=tribulle(k,7);



//int *sorting=triselect(k,7);
int *sorting=trinserstion(k,7);
affichage(sorting,7);
}