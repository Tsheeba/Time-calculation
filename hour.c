#include<stdio.h>
#include<stdlib.h>

void printWords()
{
   int h,m;

    printf("Hrs:");
    scanf("%d",&h);
    printf("Mins:");
    scanf("%d", &m);
    char time[][64] = { "zero", "one", "two", "three", "four",
                        "five", "six", "seven", "eight", "nine",
                        "ten", "eleven", "twelve", "thirteen",
                        "fourteen", "fifteen", "sixteen", "seventeen",
                        "eighteen", "nineteen", "twenty", "twenty one",
                        "twenty two", "twenty three", "twenty four",
                        "twenty five", "twenty six", "twenty seven",
                        "twenty eight", "twenty nine"
                      };

 switch(m){
    case 0:
        printf("%s o' clock\n", time[(h % 12)]);
        break;
 
    case  1:
        printf("one minute past %s\n", time[(h % 12)]);
        break;
 
    case 59:
        printf("one minute to %s\n", time[(h % 12) + 1]);
         break;
 

    case 15:
        printf("quarter past %s\n", time[(h % 12)]);
        break;
 
    case 30:
        printf("half past %s\n", time[(h % 12)]);
        break;
 
    case 45:
        printf("quarter to %s\n", time[(h % 12) + 1]);
        break;
        }
 
    if (m <= 30){
        printf("%s minutes past %s\n",time[m], time[(h % 12)]);
        }
 
    else if (m > 30 && m<=60){
        printf("%s minutes to %s\n", time[60 - m],
                                     time[(h % 12) + 1]);
        }

    else
	printf("out of range");
}

int main()
{ 
    printWords();
    return 0;
}

