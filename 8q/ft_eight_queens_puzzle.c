int check(int grille[8][8], position, compt)
{
	int lig;
	int col;
	int k;

	lig = position/8;
	col = position%8;
	k = 1;
	if (grille[i][j] != 0)
        return estValide(grille, position+1);
    while (k < 8)
    {
    	if (ligne(k, grille, lig) && column(k, grille, col) && diago(k, grille, lig, col))
    	{
    		grille[lig][col] = k;
    		if ()
    	}
    }





        if (absentSurLigne(k,grille,i) && absentSurColonne(k,grille,j) && absentSurBloc(k,grille,i,j))
        {
            grille[i][j] = k;

            if ( estValide (grille, position+1) )
                return true;
        }
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
