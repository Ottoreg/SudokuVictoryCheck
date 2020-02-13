#include <iostream>
#include <array>
#include <vector>
#include <algorithm>


using namespace std;

void Affichage(vector< vector<int> > tab)
{
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++)
		{
			cout << tab[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

bool CheckLigne(vector<int> tab) 
{
	sort(tab.begin(), tab.end());
	for (int i = 1; i < 9; i++)
	{
		if (tab[i - 1] == i)
		{
			cout << i;
		}
		else return false;
	}
	cout << endl;
	return true;
}

bool CheckColonne(vector< vector<int> > tab, int indexCol) 
{
	vector<int> tabTemp;
	for (int i = 0; i < 9; i++)
	{
		tabTemp.push_back(tab[i][indexCol]);
	}

	sort(tabTemp.begin(), tabTemp.end());
	
	for (int i = 1; i < 10; i++)
	{
		if (tabTemp[i - 1] == i)
		{
			cout << i;
		}
		else return false;
	}
	cout << endl;
	return true;
}

bool CheckCases(vector< vector<int> >tab, int indexCase) {
	
	vector<int> tempTab;
	
	switch (indexCase)
	{
	case 0:
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				tempTab.push_back(tab[i][j]);
			}
		}

		sort(tempTab.begin(), tempTab.end());

		for (int i = 1; i < 10; i++)
		{
			if (tempTab[i - 1] == i)
			{
				cout << i;
			}
			else return false;
		}
		cout << endl;
		return true;

		break;
	case 1:
		for (int i = 3; i < 6; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				tempTab.push_back(tab[i][j]);
			}
		}

		sort(tempTab.begin(), tempTab.end());

		for (int i = 1; i < 10; i++)
		{
			if (tempTab[i - 1] == i)
			{
				cout << i;
			}
			else return false;
		}
		cout << endl;
		return true;

		break;
	case 2:
		for (int i = 6; i < 9; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				tempTab.push_back(tab[i][j]);
			}
		}

		sort(tempTab.begin(), tempTab.end());

		for (int i = 1; i < 10; i++)
		{
			if (tempTab[i - 1] == i)
			{
				cout << i;
			}
			else return false;
		}
		cout << endl;
		return true;

		break;
	case 3:
		for (int i = 0; i < 3; i++)
		{
			for (int j = 3; j < 6; j++)
			{
				tempTab.push_back(tab[i][j]);
			}
		}

		sort(tempTab.begin(), tempTab.end());

		for (int i = 1; i < 10; i++)
		{
			if (tempTab[i - 1] == i)
			{
				cout << i;
			}
			else return false;
		}
		cout << endl;
		return true;

		break;
	case 4:
		for (int i = 3; i < 6; i++)
		{
			for (int j = 3; j < 6; j++)
			{
				tempTab.push_back(tab[i][j]);
			}
		}

		sort(tempTab.begin(), tempTab.end());

		for (int i = 1; i < 10; i++)
		{
			if (tempTab[i - 1] == i)
			{
				cout << i;
			}
			else return false;
		}
		cout << endl;
		return true;

		break;
	case 5:
		for (int i = 6; i < 9; i++)
		{
			for (int j = 3; j < 6; j++)
			{
				tempTab.push_back(tab[i][j]);
			}
		}

		sort(tempTab.begin(), tempTab.end());

		for (int i = 1; i < 10; i++)
		{
			if (tempTab[i - 1] == i)
			{
				cout << i;
			}
			else return false;
		}
		cout << endl;
		return true;

		break;
	case 6:
		for (int i = 0; i < 3; i++)
		{
			for (int j = 6; j < 9; j++)
			{
				tempTab.push_back(tab[i][j]);
			}
		}

		sort(tempTab.begin(), tempTab.end());

		for (int i = 1; i < 10; i++)
		{
			if (tempTab[i - 1] == i)
			{
				cout << i;
			}
			else return false;
		}
		cout << endl;
		return true;

		break;
	case 7:
		for (int i = 3; i < 6; i++)
		{
			for (int j = 6; j < 9; j++)
			{
				tempTab.push_back(tab[i][j]);
			}
		}

		sort(tempTab.begin(), tempTab.end());

		for (int i = 1; i < 10; i++)
		{
			if (tempTab[i - 1] == i)
			{
				cout << i;
			}
			else return false;
		}
		cout << endl;
		return true;

		break;
	case 8:
		for (int i = 6; i < 9; i++)
		{
			for (int j = 6; j < 9; j++)
			{
				tempTab.push_back(tab[i][j]);
			}
		}

		sort(tempTab.begin(), tempTab.end());

		for (int i = 1; i < 10; i++)
		{
			if (tempTab[i - 1] == i)
			{
				cout << i;
			}
			else return false;
		}
		cout << endl;
		return true;

		break;
	default:
		break;
	}
	return true;
}

