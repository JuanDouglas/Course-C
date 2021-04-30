#include <stdio.h>

const int intBitsCount = 16 * 8; 

int IntByBitPosition(int position)
{
    int bit = 1;
    for (int i = 0; i < position-1; i++)
    {
        bit *= 2;
    }
    return bit;
}

void EnableBit(int bits, int position)
{
    int bit = IntByBitPosition(position);
    bits = (bits | bit);
}


void DisableBit(int bits, int position)
{
    int bit = IntByBitPosition(position);
    bits = bits & ~bit;
}


void ShowBit(int compare, int value,char *text,int position)
{
    if ((compare & value) == value)
        text[position] ='1';
    else
        text[position] ='0';
       
}

char *CharArrayBits(int content)
{
    char *result = "";
    int max = IntByBitPosition(intBitsCount);
    int bit = max;
    for (int i = 0; i < intBitsCount;i++)
    {
        ShowBit(content, bit, result, i);
        bit /= 2;
    }
    return result;
}


int main()
{
    int bits = 0;
    int position = 0;
    printf("Write positions for enable bits: ");
    scanf("%i", &position);
    
    EnableBit(bits, position);
    char *text = CharArrayBits(bits);

    printf(text);
    scanf("%i", position);
}