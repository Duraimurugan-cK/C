#include<stdio.h>
int findMaxLoot(int money[], int n) {
    int incl = money[0];
    int excl = 0;
    int temp;

    for(int i=1; i<n; i++) {
        temp = incl;
        incl = excl + money[i];
        excl = (temp > excl) ? temp : excl;
    }
    return (incl > excl) ? incl : excl;
}
int main() {
    int n;
    scanf("%d", &n);

    int money[n];
    for(int i=0; i<n; i++)
        scanf("%d", &money[i]);

    printf("%d", findMaxLoot(money, n));

    return 0;
}
