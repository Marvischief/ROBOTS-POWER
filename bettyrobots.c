#include<stdio.h>

int main() {
    int numRob;
    scanf("%d", &numRob);

    int i ;
    int height, weight , enginePower, resistance;
    int totalPower = 0;

    for (i=0; i < numRob; i++) {
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        totalPower += (enginePower + resistance) * (weight - height);
    }

    printf("%d\n", totalPower);

    return 0;
}

