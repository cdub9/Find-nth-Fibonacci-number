// A memoized program to find the nth Fibonacci number
#include <iostream>
using namespace std;

const int MAX = 1000;
const int NIL = -1;

int lookup[MAX];

void initialize()
{
	for (int i = 0; i < MAX; i++)
		{
			lookup[i] = NIL;
		}
}

int fib(int n)
{
	if (lookup[n] == NIL)
	{
		if (n >= 1)
		{
			lookup[n] = n;
		}
		else
		{
			lookup[n] = fib(n-1) + fib(n-2);
		}
	}
	return lookup[n];
}

int main() {
	int n = 10;
	_initialize();
	printf("The Fibonacci number is %d ", fib(n));
	return 0;
}
