#include<stdio.h>

int main()
{
        int arry[3][3];
        int i, j;

        for(i=0; i<3; i++)
        {
                for(j=0; j<3; j++)
                {
                        scanf("%d", &arry[i][j]);
                }
        }
        for(i=0; i<3; i++)
        {
                if((arry[i][0] == arry[i][1]) && (arry[i][1] == arry[i][2]))
                {
                        printf("True\n");
                        return;
                }
        }
        for(i=0; i<3; i++)
        {
                if((arry[0][i] == arry[1][i]) && (arry[1][i] == arry[2][i]))
                {
                        printf("True\n");
                        return;
                }
        }
        if((arry[0][0] == arry[1][1]) && (arry[1][1] == arry[2][2]))
        {
                printf("True\n");
                return;
        }
        if((arry[0][2] == arry[1][1]) && (arry[1][1] == arry[2][0]))
        {
                printf("True\n");
                return;
        }
        printf("False\n");
}