#include <stdio.h>

int main() {


    int inputs[3];

    printf("Enter three integers: ");

    scanf("%d %d %d", &inputs[0], &inputs[1], &inputs[2]);

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {


            if (inputs[i] > inputs[j]) {
                int temp = inputs[i];
                inputs[i] = inputs[j]; //swap
                inputs[j] = temp; // to compare again
            }
        }
    }

    printf("In ascending order: %d %d %d\n", inputs[0], inputs[1], inputs[2]);

}
