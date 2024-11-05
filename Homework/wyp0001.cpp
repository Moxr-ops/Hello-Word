#include <stdio.h>
#include <stdlib.h>

int main() {
    // 定义4x4的整型矩阵和循环变量
    int matrix[4][4];
    int i, j, k;
    // found用于标记是否找到鞍点：0表示未找到，1表示找到
    int found = 0;
    
    // 通过双重循环输入16个整数到矩阵中
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // 遍历矩阵中的每个元素，寻找鞍点
    for(i = 0; i < 4; i++) {        // 遍历行
        for(j = 0; j < 4; j++) {    // 遍历列
            // 检查当前元素是否是本行最大值
            int isRowMax = 1;        // 假设当前元素是本行最大
            for(k = 0; k < 4; k++) {
                // 如果本行存在比当前元素大的数，则当前元素不是本行最大
                if(matrix[i][k] > matrix[i][j]) {
                    isRowMax = 0;
                    break;
                }
            }
            
            // 如果当前元素是本行最大，继续检查是否是本列最小
            if(isRowMax) {
                int isColMin = 1;    // 假设当前元素是本列最小
                for(k = 0; k < 4; k++) {
                    // 如果本列存在比当前元素小的数，则当前元素不是本列最小
                    if(matrix[k][j] < matrix[i][j]) {
                        isColMin = 0;
                        break;
                    }
                }
                
                // 如果当前元素同时满足"行最大"和"列最小"，则为鞍点
                if(isColMin) {
                    // 按格式输出鞍点的位置和值
                    printf("[%d][%d]  %d\n", i, j, matrix[i][j]);
                    found = 1;       // 标记已找到鞍点
                    break;           // 跳出当前循环
                }
            }
        }
        // 如果已找到鞍点，跳出外层循环
        if(found) break;
    }
    
    // 如果遍历完整个矩阵都没有找到鞍点，输出"NO"
    if(!found) {
        printf("NO\n");
    }
    
    return 0;
}

int SaddlePoint(int matrix[4][4]) {
    int hashTableSize = 4 * 4 * 2;
    int hashTable[hashTableSize];
    for (int i = 0; i < hashTableSize; i++) {
        hashTable[i] = -1;
    }

    for (int i = 0; i < 4; i++)
    {
        int rMax = matrix[i][0];
        for (int j = 0; j < 4; j++)
        {
            if (matrix[i][j] > rMax)
            {
                rMax = matrix[i][j];
            }
        }
        int index = abs(rMax) % hashTableSize;
        while (hashTable[index] != -1 && matrix[i][hashTable[index]] != rMax)
        {
            index = (index + 1) % hashTableSize;
        }
        if (hashTable[index] != -1)
        {
            printf("[%d][%d]  %d\n", i, hashTable[index], rMax);
            return 1;
        }
    }
    return 0;
}
