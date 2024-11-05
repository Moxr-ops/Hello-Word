#include <stdio.h>
#include <string.h>

int main() {
    // 在文档目录创建文件
    const char* filename = "C:\\Users\\test.txt";
    FILE* file = fopen(filename, "w");
    
    if (file == NULL) {
        printf("无法创建文件\n");
        return 1;
    }

    // 写入内容
    fprintf(file, "123");
    fclose(file);
    
    // 重命名文件
    const char* new_name = "C:\\Users\\Public\\Documents\\test_new.txt";
    if (rename(filename, new_name) == 0) {
        printf("文件重命名成功\n");
    } else {
        printf("文件重命名失败\n");
    }

    return 0;
}
