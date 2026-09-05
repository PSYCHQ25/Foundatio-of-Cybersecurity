#include <stdio.h>

int main() {
    char text[100];
    int shift;

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter shift: ");
    scanf("%d", &shift);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = (text[i] - 'a' + shift) % 26 + 'a';

        else if (text[i] >= 'A' && text[i] <= 'Z')
            text[i] = (text[i] - 'A' + shift) % 26 + 'A';
    }

    printf("Encrypted: %s", text);

    return 0;
}
