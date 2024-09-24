#include <stdio.h>
#include<string.h>

int main(void) {
    
    char names[5][50]; 
    char temp[50];    
    int i, j;

    
    for (i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; 
    }

   
    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) < 0) { 
               
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

   
    printf("\nNames in descending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    
}