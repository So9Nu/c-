#include <stdio.h>
#include <string.h>

int main(void) {
    char name[3][10] = {"sonu", "kale", "prasanna"},s[10];
    int i, j;
printf("enter  the name to search\n");
scanf("%s",s);
   
    for (i = 0; i < 2; i++) { 
        for (j = i + 1; j < 3; j++) { 
            if (strcmp(name[i], name[j]) > 0) {
                char temp[10]; 
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("%s\n %s\n %s\n", name[0], name[1], name[2]);
  
}