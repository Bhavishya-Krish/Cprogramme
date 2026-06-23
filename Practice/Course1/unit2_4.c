//read and process multiple integers via a loop
# include <stdio.h>
// (enginePower + resistance) * (weight - height)
int main(void){
    int i;
    int deployed =0  ;
    int enginePower = 0;
    int resistance = 0;
    int weight = 0 ;
    int height = 0 ;
    int power =0 ;
    int tpower = 0 ;
    scanf("%d\n",&deployed);
        for(i=0; i<deployed ; i++){
            
    scanf("%d\n",&height);
    scanf("%d\n",&weight);
    scanf("%d\n",&enginePower);
    scanf("%d\n",&resistance);
    power  = (enginePower + resistance)*(weight - height);
        tpower = tpower + power;
        }
        printf("%d",tpower);
 return 0 ;
}
