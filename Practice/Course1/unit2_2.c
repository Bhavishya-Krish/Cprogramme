//print the x8 multiplication table
# include <stdio.h>
int main(void){
    int i;
    int number = 0 ;
    int multipleof = 0 ;
    for(i=0 ; i<11 ; i++){
        printf("%dx8 = %d \n",number,multipleof);
        number = number+1;
        multipleof = multipleof+8;
    }
    return 0;
    }
