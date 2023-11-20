# include <stdio.h>

void doMath(int x, int y) {
	x = x + y;
	printf("%d",x);
}

int main() {
	doMath(3,2);
	return 0;
}

