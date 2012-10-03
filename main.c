//
//  main.c
//  int-null-even
//
//  Created by Артём Кириенко on 03.10.12.
//  Copyright (c) 2012 Артём Кириенко. All rights reserved.
//
//  Написать машинно-независимую программу, обнуляющую каждую
//  чётную двоичную единицу в числе типа int.
//
//  Буду считать, что нумерация битов в байте начинается с нуля.
//  И нуль — чётное число.
//

#include <stdio.h>
#include <limits.h>

int printbinary(unsigned int a);

int main(int argc, const char * argv[])
{
    unsigned int a, b=2;
    if (scanf("%d",&a)==1) {
        for (int i=0; i < ((sizeof(a)*CHAR_BIT)); i+=2) {
            b <<= 2; b += 2;
        }
    }
    printf("Было (двоичный код в обратном направлении): "); printbinary(a);
    a &= b; //Очень важная строчка.
    printf("Стало (двоичный код в обратном направлении): "); printbinary(a);
    return 0;
}

//  Для отладки.
//  Печатает в двичном представлении в обратном направлении.
int printbinary(unsigned int a){
    for (int i=0; i < ((sizeof(a)*CHAR_BIT)); i++){
        printf("%d", a%2); a >>= 1;
    }
    printf("\n");
    return 0;
}