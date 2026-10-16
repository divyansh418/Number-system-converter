#include <stdio.h>
int main() {

    long long selecter_screen_1;
    printf("press 1 to convert integer decimal number into other number integer system\n");
    printf("press 2 to know what if i want to covert other then integer decimal number\n");
    scanf("%lld",&selecter_screen_1);
    if(selecter_screen_1==1){
    long long num;
    long long negative_handle;
    int a[64];
    int count =0;
    int b;
    printf("Enter your integer decimal number\n");
    scanf("%lld",&num);
    printf("Enter a your number system radix you want it to be converted your number in \n");
    scanf("%d",&b);
long long quotient, remainder;
if(num==0){printf("your answer is 0");}
else if (num!=0 && b>1 && b<=36){

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
        if(a[i]>=0){
  if (a[i]<= 10){
    printf("%d", a[i]);}
else
    {printf("%c", 'A' + (a[i] - 10));}
}
        else if(a[i]<=0){
                if(i==count-1){printf("-");}

    negative_handle = a[i]*-1;
  if (negative_handle <= 10){
    printf("%d", negative_handle );}
else
    {printf("%c", 'A' + (negative_handle - 10));}

}

    }}}

            else {printf("sorry i am still working on it coming soon");}
    return 0;
}
