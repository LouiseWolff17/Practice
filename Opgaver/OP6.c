#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char name[100];
    char *description;

    strcpy(name, "Louise Wolff");

    description = malloc( 200 * sizeof(char) );

    if( description == NULL ) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy( description, "Louise Wolff a CS student in first semester");
    }

    printf("Name = %s\n", name );
    printf("Description: %s\n", description );
    free(description);
}
