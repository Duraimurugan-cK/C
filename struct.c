#include <stdio.h>
#include <string.h>

struct student {
    int reg_no;
    char name[20];
    char course[20];
};

int main() {
    struct student s={7218,"durai","cse"};

    printf("%d %s %s", s.reg_no, s.name, s.course);
    return 0;
}
