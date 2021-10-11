#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	FILE* fp;
	int x,y,z;
	fp = fopen("a.txt", "w");
	printf("Enter input : ");
	scanf("%d %d", &x, &y);
	fprintf(fp, "%d ", x);
	fprintf(fp, "%d", y);
	fclose(fp);
	fp = fopen("b.txt", "w");
	z = x + y;
	fprintf(fp, "%d", z);
	fclose(fp);
	return 0;
}