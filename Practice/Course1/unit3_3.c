//read a decimal number
# include <stdio.h>
int main(void){
double dist;
double kilo;
scanf("%lf",&dist);
kilo = 0.621371*dist;
printf("%.6f",kilo);
return 0;
}
