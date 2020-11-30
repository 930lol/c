#include <stdio.h>

int main() {
    int numbers[6][6];
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            scanf("%d",&numbers[i][j]);
        }
    }
    int currentHourGlass;
    int largestSum = -999;

    for (int i = 1; i < 5; i++){
        for (int j = 1; j < 5; j++){
            currentHourGlass = 0;
            currentHourGlass += numbers[i-1][j-1];
            currentHourGlass += numbers[i-1][j];
            currentHourGlass += numbers[i-1][j+1];
            currentHourGlass += numbers[i][j];
            currentHourGlass += numbers[i+1][j-1];
            currentHourGlass += numbers[i+1][j];
            currentHourGlass += numbers[i+1][j+1];
            
            if (currentHourGlass > largestSum)
            {
                largestSum = currentHourGlass;
            }

        }
    }

   printf("%d", largestSum);
}
