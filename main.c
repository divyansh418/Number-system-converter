#include <stdio.h>
int main() {
    long long num;
    int a[64];
    int count =0;
    int b;
    printf("Enter a number\n");
    scanf("%lld",&num);
    printf("Enter a your number system radix you want it to be converted your number in \n");
    scanf("%d",&b);
long long quotient, remainder;
if(num==0){printf("your answer is 0");}
else if (num>0 && b>1){

while (num != 0) {
    quotient = num / b;
    remainder = num % b;
    a[count] = remainder;
    count++;

    printf("N = %lld, Q = %lld, R= %lld\n",
           num, quotient, remainder);

    num = quotient;
}
printf("Your answer: ");
for (int i = count - 1; i >= 0; i--) {
  if (a[i] < 10)
    printf("%d", a[i]);
else
    printf("%c", 'A' + (a[i] - 10));
}
printf("\n");}
else {printf("error");}

    return 0;
}
