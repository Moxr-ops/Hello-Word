#include <stdio.h>
#include <string.h>

int main() {
    // ���ĵ�Ŀ¼�����ļ�
    const char* filename = "C:\\Users\\test.txt";
    FILE* file = fopen(filename, "w");
    
    if (file == NULL) {
        printf("�޷������ļ�\n");
        return 1;
    }

    // д������
    fprintf(file, "123");
    fclose(file);
    
    // �������ļ�
    const char* new_name = "C:\\Users\\Public\\Documents\\test_new.txt";
    if (rename(filename, new_name) == 0) {
        printf("�ļ��������ɹ�\n");
    } else {
        printf("�ļ�������ʧ��\n");
    }

    return 0;
}
