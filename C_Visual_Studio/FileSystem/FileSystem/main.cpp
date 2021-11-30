#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
#include <time.h>

char* printTime(char* buffer, int size) {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	int time;
	printf("now: %d-%d-%d %d:%d:%d\n",tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday,tm.tm_hour, tm.tm_min, tm.tm_sec);
	time = snprintf(buffer, size, "%4d", tm.tm_year + 1900);
	time += snprintf(buffer+time, size-time, "-%d", tm.tm_mon + 1);
	time += snprintf(buffer+time, size-time, "-%d", tm.tm_mday);
	time += snprintf(buffer+time, size-time, " %d:", tm.tm_hour);
	time += snprintf(buffer+time, size-time, "%d:", tm.tm_min);
	time += snprintf(buffer+time, size-time, "%d ", tm.tm_sec);

	printf("%d\n", time);	// 문자열 길이

	return buffer;
}

int main() {

	char buf[20];
	int size = sizeof(buf);

	FILE* textfile;
	textfile = fopen("./../test.txt", "w");

	if (textfile == NULL) {
		printf("에러\n");
	}else {
		fwrite(printTime(buf, size), size, 1, textfile);
	}

	fclose(textfile);

	return 0;
}