#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0;
    int j;

    while (i < numsSize) {
        j = i + 1;
        while (j < numsSize) {
            if (nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));
                if (result == NULL) {
                    return NULL;
                }
                result[0] = i;
                result[1] = j;
                *returnSize = 2;  
                return result;
            }
            j++;
        }
        i++;
    }

    return NULL;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num[] = {1, 3, 4, 7};
    int target = 5;
    int returnSize; 
    int* ret;

    ret = twoSum(num, 4, target, &returnSize);

    if (ret != NULL) {
        printf("Indices: %d, %d\n", ret[0], ret[1]);
        free(ret);  
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
