//convert integers to doubles
# include <stdio.h>
    int main(void){
    int i=0;
    int subjects = 0;
    int sum= 0 ;
    int grades = 0;
    double dsub;
    scanf("%d",&subjects);
    dsub = (double)subjects;
    for(i=0 ; i<subjects ; i++){
        scanf("%d",&grades);
        sum=sum+grades;
    }
    printf("%.2f",sum/dsub);
    return 0;
    }
