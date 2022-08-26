int ClampInt(int n, int lower, int upper)
{
	int updatedNum = n;

	if (n <= lower)
		updatedNum = lower;
	else if (n >= upper)
		updatedNum = upper;

	return updatedNum;
}