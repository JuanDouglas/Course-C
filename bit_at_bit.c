#include <stdio.h>
int IntByBitPosition(int position)
{
    int bit = 1;
    for (int i = 0; i < position - 1; i++)
    {
        bit *= 2;
    }
    return bit;
}

void EnableBit(int *bits, int position)
{
    int bit = IntByBitPosition(position);
    *bits |= bit;
}

void DisableBit(int *bits, int position)
{
    int bit = IntByBitPosition(position);
    *bits &= ~bit;
}

void ShowBit(int *compare, unsigned *bitValue, char text[], int position)
{
    unsigned referenceValue = *bitValue;
    if ((*compare & referenceValue) == *bitValue)
        text[position] = '1';
    else
        text[position] = '0';
}

void CharArrayBits(int *content, char result[], int bitsCount)
{
    unsigned max = IntByBitPosition(bitsCount);
    for (short i = 0; i < bitsCount; i++)
    {
        ShowBit(&*content, &max, result, i);
        max /= 2;
    }
}

int run(){
  int bits = 0;
    int position = 0;
    printf("Write positions for enable bits: ");
    scanf("%i", &position);

    EnableBit(&bits, position);

    char output[32];
    CharArrayBits(&bits, output,32);

    printf("Bits: %s \nDecimal Value: %i", output, bits);
    scanf("%i", position);

}
int main()
{
  run();
  return 0;
}