#include <stdio.h>
#include <iostream>

int main()
{
    int a,b,n;
    a = 0;
    int i = 1;
    while (i < 11)
    {
        a = 5 * i;
        std::cout << (a) << std::endl;
        
        i = i + 1;
    }
    
    std::cin >> n;
    if (n == 7)
    {
        return 0;
    }
    else
    {
        if (n < 7)
        {
            printf("less than 7 ");
        }
        else
        {
            printf("more than 7 ");
        }
        if (n < 10)
        {
            printf("less than 10 ");
        }
        else
        {
            printf("more than 10 ");
        }
        if (n % 2 == 0)
        {
            printf("purely divisible by 2 ");
        }
        else
        {
            printf("not purely divisible by 2 ");
        }
        if (n % 3 == 0)
        {
            printf("purely divisible by 3 ");
        }
        else
        {
            printf("not purely divisible by 3 ");
        }
    }
    return 0;
}

//https://github.com/4ndrlxrd/task6.2