bool CheckVictory(vector< vector<int> > tab)
{
	bool tempBool = true;
	// verif lignes
	for (int i = 0; i < 9; i++)
	{
		cout << "ligne " << i << " ";
		if (CheckLigne(tab[i]))
		{
			cout << " true" << endl;
		}
		else {
			cout << " false" << endl;
			return false;
		}
	}
	cout << endl;

	// verfi colonnes
	for (int i = 0; i < 9; i++)
	{
		cout << "colonne " << i << " ";
		if (CheckColonne(tab, i))
		{
			cout << " true" << endl;
		}
		else {
			cout << "false" << endl;
			return false;
		}
	}
	cout << endl;

	//verif Case9x9

	for (int i = 0; i < 9; i++)
	{
		cout << "Case 9x9 " << i << " ";
		if (CheckCases(tab,i))
		{
			cout << "true" << endl;
		}
		else {
			cout << "false" << endl;
			return false;
		}
	}

	return tempBool;
}


int main()
{

	// le sudoku solver doit verifier les lignes / colonne / case9x9
	// si toutes les lignes, toutes les colonnes et toutes les case9x9 
	// sont composés des 9 chiffres de 1 a 9 alors victoire

	vector< vector<int> > tabFalse
	{
		{ 3, 5, 2, 9, 1, 8, 6, 7, 4 },
		{ 8, 9, 7, 2, 4, 6, 5, 1, 3 },
		{ 6, 4, 1, 7, 5, 3, 2, 8, 9 },
		{ 7, 8, 3, 5, 6, 9, 4, 2, 1 },
		{ 9, 2, 6, 1, 3, 4, 7, 5, 8 },
		{ 4, 1, 5, 8, 2, 7, 9, 3, 6 },
		{ 8, 6, 4, 3, 7, 5, 8, 9, 2 },
		{ 2, 7, 8, 4, 9, 1, 3, 6, 5 },
		{ 5, 3, 9, 6, 8, 2, 1, 4, 7 }
	};

	vector< vector<int> > tabTrue
	{
		{ 3, 5, 2, 9, 1, 8, 6, 7, 4 },
		{ 8, 9, 7, 2, 4, 6, 5, 1, 3 },
		{ 6, 4, 1, 7, 5, 3, 2, 8, 9 },
		{ 7, 8, 3, 5, 6, 9, 4, 2, 1 },
		{ 9, 2, 6, 1, 3, 4, 7, 5, 8 },
		{ 4, 1, 5, 8, 2, 7, 9, 3, 6 },
		{ 1, 6, 4, 3, 7, 5, 8, 9, 2 },
		{ 2, 7, 8, 4, 9, 1, 3, 6, 5 },
		{ 5, 3, 9, 6, 8, 2, 1, 4, 7 }
	};

	Affichage(tabFalse);

	bool isTabFalseSolved = CheckVictory(tabFalse);

	if (!isTabFalseSolved)
	{
		cout << "sudoku = false" << endl;
	}
	else 
	{
		cout << "sudoku = true" << endl;
		cout << endl;
	}

	Affichage(tabFalse);

	Affichage(tabTrue);

	bool isTabTrueSolved = CheckVictory(tabTrue);

	if (isTabFalseSolved)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "sudoku = true" << endl;
		cout << endl;
	}

	Affichage(tabTrue);

}
