#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int max = 0;
    // Change below line to pass all test cases.
    int count = n;

    // Change below line to pass all test cases.
    while(n>=0)
    {
        if(n%2==1)
            count++;
        else
            count = 0;
        if(max<count)
            // Change below line to pass all test cases.
            max = count*2;
        n=n/2;
    }
    printf("Maximum consecutive 1 in binary: %d", max);
    return 0;
}