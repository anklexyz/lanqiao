//
// Created by 徐彬斌 on 2022/11/7.
//
//数组排序
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[200];
    int n,t;
    scanf("%d",&n);
    int i,j;
    for (i = 0; i < n; ++i)
    {
        scanf("%d",&a[i]);
    }

    for (i = 0; i < n-1; ++i)//控制趟数
    {
        for (j = 0; j < n-1-i; ++j)//控制j和j+1两两比较
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    for(i=0;i<n;++i)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

