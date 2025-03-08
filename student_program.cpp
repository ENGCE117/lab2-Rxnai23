#include <stdio.h>
#include <string.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] ;
    char *output ;
    output = reverse( text ) ;
    printf( "MAIN : %s\n", output ) ;
    
}//end function

char* reverse( char str1[] ) {
    static char str2[99];   
    static char reverse[99]; 

    printf("Enter str: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int length = strlen(str2);

    for (int i = 0; i < length; i++) {
        reverse[i] = str2[length - 1 - i];
    }
    reverse[length] = '\0'; 

    printf( "FUNC : %s\n", reverse ) ;
    return reverse;
}
