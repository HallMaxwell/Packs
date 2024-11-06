#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Mac4, Ans, Arr;
    float Mac5, Mac7, Max, Min;
    char n;
    Ans = 0;
    Mac7=Max=Min = 0;
    FILE* pFile = fopen("data_statistics.txt", "w");
    while (1)
    {
        float* Crr = NULL;
        printf("Please choose your language.\n�������� or English <c or e>? : ");
        n=getchar();
        getchar();
        if (n == 'e')
        {
            printf("Please determine the data range.\n");
            fprintf(pFile, "Please determine the data range.\n");
        }
        else
        {
            printf("����������������\n");
            fprintf(pFile, "����������������\n");
        }
        fflush(pFile);
        scanf("%d", &Arr);
        fprintf(pFile, "%d\n",Arr);
        fflush(pFile);
        Crr = (float*)malloc(sizeof(float) * Arr);
        if (Crr == NULL)
        {
            if (n == 'e')
            {
                printf("Memory acquisition failure.\n");
                fprintf(pFile, "Memory acquisition failure.\n");
            }
            else
            {
                printf("�ڴ��ȡʧ�ܡ�\n");
                fprintf(pFile, "�ڴ��ȡʧ�ܡ�\n");
            }
            system("pause");
            fclose(pFile);
            return 0;
        }
        Mac4 = Arr;
        if (n == 'e')
        {
            printf("You want to group the data within a certain distance?\n");
            fprintf(pFile, "You want to group the data within a certain distance?\n");
        }
        else
        {
            printf("�����ö������Ϊ���ݷ��飿\n");
            fprintf(pFile, "�����ö������Ϊ���ݷ��飿\n");
        }
        fflush(pFile);
        scanf("%f", &Mac5);
        fprintf(pFile, "%.1f\n", Mac5);
        fflush(pFile);
        for (int Mac2 = 1; Mac2 <= Arr; Mac2++)
        {
            if (n == 'e')
            {
                printf("Enter the number.(%d)\n", Mac4);
                fprintf(pFile, "Enter the number.(%d)\n", Mac4);
            }
            else
            {
                printf("�������ݡ�(%d)\n", Mac4);
                fprintf(pFile, "�������ݡ�(%d)\n", Mac4);
            }
            fflush(pFile);
            --Mac4;
            scanf("%f", Crr + Mac2 - 1);
            fprintf(pFile, "%.1f\n", Crr[Mac2-1]);
            fflush(pFile);
            if (Mac2 != 1)
            {
                
                if (Crr[Mac2-1] < Min)
                    Min = Crr[Mac2 - 1];
                else if (Crr[Mac2-1] > Max)
                    Max = Crr[Mac2 - 1];
            }
            else
            Max = Min = Crr[Mac2-1];
        }
        Ans = (int)((Max - Min) / Mac5)+1;
        if (Ans <= 0 || Mac5 == 0)
        {
            if (n == 'e')
            {
                printf("Have gone wrong, please check the data.\n");
                fprintf(pFile, "Have gone wrong, please check the data.\n");
            }
            else
            {
                printf("�����ˣ��������ݡ�\n");
                fprintf(pFile, "�����ˣ��������ݡ�\n");
            }
            free(Crr);
            system("pause");
            fclose(pFile);
            return 0;
        }
        int* Brr = NULL;
        Brr = (int*)malloc(sizeof(int) * Ans);
        if (Brr == NULL)
        {
            if (n == 'e')
            {
                printf("Memory acquisition failure.\n");
                fprintf(pFile, "Memory acquisition failure.\n");
            }
            else
            {
                printf("�ڴ��ȡʧ�ܡ�\n");
                fprintf(pFile, "�ڴ��ȡʧ�ܡ�\n");
            }
            system("pause");
            fclose(pFile);
            return 0;
        }
        if (n == 'e')
        {
            printf("The distance of teams is %.1f .\n", Mac5);
            fprintf(pFile, "The distance of teams is %.1f .\n", Mac5);
            printf("Here are %d team(s).\n", Ans);
            fprintf(pFile, "Here are %d team(s).\n", Ans);
        }
        else
        {
            printf("���Ϊ %.1f ��\n", Mac5);
            fprintf(pFile, "���Ϊ %.1f ��\n", Mac5);
            printf("��Ϊ %d �顣\n", Ans);
            fprintf(pFile, "��Ϊ %d �顣\n", Ans);
        }
        fflush(pFile);
        for (int j1 = 1; j1 <= Ans; j1++)
            Brr[j1 - 1] = 0;
        for (int j = 1; j <= Arr; j++)
        {
            for (int j1 = 1; j1 <= Ans; j1++)
            {
                if ((Crr[j-1]) > (Min - 0.5 + Mac5 * (j1 - 1)) && (Crr[j - 1]) < (Min - 0.5 + Mac5 * j1))
                    Brr[j1 - 1]++;
            }
        }
        for (int v = 1; v <= Ans; v++)
        {
            printf("%.1f ~ %.1f\n", (Min - 0.5 + Mac5 * (v - 1)), (Min - 0.5 + Mac5 * v));
            fprintf(pFile, "%.1f ~ %.1f\n", (Min - 0.5 + Mac5 * (v - 1)), (Min - 0.5 + Mac5 * v));
            if (n == 'e')
            {
                printf("data number:    %d\n", Brr[v - 1]);
                fprintf(pFile, "data number:    %d\n", Brr[v - 1]);
            }
            else
            {
                printf("Ƶ��Ϊ��    %d\n", Brr[v - 1]);
                fprintf(pFile, "Ƶ��Ϊ��    %d\n", Brr[v - 1]);
            }
            float Ans1 = ((float)(Brr[v - 1])) / Arr;
            if (n == 'e')
            {
                printf("data frequency: %.2f%%\n\n", Ans1 * 100);
                fprintf(pFile, "data frequency: %.2f%%\n\n", Ans1 * 100);
            }
            else
            {
                printf("Ƶ��Ϊ�� %.2f%%\n\n", Ans1 * 100);
                fprintf(pFile, "Ƶ��Ϊ�� %.2f%%\n\n", Ans1 * 100);

            }
            fflush(pFile);
        }
        break;
        free(Crr);
        free(Brr);
    }
    system("pause");
    fclose(pFile);
    return 0;
}