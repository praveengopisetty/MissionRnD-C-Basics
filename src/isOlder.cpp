#include<stdio.h>
int isOlder(char *dob1, char *dob2)
{
	int len1 = 0, len2 = 0, j, yr1 = 0, yr2 = 0, mn1 = 0, mn2 = 0, dy1 = 0, dy2 = 0, temp = 0;
	int i;
	if ((dob1 == NULL) || (dob2 == NULL))
		return -1;
	for (j = 0; dob1[j] != '\0'; j++)
	{
		len1++;
	}
	for (j = 0; dob2[j] != '\0'; j++)
	{
		len2++;
	}
	if (len1 != 10 || len2 != 10)
	{
		return -1;
	}
	for (i = 6; dob1[i] != '\0'; i++)
	{
		temp = dob1[i] - '0';
		yr1 = yr1 * 10 + temp;

	}
	for (i = 6; dob2[i] != '\0'; i++)
	{
		temp = dob2[i] - '0';
		yr2 = yr2 * 10 + temp;

	}
	for (i = 3; i <= 4; i++)
	{
		temp = dob1[i] - '0';
		mn1 = mn1 * 10 + temp;

	}
	for (i = 3; i <= 4; i++)
	{
		temp = dob2[i] - '0';
		mn2 = mn2 * 10 + temp;
	}
	for (i = 0; i <= 1; i++)
	{
		temp = dob1[i] - '0';
		dy1 = dy1 * 10 + temp;
	}
	for (i = 0; i <= 1; i++)
	{
		temp = dob2[i] - '0';
		dy2 = dy2 * 10 + temp;
	}



	if ((mn1 <= 12) && (mn2 <= 12) && (dy1 <= 31) && (dy2 <= 31))
	{
		if (yr1 % 4 == 0 && mn1 == 02 && dy1>29)
		{
			return -1;
		}
		if (yr2 % 4 == 0 && mn2 == 02 && dy2>29)
		{
			return -1;
		}
		if (mn1 == 02 && yr1 % 4 != 0 && dy1>28)
		{
			return -1;
		}
		if (mn1 == 02 && yr1 % 4 != 0 && dy1>28)
		{
			return -1;
		}
		if (yr1<yr2)
		{
			return 1;
		}
		if (yr1>yr2)
		{
			return 2;
		}
		if (yr1 == yr2)
		{
			if (mn1>mn2)
			{
				return 2;
			}
			if (mn1<mn2)
			{
				return 1;
			}
			if (mn1 == mn2)
			{
				if (dy1>dy2)
				{
					return 2;
				}
				if (dy1<dy2)
				{
					return 1;
				}
				if (dy1 == dy2)
				{
					return 0;
				}
			}
		}

	}
	else
	{
		return -1;
	}
}