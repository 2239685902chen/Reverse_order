#include <stdio.h>
#include <string.h>
#include <assert.h>
void Reverse_order(char* q, int w)
{
	assert(q != NULL);
	char* left = q;
	char* right = q + w - 1;
	while (left < right)
	{
		char r = *left;
		*left = *right;
		*right = r;
		left++;
		right--;
	}
}
int main()
{
	char q[256] = { 0 };
	gets(q);
	int w = strlen(q);
	printf("ÕýÐòµÄ×Ö·û´®£º%s\n", q);
	Reverse_order(q,w);
	printf("ÄæÐòºóµÄ×Ö·û´®£º%s\n", q);
	return 0;
}