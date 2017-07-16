#include <stdio.h>

main() {
	long long a, b, c, d, e;
	int i, n, t;

	scanf_s("%d", &t); 
	
	while (t--) { 
		a = 0; 
		b = 0; 
		c = 0; 
		d = 1; 
		e = 1; 
		
		scanf_s("%d", &n);
		
		for (i = 0; i < n; i++) { 
			a = b; 
			b = c; 
			c = d; 
			d = e; 
			e = a + b + c + d; 
		}
		printf_s("%lld\n", e); 
	}
}
