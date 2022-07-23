#include<stdio.h>
void F_P_data(int PL[],int PR[],int PC[] );

void main(){
    int i;
int PR[i],PL[i],PC[i];
printf("enter the array\n");

for(i=0;i<50;i++)
{
scanf("%d",&PR[i]);
printf("PL time=%d PL data=%d\n",PR[i],i);
}
for(i=0;i<50;i++)
{
scanf("%d",&PL[i]);
printf("PL time=%d PL data=%d\n",PL[i],i);
}
for(i=0;i<50;i++)
{
scanf("%d",&PC[i]);
printf("PL time=%d PL data=%d\n",PC[i]);
}

F_P_data(PL,PR,PC);

}
void F_P_data(int PL[50],int PR[50],int PC[50] )
{
    int data;
for(int i=0;i<50;i++)
{
    data=PR[i+0];
    data=PL[i+5];
    data=PC[i+10];

}





  return F_P_data;
}







