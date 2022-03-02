#include <stdio.h>
#include<stdlib.h>
void use_malloc(int *ptr,int n);
void use_calloc(int *ptr1,int n);
int main()
{
  int n=10,i;
  int choice;
  printf("enter 1:malloc 2:calloc any number:malloc");
  scanf("%d",&choice);
  int *ptr=(int*)malloc(n*sizeof(int));
 int *ptr1=(int*)calloc(n,sizeof(int));
 switch(choice){
     case 1:
     use_malloc(ptr,n);
     break;
     case 2:
     use_calloc(ptr1,n);
     break;
     default:
     use_malloc(ptr,n);
 }
 return 0;
}
void use_malloc(int *ptr,int n){
    int i;
    for(i=0;i<n;i++){
        printf("enter integer:");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("address of element=%p\n",ptr+i);
        printf("%d",*(ptr+i));
    }
    for(i=n-1;i>=0;i--){
        printf("%d",*(ptr+i));
    }
    free(ptr);
}
void use_calloc(int *ptr1,int n){
    int i;
     for(i=0;i<n;i++){
        printf("enter integer:");
        scanf("%d",ptr1+i);
    }
    for(i=0;i<n;i++){
        printf("address of element=%p\n",ptr1+i);
        printf("%d",*(ptr1+i));
    }
    for(i=n-1;i>=0;i--){
        printf("%d",*(ptr1+i));
    }
    free(ptr1);
}
