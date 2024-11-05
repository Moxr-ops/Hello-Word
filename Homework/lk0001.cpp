#include <stdio.h>
#include <stdlib.h>

/**
 * 在给定数组中找出两个数之和等于目标值的两个数的下标
 * @param nums: 输入的整数数组
 * @param numsSize: 数组的大小
 * @param target: 目标和
 * @param returnSize: 用于存储返回数组的大小的指针
 * @return: 返回包含两个下标的数组，若未找到则返回NULL
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                int* ret = (int*)malloc(sizeof(int) * 2);
                ret[0] = i, ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

/**
 * 在给定数组中找出两个数之和等于目标值的两个数的下标
 * @param nums: 输入的整数数组
 * @param numsSize: 数组的大小
 * @param target: 目标和
 * @param returnSize: 用于存储返回数组的大小的指针
 * @return: 返回包含两个下标的数组，若未找到则返回NULL
 */
int* STDtwoSum(int* nums, int numsSize, int target, int* returnSize) {
    // 创建哈希表，大小设为数组长度的2倍以减少碰撞
    int hashTableSize = numsSize * 2;
    // 动态分配哈希表内存
    int* hashTable = (int*)malloc(sizeof(int) * hashTableSize);
    
    // 初始化哈希表，所有位置设为-1表示空位
    for (int i = 0; i < hashTableSize; i++) {
        hashTable[i] = -1;
    }

    // 遍历输入数组
    for (int i = 0; i < numsSize; i++) {
        // 计算需要寻找的补数（配对数）
        int complement = target - nums[i];
        // 使用补数的绝对值计算哈希索引
        int index = abs(complement) % hashTableSize;
        
        // 处理哈希冲突：线性探测法
        while (hashTable[index] != -1 && nums[hashTable[index]] != complement) {
            index = (index + 1) % hashTableSize;
        }
        
        // 如果找到了配对数
        if (hashTable[index] != -1) {
            // 分配结果数组内存
            int* result = (int*)malloc(sizeof(int) * 2);
            // 存储两个数的下标
            result[0] = hashTable[index];  // 已存储数字的下标
            result[1] = i;                 // 当前数字的下标
            *returnSize = 2;               // 设置返回数组大小
            free(hashTable);              // 释放哈希表内存
            return result;                // 返回结果
        }

        // 将当前数字存入哈希表
        index = abs(nums[i]) % hashTableSize;
        // 处理哈希冲突：找到空位
        while (hashTable[index] != -1) {
            index = (index + 1) % hashTableSize;
        }
        // 存储当前数字的下标
        hashTable[index] = i;
    }
    
    // 未找到符合条件的数对
    free(hashTable);     // 释放哈希表内存
    *returnSize = 0;     // 设置返回数组大小为0
    return NULL;         // 返回NULL表示未找到
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, 4, target, &returnSize);
    printf("%d %d\n", result[0], result[1]);
    return 0;
}
