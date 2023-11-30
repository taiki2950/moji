#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	const char*filename = "data.txt";

	FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("ファイルを開けませんでした。\n");
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
            printf("＊");
        }
        else if (value == 0) {
            printf("　");
        }
        else {
            printf("無効な値が検出されました: %d\n", value);
            break;
        }
    }

    fclose(file);

    return 0;

}