#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "covid19.h"

void print_submenu4(FILE* fp) //인천광역시
{
	char buffer[100]; // [평가항목 3] : 배열 사용
	STATUS incheon = { "1,075,395","1,396" };

	printf("<인천광역시>\n-----------------------------------\n");
	while (feof(fp) == NULL)
	{
		fgets(buffer, 100, fp);

		if (strcmp(buffer, "강화군			20,098\n") == 0)
		{
			printf("%s", buffer);
			while (strcmp(buffer, "중구			54,830\n") != 0)
			{
				fgets(buffer, 100, fp);
				printf("%s", buffer);
			}
			break;
		}
	}
	printf("-----------------------------------\n");
	printf("총 확진자수		%s\n", incheon.total);
	printf("사망자수		%s\n", incheon.death);
}