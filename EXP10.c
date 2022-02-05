// 16010121070 Devesh jain Experiment 10//

#include<stdio.h>
#include<string.h>
int main()
{
    char input[100];
    printf("\n\nEnter Input Value: ");
    scanf("%s",input);
    int a=0,b=0,i,mid=0;
    int cnt=0;
    char output[100];

    for( i=0;i<strlen(input);i++)
    {
        char ch=input[i];
        if(ch=='A')
        {
            if(a==0)
            {
                a=1;
                output[cnt]='C';
                cnt++;
            }
            else
            {
                a=0;
                if(mid==0)
                {
                    mid=1;
                    output[cnt]='C';
                    cnt++;
                }
                else
                {
                    mid=0;
                    output[cnt]='D';
                    cnt++;
                }
            }
        }
        else if(ch=='B')
        {
            if(b==1)
            {
                b=0;
                output[cnt]='D';
                cnt++;
            }
            else
            {
                b=1;
                if(mid==0)
                {
                    mid=1;
                    output[cnt]='C';
                    cnt++;
                }
                else
                {
                    mid=0;
                    output[cnt]='D';
                    cnt++;
                }
            }
        }
    }
    printf("\nOutput : %s\n\n",output);
    return 0;
}
