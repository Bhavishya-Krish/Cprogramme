//divide decimals
# include <stdio.h>
int main(void){
    double totalprice;// money you have
    double bookprice;// in question every book price will be low
    double final;
    int intfinal;
    scanf("%lf",&totalprice);
    scanf("%lf",&bookprice);
    final = totalprice/bookprice;
    intfinal = (int) final; // number of book you can buy
    printf("%d",intfinal);
    return 0;
    
    
}
