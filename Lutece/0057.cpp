#include <cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int a[3][3];
		int b[3][3];
		int c[3][3];
		for (int d1 = 0; d1 < 3; ++d1)
		{
			scanf("%d %d %d", &a[d1][0], &a[d1][1], &a[d1][2]);
		}
		for (int d1 = 0; d1 < 3; ++d1)
		{
			scanf("%d %d %d", &b[d1][0], &b[d1][1], &b[d1][2]);
		}
		c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0] + a[0][2] * b[2][0];
		c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1] + a[0][2] * b[2][1];
		c[0][2] = a[0][0] * b[0][2] + a[0][1] * b[1][2] + a[0][2] * b[2][2];
		c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0] + a[1][2] * b[2][0];
		c[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1] + a[1][2] * b[2][1];
		c[1][2] = a[1][0] * b[0][2] + a[1][1] * b[1][2] + a[1][2] * b[2][2];
		c[2][0] = a[2][0] * b[0][0] + a[2][1] * b[1][0] + a[2][2] * b[2][0];
		c[2][1] = a[2][0] * b[0][1] + a[2][1] * b[1][1] + a[2][2] * b[2][1];
		c[2][2] = a[2][0] * b[0][2] + a[2][1] * b[1][2] + a[2][2] * b[2][2];
		printf("%d %d %d\n", c[0][0], c[0][1], c[0][2]);
		printf("%d %d %d\n", c[1][0], c[1][1], c[1][2]);
		printf("%d %d %d\n", c[2][0], c[2][1], c[2][2]);
		printf("\n");
	}
	return 0;
}
