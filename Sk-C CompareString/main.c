//
//  main.c
//  Sk-C CompareString
//
//  Created by Student P_04 on 24/10/16.
//  Copyright © 2016 Siddharth Koshiyar. All rights reserved.
//

#include <stdio.h>

void comparestrings(char [], char []);

int main()
{
    
    char a[20], b[20];
    
    printf(" first string\n");
    scanf("%s",a);
    
    printf("second string\n");
    scanf("%s",b);
    
    comparestrings(a, b);
    return 0;
    
   
}

void comparestrings(char a[], char b[])
{
    int c = 0;
    
    while (a[c] == b[c])
    {
        if (a[c] == '\0' && b[c] == '\0')
            break;
        c++;
    }
    
    if (a[c] == '\0' && b[c] == '\0')
         printf("both strings are equal.\n");
    else
        printf("both strings are not equal.\n");
    
}