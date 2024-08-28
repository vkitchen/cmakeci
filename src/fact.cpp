int fact(int n) {
	if (n == 0)
		return 1;

	int res = n;
	for (; n > 1; n--)
		res *= n - 1;

	return res;
}

int fact_r(int n) {
	if (n <= 1)
		return 1;
	return n * fact_r(n - 1);
}
