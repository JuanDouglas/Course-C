int main()
{
    /*Int variable 32bits */
    int _int = 0;
    /*Int variable 16bits*/
    short int _shortInt = 0;
    /*Default short is int */
    short _short = 0;
    /*Int long variable 64bits*/
    long int _lognInt = 0;
    /*Default long is int */
    long _long = 0;
    /*Multiply long*/
    long long _longExtend = 0;
    /*Unisgned variable (does not accepted -0 values)*/
    unsigned int _unsignedInt = 0;
    /*Default unsigned is int */
    int _unsigned = 0;
    /*Long unsigned */
    unsigned long int _longUnsigned = 0;
    /*Floating point extend to 16bits*/
    long double _longDouble = 0;
    /*Explict conversion*/
    _longDouble = (long double)((double)2);

    /*Volatile define  */
    volatile unsigned short int _volatile = 0;

//switch structure
    switch (2)
    {
        //normal case
        case 1:
            puts("Only one?");
            break;
        case 2:
            puts("I want more.");
            break;
        //Infilered case
        case 3:
        case 4:
            puts("Okay.");
            break;
            //default case for all situations
        default:
            puts("Don't care");
    }
      int moth=0;
    printf("Write month number: ");
    scanf("&i",&moth);
	switch(moth){
	    case 1 : puts("January");break;
case 2 : puts("February");break; 
case 3 : puts("March");break;
case 4 : puts("April");break;
case 5 : puts("May");break;
case 6 : puts("June");break;
case 7 : puts("July");break;
case 8 : puts("August");break;
case 9 : puts("September");break;
case 10 : puts("October");break;
case 11 : puts(" November");break;
case 12 : puts("December");break;
	    default: puts("Error: no such month in my calendar.");
	}
	return 0;
}