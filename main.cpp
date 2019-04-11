//
//  main.cpp
//  homework8
//
//  Created by 劉世翔 on 2019/4/12.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include "stdio.h"
#include "stdlib.h"
int main()
{
    int n ,a ;
    printf("想知道哪個範圍的質數");
    scanf("%d",&a);
    for(int i=2;i<=a;i++)
    {
        n = 0;
        for(int j=1;j<=a;j++)
            if(i%j==0)
                n++;
        if(n==2)
            printf("%d\t",i);
    }
    printf("\n");
    system("pause");
    return 0;
}
