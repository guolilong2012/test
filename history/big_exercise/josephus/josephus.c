#include <stdio.h>

/* n为玩游戏的人数，m为报的数 */
void josephus(int m, int n)
{
	int i, cnt = 0, out = 0, a[n + 1];

	for (i = 0; i < n + 1; i++)
		a[i] = 1;
	while (out < n) {
		for (i = 1; i <= n; i++)
			if (1 == a[i]) {
				cnt++;
				if (cnt == m) {
					cnt = 0;
					a[i] = 0;
					out++;
					printf("%3d:%3d out.", out, i);
					if (out % 5 == 0)
						printf("\n");
				}
			}
	}
	printf("\n");
}
