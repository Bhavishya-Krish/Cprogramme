//find the remainder in integer division
# include <stdio.h>
int main(void){
    int matches;
    int sizebox;
    scanf("%d",&matches);
    scanf("%d",&sizebox);
    int fill = matches/sizebox;
    int remain = matches%sizebox;
    printf("%d\n",fill);
    printf("%d\n",remain);
    return 0 ;
}
