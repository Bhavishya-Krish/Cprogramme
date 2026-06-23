//divide decimals with round-off
# include <stdio.h>
int main(void){
    double amtcement;// amount of cement requires in pounds
    double value;// dividing result
    int intvalue;// converting value into integer
    int bagreq;// total number of bage require (this will me 1+ value)
    int cost ;// total cost of bags require
    scanf("%lf",&amtcement);
    value = amtcement/120;
    intvalue = (int)value;
    bagreq = intvalue + 1;
    cost = 45*bagreq;
    printf("%d",cost);
    return 0 ;
}
