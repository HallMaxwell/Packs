#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Put5;
    scanf("%d",&Put5);
    while(1)
    {
        
        int Put1,Put2,Put4,Ans1,Put6,Ans3,Inst,Put7,Inst1;
        Ans1=1;
        Put6=1;
        Inst=1;
        Put7=1;
        Inst1=1;
        while(1)
        {
            Put6=Put6*10;
            Ans3=(Put5/Put6);
            if(Ans3<1)
            {
                Put1=Inst;
            }
            Inst++;
        }
        if(Put1<=0)
        {
            printf("Have gone wrong, please check the data.\n");
            system("pause");
            return 0;
        }
        int Put[Put1+1]={};
        int Put3[Put1+1]={};
        int Put4[Put1+1]={};
        int Ans[]={};
        int Ans2[]={};
        while(1)
        {
            
            Put4[Inst1]=(int)(Put5/Put7);
            Put3[Put1-Inst1+1]=Put[Inst1];
            Put7=Put7*10;
            if(Inst1==)
            Inst1++;
            
        }
        while(1)
    {
        int n;
        n=1;
        for(int z=1;z<=n;z++)
        {
            Ans1=Ans1*10;
        }
        Ans[n]=(Put[n]+Put3[n])*Ans1;
        Ans2[n]=0;
        Ans2[n]=Ans2[n]+Ans[n];
        if(n==Put1)
        {
            printf("%d\n",Ans2[n]);
            break;
        }
        n++;
    }
    }
}