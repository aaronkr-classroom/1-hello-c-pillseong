#include <stdio.h>
#include <string.h>

void cypher(char* msg, int sft) {
    char ch;
    int i;
    for (i = 0; msg[i] != '\0'; ++i) {
        ch = msg[i];

       
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + sft;

            if (ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }
            else if (ch < 'A') {
                ch = ch + 'Z' - 'A' + 1;
            }
        }

        else if (ch >= 'a' && ch <= 'z') {
            ch = ch + sft;

            if (ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
            }
            else if (ch < 'a') {
                ch = ch + 'z' - 'a' + 1;
            }
        }

      
        msg[i] = ch;
    }
}

int main() {
    char message[100];

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

  
    message[strcspn(message, "\n")] = '\0';

    int shift;
    printf("Enter shift value: ");
    scanf("%d", &shift); 

    cypher(message, shift);

    printf("Encrypted message: %s\n", message);

    return 0;
}