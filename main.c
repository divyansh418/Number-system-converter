#include <stdio.h>
#include<limits.h>
#include<float.h>
int main() {

    long long selecter_screen_1;
    long long selecter_screen_2;
    printf("press 1 to convert integer decimal number into other number integer system\n");
    printf("press 2 to convert decimal number into other number system\n");
    printf("press 3 to know what if i want to covert other then integer decimal number\n");
    scanf("%lld",&selecter_screen_1);
    if(selecter_screen_1==1){
        long long num;
        long long negative_handle;
        int a[64];
        int count =0;
        int b;
        printf("Enter your integer decimal number\n");
        scanf("%lld",&num);
        printf("Enter a your number system radix you want to be converted your number in \n");
        scanf("%d",&b);
        long long quotient, remainder;
        if(num==0){printf("your answer is 0");
        }
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
                if (a[i]< 10){
                printf("%d", a[i]);}
            else
                {printf("%c", 'A' + (a[i] - 10));
                }
                }
        else if(a[i]<=0){
                if(i==count-1){printf("-");}

                    negative_handle = a[i]*-1;
                if (negative_handle < 10){
                printf("%d", negative_handle );
                }
                else
                {printf("%c", 'A' + (negative_handle - 10));}

                }

            }
        }
    }
    else if(selecter_screen_1==2){
            printf("my code can not handle any numbers who's fraction give repeting value on multiplecation in other word it can not handle never ending fraction part so if the code did not stop press ctrl+c on pc and on phone just terminat the code idk how to do it on phon so you are on your own for that part if you arggre to this press 1 to continue i will fix that part soon\n");
    scanf("%lld",&selecter_screen_2);
            if(selecter_screen_2==1){
        long long num;
        long long quotient, remainder;
        long double quotient1, remainder1;
        long long negative_handle;
        long long negative_handle1;
        int a[64];
        int count =0;
        int b[64];
        int c[64];
        int count2=0;
        int count1 =0;
        printf("put your decimal number you want to get converted like if you want 555.987 then put 555 only for now\n");
        scanf("%lld",&num);
        int radix;
        printf("Enter a your number system radix you want to be converted your number in \n");
       for(;;) {
        scanf("%d",&radix);
            if(radix>=2){break;
            }
            else{printf("radix can not be lower then 2\n");}
        }
        long double decimal;
        printf("Enter a your number decimal place only like if you want 555.987 then put 0.987\n");
        for(;;){
        scanf("%Lf",&decimal);
            if(decimal>=0 && decimal<1){
                break;
                }
            else{
                printf("put a valid number acording to instraction\n");
                }
            }
            printf("solving integer part\n");
         while(num!=0){
            quotient =num/radix;
            remainder=num%radix;
            a[count] = remainder;
        count++;

        printf("N = %lld, Q = %lld, R= %lld\n",
           num, quotient, remainder);

        num = quotient;
         }
            printf("\n");
             printf("solving fractional part\n");
             while(decimal!=0){
            quotient1 =decimal*radix;
            remainder=(long long)quotient1;
            b[count1] = remainder;
        count1++;
        c[count2]=decimal;
        count2++;

        printf("N = %Lf,M = %Lf, C= %lld\n",
           decimal, quotient1, remainder);

        decimal = quotient1-remainder;
       // for(int ab=0;ab<count1;ab++){
           // for(int abc=0;abc<count1;abc++){
             //   if(c[ab]==c[abc]){goto skip;

            //}
        //}
         }
       //  skip:

          printf("Your answer: ");
        for (int i = count - 1; i >= 0; i--) {
            if(a[i]>=0){
                if (a[i]< 10){
                printf("%d", a[i]);}
            else
                {printf("%c", 'A' + (a[i] - 10));
                }
                }
        else if(a[i]<=0){
                if(i==count-1){printf("-");}

                    negative_handle = a[i]*-1;
                if (negative_handle < 10){
                printf("%d", negative_handle );
                }
                else
                {printf("%c", 'A' + (negative_handle - 10));}

                }

            }
            printf(".");
        for (int i = 0; i <count1; i++) {
            if(b[i]>=0){
                if (b[i]< 10){
                printf("%d", b[i]);}
            else
                {printf("%c", 'A' + (b[i] - 10));
                }
                }
        else if(b[i]<=0){
                if(i==count1-1){printf("-");}

                    negative_handle1 = a[i]*-1;
                if (negative_handle1 < 10){
                printf("%d", negative_handle1 );
                }
                else
                {printf("%c", 'A' + (negative_handle1 - 10));}

                }

            }

    }
    }

    else {printf("sorry i am still working on it coming soon");}
    return 0;
}
