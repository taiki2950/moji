#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	const char*filename = "data.txt";

	FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("�t�@�C�����J���܂���ł����B\n");
        return 1; 
    }

    int value;
    int count = 0;
    while (fscanf(file, "%1d", &value) == 1) {
        if (count == 8) {
            printf("\n");
            count = 0;
        }
        count++;
        if (value == 1) {
            printf("��");
        }
        else if (value == 0) {
            printf("�@");
        }
        else {
            printf("�����Ȓl�����o����܂���: %d\n", value);
            break;
        }
    }

    fclose(file);

    return 0;

}