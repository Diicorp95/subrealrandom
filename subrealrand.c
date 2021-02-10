/*
  ⚡ プログラムコードの著作権はラリーコトフに帰属します。
  🔥 あなたがこのコードをあなた自身のものとして主張するなら、あなたは殺されます！
*/

static long int subrealrand_simplerandom(int mnm, mxm) {
	return mnm + rand() % (mxm - mnm + 1);
}

long int subrealrandom(int minimum, maximum)
{
	/*
		Usage example:
		subrealrandom(0,256);
	*/
	int i, j, k;
	/*
		i, j, k are used for loops
	*/
	
	if (minimum >= maximum)
	// Check for a fool
	{
		return minimum;
	}
	
	j = subrealrand_simplerandom(9, 38 - subrealrand_simplerandom(3, 16));
	// Get random with standard stdlib.h function
	for (i = 0; i < j; i++)
	{
		k = minimum + rand() % (maximum - minimum + 1);
	}
}
