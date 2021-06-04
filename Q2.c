# include <stdio.h>
# include <string.h>

int main( )
{


    FILE *filePointer ;


    char dataToBeRead[50];


    filePointer = fopen("file.txt", "r") ;


    if ( filePointer == NULL )
    {
        printf( "GfgTest.c file failed to open." ) ;
    }
    else
    {

        printf("The file is now opened.\n") ;

        while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
        {

            printf( "%s" , dataToBeRead ) ;
        }


        fclose(filePointer) ;
        printf("The file is now closed.") ;
    }
    return 0;
}
