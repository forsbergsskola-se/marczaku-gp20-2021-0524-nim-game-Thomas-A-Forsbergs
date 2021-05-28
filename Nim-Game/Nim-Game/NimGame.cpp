#include <iostream>
using namespace std;

void MatchesDisplayASCII(int matchesCurrent);
void NimGame();

int main()
{
	NimGame();
}

void NimGame()
{
	int matchesCurrent = 12;
	int player1MatchesDrawn = 0;
	int player2MatchesDrawn = 0;

	cout << "Welcome to a game of Nim, don't draw the last match." << endl;

	while (matchesCurrent > 0)
	{
		MatchesDisplayASCII(matchesCurrent);

		cout << "Player 1, please draw 1, 2 or 3 matches." << endl;
		cin >> player1MatchesDrawn;
		matchesCurrent -= player1MatchesDrawn;

		if (matchesCurrent == 0)
		{
			cout << "Player 1 lost." << endl;
			cout << "Game finished." << endl;
		}
		else
		{
			MatchesDisplayASCII(matchesCurrent);
			cout << "Player 2, please draw 1, 2 or 3 matches." << endl;
			cin >> player2MatchesDrawn;
			cout << endl;
			matchesCurrent -= player2MatchesDrawn;
			if (matchesCurrent == 0)
			{
				cout << "Player 2 lost." << endl;
				cout << "Game finished." << endl;
			}
		}
	}
}

void MatchesDisplayASCII(int matchesCurrent)
{
	cout << "Matches left: ";
	for (int i = 0; i < matchesCurrent; i++)
	{
		cout << "|";
	}
	cout << endl;
}
