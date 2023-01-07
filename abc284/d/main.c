#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef	long long ll;
typedef struct Pair {
	ll n;
	ll ex;
}	Pair;
typedef struct {
	Pair	*arr;
	int	len;
	int	cap;
}	Vector;
Vector	*resize_vector(Vector *self, int cap) {
	int byte = sizeof(Pair);
	int size = cap * byte;
	Pair *tmp = realloc(self->arr, size);
	if (!tmp)
		return NULL;
	self->arr = tmp;
	self->cap = cap;
	return self;
}
void	push_vector(Vector *self, Pair elem) {
	if (self->len >= self->cap) {
		if (! resize_vector(self, self->cap * 2))
			printf("failed resize memory allocate\n");
	}
	self->arr[self->len] = elem;
	self->len++;
}
Vector	*new_vector(int cap) {
	Vector *self = calloc(1, sizeof(*self));
	if (!self)
		return NULL;
	self->cap = cap;
	self->arr = calloc(self->cap, sizeof(Pair));
	if (!self->arr) {
		free(self);
		return NULL;
	}
	return self;
}
Vector *prime_factorize(ll n) {
	Vector *vector = new_vector(8);

	ll j = 0;
	ll i; 
	for (i = 2; i*i*i <= n; i++) {
		if (n % i != 0)
			continue;

		ll ex = 0;

		while (n % i == 0)  {
			ex++;
			n /= i;
		}
		
		Pair pair;
		pair.n = i;
		pair.ex = ex;
		push_vector(vector, pair);
		j++;
	}
	
	if (n != 1) {
		Pair last;
		last.n = n;
		last.ex = 1;
		push_vector(vector, last);
	}
	return vector;
}

int	main(void) {
	int T;
	scanf("%d", &T);
	// printf("%d\n", T);

	ll n;
	for (int i = 0; i < T; i++) { // 10回
		scanf("%lld", &n);
		
		ll p = 0, q = 0;
		for (ll j = 2; j*j*j <= n; j++) {
			if (n % j != 0)
				continue;
			if ((n / j) % j == 0) {
				p = j;
				q = n / (j*j);
			} else {
				q = j;
				p = (ll)sqrt(n / j);
			}
			break;
		}
		printf("%lld %lld\n", p, q);
	}
	
	return (0);
}
