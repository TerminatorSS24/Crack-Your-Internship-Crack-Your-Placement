#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int findDuplicate(int* nums, int numsSize){
    int* seen = (int*)malloc((numsSize + 1) * sizeof(int));
    memset(seen, 0, (numsSize + 1) * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        if (seen[nums[i]] == 1) {
            free(seen);
            return nums[i];
        } else {
            seen[nums[i]] = 1;
        }
    }

    free(seen);
    return -1;
}