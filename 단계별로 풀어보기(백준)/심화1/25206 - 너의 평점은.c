#include<stdio.h>
#include<string.h>

typedef struct
{
	char name[50];
	float credit;
	char grade[2];
}student;

int main()
{
	student arr[20] = { 0 };
	float totalCredit = 0.0f;
	float totalScore = 0.0f;


	for (int i = 0; i < 20; i++)
	{
		scanf("%s", arr[i].name);
		scanf("%f", &arr[i].credit);
		scanf("%s", arr[i].grade);

		if (strcmp(arr[i].grade, "A+") == 0)
		{
			totalCredit += arr[i].credit;
			totalScore += arr[i].credit * 4.5f;
		}
		if (strcmp(arr[i].grade, "A0") == 0)
		{
			totalCredit += arr[i].credit;
			totalScore += arr[i].credit * 4.0f;
		}
		if (strcmp(arr[i].grade, "B+") == 0)
		{
			totalCredit += arr[i].credit;
			totalScore += arr[i].credit * 3.5f;
		}
		if (strcmp(arr[i].grade, "B0") == 0)
		{
			totalCredit += arr[i].credit;
			totalScore += arr[i].credit * 3.0f;
		}
		if (strcmp(arr[i].grade, "C+") == 0)
		{
			totalCredit += arr[i].credit;
			totalScore += arr[i].credit * 2.5f;
		}
		if (strcmp(arr[i].grade, "C0") == 0)
		{
			totalCredit += arr[i].credit;
			totalScore += arr[i].credit * 2.0f;
		}
		if (strcmp(arr[i].grade, "D+") == 0)
		{
			totalCredit += arr[i].credit;
			totalScore += arr[i].credit * 1.5f;
		}
		if (strcmp(arr[i].grade, "D0") == 0)
		{
			totalCredit += arr[i].credit;
			totalScore += arr[i].credit * 1.0f;
		}
		if (strcmp(arr[i].grade, "F") == 0)
		{
			totalCredit += arr[i].credit;
			totalScore += arr[i].credit * 0.0f;
		}
		else continue;
	}

	printf("%f", totalScore / totalCredit);

	return 0;
}