#include <stdio.h>

int row(int grille [8][8], int row)
{
	int j;

	j = 0;
	while (j < 8)
	{
		if (grille[row][j] != 0)
			return 0;
		j++;
	}
	return 1;
}

int column(int grille [8][8], int col)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (grille[i][col] != 0)
			return 0;
		i++;
	}
	return 1;
}

int check(int grille [8][8], int col, int *compt)
{
	if (row(grille, 0) && columnuyè       (grille, 0) /*&& diago(grille, 0)*/)
	{
		grille[col][col] = 1;
	}
	*compt = *compt + 1;
	return 0;
}


int ft_eight_queens_puzzle(void)
{
	int compt;
	int grille[8][8] = 
	{
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},                     
		{0, 0, 0, 0, 0, 0, 0, 0}
	};

	compt = 0;
	check (grille, 0, &compt);
	printf("%d\n", compt);
	return 0;
}

int main()
{
	ft_eight_queens_puzzle();
	return 0;
}


// int triple(int *compt)
// {
//   *compt *= 3;
//   return 0;
// }

// int main()
// {
//     int *compt;

//     compt = 42;
//     triple(&compt);
//     printf("%d\n", compt);
//     // ft_eight_queens_puzzle();
//     return 0;
// }