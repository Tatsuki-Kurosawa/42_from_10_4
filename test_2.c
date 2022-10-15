#include <stdio.h>
#include <string.h>

int main(void)
{
    char* p = strnstr( "abcdefgh", "bcdef", 3 );
    puts( p );
}
