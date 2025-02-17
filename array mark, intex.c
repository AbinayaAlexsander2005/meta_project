#include<stdio.h>
int main(){
int i;
int a_mark[10];
for(i=0;i<10;i++){
scanf("%d",&a_mark[i]);
}
for(i=0;i<10;i++){
printf("%d:%d\t",a_mark[i],i);
}
return 0;
}
