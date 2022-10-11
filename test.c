// #include <stdio.h>
 
// #define PI (3.14)
// #define area(r) PI*r*r
// #define prt(f) (printf("%f\n", f))
 
// int main(void) {
//     prt(area(10.0f));
 
//     return 0;
// }

// #include <stdio.h>
// #define prt(s) printf("%s\n", s)
// // 実際に使う関数内では型は意識
// int main(void){
//     prt("abc");
// }

// #include <stdio.h>

// #define DEBUG_ON

// int main(void)
// {

// #ifndef DEBUG_ON
//     printf("Hello");
// #else
//     printf("World");
// #endif

//     return 0;
// }
#include<ctype.h>
#include<stdio.h>
int main()
{
    for (int i = 0; i < 256; i++)
    {
        printf("%d\n", isprint(i));
    }
}