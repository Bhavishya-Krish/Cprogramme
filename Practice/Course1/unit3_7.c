//convert doubles to integers
# include <stdio.h>
int main(void){
    int popu;// for population
    double growth;// growth percentage , therefore it will be in decimal
    int newpopu;// newpopulation is sum population + expecting population according to growth in that year
    int total;// total population of the city i
    double dnew;
    scanf("%d",&popu);
    scanf("%lf",&growth);
    newpopu = (growth/100) * popu;
    dnew = (int) newpopu; // to convert new population expecting from growth to integer , because population cannot be in decimal.
    total = dnew + popu;
    printf("%d",total);
    return 0 ;
}
