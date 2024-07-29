unsigned int sumTriple(unsigned int x, unsigned int y)
{
	unsigned int result = 0;
	if (x == y)
	{
		result = 3 * (x + y);
	}
	else
	{
		result = x + y;
	}
	return result;
}

int subtractTriple(int x, int y)
{

	if (x == y)
	{
		return (x - y);
	}
	return (x - y) * 3;
}

int invertedSubtractTriple(int x, int y)
{

	if (x == y)
	{
		return (x - y);
	}
	return (x - y);
}