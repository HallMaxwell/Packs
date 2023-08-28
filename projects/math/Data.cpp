#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    char Drr;
    printf("What would you like to do?\n<A-solve equations;\nB-statistical data;\nC-find chemical element information;\nD-Example Query the number of common hooks.>\n");  
    scanf("%s",&Drr);
    if(Drr=='A')
    {
        char Mac2,Choice,Fra;
        float Mac;
        int m,n;
        float Ar,Ar1,Ar2,Ar3,Ar4,Ar5,Ar6,Ar7,Ar8,Ar9,Ar10,Ar11;
        float Arr[7]={Ar,Ar1,Ar2,Ar3,Ar4,Ar5};
        float Brr[7]={Ar6,Ar7,Ar8,Ar9,Ar10,Ar11};
        float None[7]={};
        float Br,Br1,Br2,Br3,Br4,Br5,Br6,Br7;
        float Max,Max1,Max2,Max3,Ans,Ans1,Sel,Sel1;
        while(1)
        {
            printf("We name the first Unknown Number 'Mac'.\n");
            printf("[");
            for(int e=0;e<=10;e++)
            {
                Sleep(300);
                printf(".");
            }
            printf("]\n");
            printf("We name the second Unknown Number 'Mac2'.\n");
            printf("[");
            for(int e=0;e<=10;e++)
            {
                Sleep(300);
                printf(".");
            }
            printf("]\n");
            printf("Is there the 'Mac2'?<T/F>\n");
            scanf("%s",&Mac2);
            if(Mac2=='F')
            {
                while(1)
                {
                    for(int a=1;a<=3;a++)
                    {
                        printf("Enter the known Number(on equals sign's left)<0>\n");
                        scanf("%f",&Arr[a]);
                    }
                    for(int d=4;d<=6;d++)
                    {
                        printf("Enter the known Number(on equals sign's right)<0>\n");
                        scanf("%f",&Arr[d]);
                    }
                    if(Arr==None)
                    {
                        printf("Check the equation\n");
                        printf("         be working out:\n");
                        printf("[");
                        for(int b=0;b<=24;b++)
                        {
                            Sleep(300);
                            printf(".");
                        }
                        printf("]\n");
                    }
                    else break;
                }
                while(1)
                {
                    printf("Enter the coefficient of the unknown Number(on equals sign's left)<0>\n");
                    scanf("%f",&Br);
                    printf("Enter the coefficient of the unknown Number(on equals sign's right)<0>\n");
                    scanf("%f",&Br1);
                    if((Br==0)&&(Br1==0))
                    {
                        printf("Check the equation\n");
                        printf("         be working out:\n");
                        printf("[");
                        for(int c=0;c<=24;c++)
                        {
                            Sleep(300);
                            printf(".");
                        }
                        printf("]\n");
                    }
                    else break;
                }
                Arr[1]=Arr[1]*(-1);
                Arr[2]=Arr[2]*(-1);
                Arr[3]=Arr[3]*(-1);
                Max=Arr[1]+Arr[2]+Arr[3]+Arr[4]+Arr[5]+Arr[6];
                Br1=Br1*(-1);
                Max1=Br1+Br;
                if(Max1==0)
                {
                    printf("The equation is meaningless.\n");
                }
                else
                {
                    Ans=Max/Max1; 
                    printf("Mac ");
                    printf("= ");
                    printf("%f\n",Ans);
                }
                printf("Do you want to make another equation?<T/F>\n");
                scanf("%s",&Choice);
                if(Choice=='F')
                {
                    system("pause");
                    return 0;
                }
            }
            if(Mac2=='T')
            {
                while(1)
                {
                    printf("The equation 1.\n");
                    for(int a=1;a<=3;a++)
                    {
                        printf("Enter the known Number(on equals sign's left)<0>\n");
                        scanf("%f",&Arr[a]);
                    }
                    for(int d=4;d<=6;d++)
                    {
                        printf("Enter the known Number(on equals sign's right)<0>\n");
                        scanf("%f",&Arr[d]);
                    }
                    if(Arr==None)
                    {
                        printf("Check the equation\n");
                        printf("         be working out:\n");
                        printf("[");
                        for(int b=0;b<=24;b++)
                        {
                            Sleep(300);
                            printf(".");
                        }
                            printf("]\n");
                    }
                    else break;
                }
                while(1)
                {
                    printf("Enter the coefficient of the Mac(on equals sign's left)<0>\n");
                    scanf("%f",&Br);
                    printf("Enter the coefficient of the Mac(on equals sign's right)<0>\n");
                    scanf("%f",&Br1);
                    printf("Enter the coefficient of the Mac2(on equals sign's left)<0>\n");
                    scanf("%f",&Br2);
                    printf("Enter the coefficient of the Mac2(on equals sign's right)<0>\n");
                    scanf("%f",&Br3);
                    if(((Br2==0)&&(Br3==0))||((Br==0)&&(Br1==0)))
                    {
                        printf("Check the equation\n");
                        printf("         be working out:\n");
                        printf("[");
                        for(int c=0;c<=24;c++)
                        {
                            Sleep(300);
                            printf(".");
                        }
                        printf("]\n");
                    }
                    else break;
                }
                Arr[1]=Arr[1]*(-1);
                Arr[2]=Arr[2]*(-1);
                Arr[3]=Arr[3]*(-1);
                Br=Br*(-1);
                Max1=Br+Br1;
                Br3=Br3*(-1);
                Max=Br3+Br2;
                Ans=(Arr[1]+Arr[2]+Arr[3]+Arr[4]+Arr[5]+Arr[6]+(Max1*Mac))/Max; 
                while(1)
                {
                    printf("The equation 2.\n");
                    for(int a=1;a<=3;a++)
                    {
                        printf("Enter the known Number(on equals sign's left)<0>\n");
                        scanf("%f",&Brr[a]);
                    }
                    for(int d=4;d<=6;d++)
                    {
                        printf("Enter the known Number(on equals sign's right)<0>\n");
                        scanf("%f",&Brr[d]);
                    }
                    if(Brr==None)
                    {
                        printf("Check the equation\n");
                        printf("         be working out:\n");
                        printf("[");
                        for(int b=0;b<=24;b++)
                        {
                            Sleep(300);
                            printf(".");
                        }
                            printf("]\n");
                    }
                    else break;
                }
                while(1)
                {
                    printf("Enter the coefficient of the Mac(on equals sign's left)<0>\n");
                    scanf("%f",&Br4);
                    printf("Enter the coefficient of the Mac(on equals sign's right)<0>\n");
                    scanf("%f",&Br5);
                    printf("Enter the coefficient of the Mac2(on equals sign's left)<0>\n");
                    scanf("%f",&Br6);
                    printf("Enter the coefficient of the Mac2(on equals sign's right)<0>\n");
                    scanf("%f",&Br7);
                    if(((Br4==0)&&(Br5==0))||((Br6==0)&&(Br7==0)))
                    {
                        printf("Check the equation\n");
                        printf("         be working out:\n");
                        printf("[");
                        for(int c=0;c<=24;c++)
                        {
                            Sleep(300);
                            printf(".");
                        }
                        printf("]\n");
                    }
                    else break;
                }
                Brr[1]=Brr[1]*(-1);
                Brr[2]=Brr[2]*(-1);
                Brr[3]=Brr[3]*(-1);
                Br4=Br4*(-1);
                Max2=Br4+Br5;
                Br7=Br7*(-1);
                Max3=Br6+Br7;
                Ans=(Max*Brr[1]+Max*Brr[2]+Max*Brr[3]+Max*Brr[4]+Max*Brr[5]+Max*Brr[6]-Max3*Arr[1]-Max3*Arr[2]-Max3*Arr[3]-Max3*Arr[4]-Max3*Arr[5]-Max3*Arr[6])/(Max3*Max1-Max*Max2);
                Ans1=(Ans*Max-Arr[1]-Arr[2]-Arr[3]-Arr[4]-Arr[5]-Arr[6])/Max1; 
                if(((Max3*Max1-Max*Max2)==0)||(Max1==0))
                {
                    printf("Please check the equation correctly.\n");
                    printf("         be working out:\n");
                    printf("[");
                    for(int b=0;b<=24;b++)
                    {
                        Sleep(300);
                        printf(".");
                    }
                    printf("]\n");
                }
                else
                {
                    printf("The equation only have aresult:\nMac ");
                    printf("= ");
                    printf("%f\n",Ans);
                    printf("Mac2 ");
                    printf("= ");
                    printf("%f\n",Ans1);
                    printf("Turn into fraction.<T/F>\n");
                    scanf("%s",&Fra);
                    if(Fra=='T')
                    {
                        m/n==Ans;
                        m=0;
                        n=1;
                        for(int u=1;u<=100;u++)
                        {
                            m++;
                            for(int z=1;z<=100;z++)
                            {

                            }
                        }
                    }
                }
                printf("Do you want to make another equation?<T/F>\n");
                scanf("%s",&Choice);
                if(Choice=='F')
                {
                    system("pause");
                    return 0;
                }
            }
        }
    }
    if(Drr=='B')
    {
        int Mac,Mac4,Ans;
        float Mac5,Mac7,Mac8,Max,Min,Mac3;
        Mac7=0;
        while(1)
        {
            printf("Please determine the data range.\n");
            scanf("%d",&Mac);
            float Arr[Mac+1]={};
            Mac4=Mac;
            printf("You want to group the data within a certain distance?\n");
            scanf("%f",&Mac5);
            for(int Mac2=1;Mac2<=Mac;Mac2++)
            {
                printf("Enter the number.(%d)\n",Mac4);
                Mac4=Mac4-1;
                scanf("%f",&Mac3);
                Arr[Mac2]=Mac3;
                if(Mac2!=1)
                {
                    if(Mac7>=Mac3)
                    {
                        Max=Mac7;
                        Mac7=Max;
                    }
                    else
                    {
                        Mac7=Mac3;
                    } 
                    if(Mac8<=Mac3)
                    {
                        Min=Mac8;
                        Mac8=Min;
                    }
                    else
                    {
                        Mac8=Mac3;
                    }
                }
                else
                {
                    Mac7=Mac3;
                    Mac8=Mac3;
                }
            }
            Ans=int((Max-Min)/Mac5+1);
            if(Ans<=0)
            {
                printf("Have gone wrong, please check the data.\n");
                system("pause");
                return 0;
            }
            int Brr[Ans+1]={};
            if(Ans>0)
            {
                printf("The distance of teams is %f .\n",Mac5);
                printf("Here are %d teams.\n",Ans);
                for(int j=1;j<=Mac;j++)
                {
                    for(int j1=1;j1<=Ans;j1++)
                    {
                        if((Arr[j]>(Min-0.5+Mac5*(j1-1)))&&(Arr[j]<(Min-0.5+Mac5*j1)))
                        { 
                            Brr[j1]++;
                        }
                    }
                }
                for(int v=1;v<=Ans;v++)
                {
                    printf("%f ~ %f\n",(Min-0.5+Mac5*(v-1)),(Min-0.5+Mac5*v));
                    printf("data number:    %d\n",Brr[v]);
                    float Ans1=(float)Brr[v]/Mac;
                    printf("data frequency: %f%%\n\n",Ans1*100);
                }
                break; 
            }
        }
            system("pause");
            return 0; 
    }
    if(Drr=='C')
    {
        char A;
        float b,c;
        while(1)
        {
        printf("A chemical element is a group of atoms that have the same nuclear charge (the number of protons in the nucleus). Philosophically, an element is the result of a qualitative change in the number of protons in an atom.Common elements are hydrogen, nitrogen and carbon. As of 2019, a total of 118 elements have been discovered, of which 94 are found on Earth. Elements with atomic numbers greater than 83 (bismuth and beyond) have unstable nuclei that decay. The 43rd and 61st elements (technetium and promethium) have no stable isotopes and decay. The heaviest element that exists in nature is neptunium 93.\n");
        printf("[");
        for(int b=0;b<=25;b++)
            {
            Sleep(300);
            printf(".");
        }
        printf("]\n");
        printf("Enter the chemical element you want to find out\n");
        scanf("%s",&A);
        if(A=='Sb')
        {
            printf("Antimony\n");
            printf("density   6.697 g/cm³\n");
            float Ans=6.697;
            printf("Please enter the mass/volume of the element and we will calculate the corresponding volume/mass\n");
            scanf("%f",&b);
        
            printf("volume/mass   ");
            printf("%f",c);
            }
        if(A=='H')
        {
           printf("Hydrogenium\n");
            printf("density   0.07 g/cm³\n");
            float Ans=6.697;
            printf("Please enter the mass/volume of the element and we will calculate the corresponding volume/mass\n");
            scanf("%f",&b);
            
            printf("volume/mass   ");
            printf("%f",c); 
        }
        }
    }
    if(Drr=='D')
    {
        int a, b, c;
        for (a = 1; a < 100; a++)
        for (b = 1; b < 100; b++)
        for (c = 1; c < 100; c++)
        if (a < b && a * a + b * b == c * c)
        cout << a << " " << b << " " << c << endl;
        system("pause");
        return 0;
    }
}
    
 