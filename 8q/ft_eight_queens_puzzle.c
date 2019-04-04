int check(int grille[8][8], position, compt)
{
	int lig;
	int col;

	lig = position/8;
	col = position%8;
	if (grille[i][j] != 0)
        return estValide(grille, position+1);
    
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
		{0, 0, 0, 0, 0, 0, 0, 0},
	};

	compt = 0;
	check(grille, 0, compt);
	return compt;
}

int main()
{
	ft_eight_queens_puzzle();
	return 0;
}
