#include <stdio.h>

const int intBitsCount = 32; 

int IntByBitPosition(int position)
{
    int bit = 1;
    for (int i = 0; i < position-1; i++)
    {
        bit *= 2;
    }
    return bit;
}

void EnableBit(int *bits, int position)
{
    int bit = IntByBitPosition(position);
    *bits = (*bits | bit);
}


void DisableBit(int bits, int position)
{
    int bit = IntByBitPosition(position);
    bits = bits & ~bit;
}


void ShowBit(int *compare, unsigned *bitValue, char text[],int position)
{
    unsigned referenceValue = *bitValue;
    if ((*compare & referenceValue) == *bitValue)
        text[position] ='1';
    else
        text[position] ='0';
       
}

void CharArrayBits(int *content, char *result[32])
{
    unsigned max = IntByBitPosition(intBitsCount);
    for (short i = 0; i < intBitsCount;i++)
    {
        ShowBit(&*content,&max, result, i);
        max /= 2;
    }

}

int main()
{
    int bits = 0;
    int position = 0;
    printf("Write positions for enable bits: ");
    scanf("%i", &position);
    
    EnableBit(&bits, position);

    char output[32];
    CharArrayBits(&bits,&output);

    printf("Bits: %s \nDecimal Value: %i",output,bits);
    scanf("%i", position);
}