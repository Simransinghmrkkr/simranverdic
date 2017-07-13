#include <stdio.h>
 int fibonacci(int num){
    if(num < 2)
       return num;
    return fibonacci(num - 1) + fibonacci(num - 2);
}
int main(){
    int term, counter,x;
    scanf("%d", &term);
    printf("Fibonacci series till %d \n", term); 
    for(counter = 0; counter < terms; counter++){
       x = fibonacci(counter);
       if(x <= terms)
        printf("%d ", x);
        else break;
    }
    return 0;
}