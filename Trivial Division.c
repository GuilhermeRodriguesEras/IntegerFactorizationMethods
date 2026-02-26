#include <stdio.h>
#include <math.h>

long TrivialDivision(long n){

    long ceil = pow(n, 0.5);

    for(long i = 2; i<=ceil; i++)
        if(n % i == 0)
            return i;
    
    return n;
}

int main(){
    long anwser, n;

    scanf("%ld", &n);

    anwser = TrivialDivision(n);
    printf("%ld \n", anwser);
    return 0;
}
