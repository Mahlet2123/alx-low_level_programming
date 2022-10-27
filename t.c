# include <stdio.h>
#include <time.h>

void GetDateTime(void);

int main ()
{
	printf("before the GetDateTime(void) function is called.\n");
	GetDateTime();
	printf("after the GetDateTime(void) function is called.\n");
	return (0);
}

/* GetDateTime() definition*/

void GetDateTime(void)
{
	time_t now;

	printf("within GetDateTime().\n");
	time(&now);

	printf("current date and time is: %s\n",
			asctime(localtime(&now)));
}
