//read an integer and print the corresponding multiplication table
# include <stdio.h>
int main(void){
    int i;
    int number=0;
    int multiple;
    int multipleof=0;
    scanf("%d",&multiple);
    for(i=0; i<11 ; i++){
        printf("%dx%d = %d \n",number,multiple,multipleof);
        number = number+1;
        multipleof = multipleof + multiple;
    }
    return 0;
}
