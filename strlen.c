#include <stdio.h>

int main() {
    char str[120];
    scanf("%s", str);
    int i;
    for (i = 0; str[i] != '\0'; i++);
    int s = 0, c = 0, sp = 0, n = 0;
    for (int j = 0; j < i; j++) {
        if ((str[j] >= 32 && str[j] <= 47) || (str[j] >= 58 && str[j] <= 64) ||
            (str[j] >= 91 && str[j] <= 96) || (str[j] >= 123 && str[j] <= 126))
            sp++;
        if (str[j] >= 97 && str[j] <= 122)
            s++;
        if (str[j] >= 65 && str[j] <= 90)
            c++;
        if (str[j] >= 48 && str[j] <= 57)
            n++;
    }

    if (s > 0 && c > 0 && sp > 0 && n > 0)
        printf("strong password");
    else
        printf("weak password");

    return 0;
}
