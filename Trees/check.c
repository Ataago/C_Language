#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   char *name;
   name = (char*)malloc( 50 * sizeof(char) );  /* allocating memory dynamically  */
   name = realloc((char*) name, 100 * sizeof(char));
   //strcpy( address, "Lee Fort, 11-B Sans Street");
   scanf("%s", name);
  // printf("Name = %as\n", name );
   printf("Name: %s\n", name );
   free(name);
   printf("Name: %s\n", name );

   int *ptr;
   ptr = (int*)malloc(sizeof(int));
   //scanf("%d", ptr);
   printf("%d", *ptr);

   return 0;
}
