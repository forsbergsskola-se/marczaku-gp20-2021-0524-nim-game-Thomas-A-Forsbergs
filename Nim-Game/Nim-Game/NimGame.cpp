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

	cout << "Welcome to a game of Nim, don't draw the last match." << endl << endl;

	while (matchesCurrent > 0)
	{
		int player1MatchesDrawn = 0;
		MatchesDisplayASCII(matchesCurrent);

		cout << "Player 1, please draw 1, 2 or 3 matches." << endl;
		cin >> player1MatchesDrawn;
		switch (player1MatchesDrawn)
		{
		case 1: matchesCurrent -= player1MatchesDrawn;
			break;
		case 2: matchesCurrent -= player1MatchesDrawn;
			break;
		case 3: matchesCurrent -= player1MatchesDrawn;
			break;
		default: cout << "Cannot draw less than 1 or more than 3 matches. You forfeit your turn." << endl;
		}

		if (matchesCurrent == 0)
		{
			cout << "Player 1 lost." << endl;
			cout << "Game finished." << endl;
		}
		else
		{
			int player2MatchesDrawn = 0;
			MatchesDisplayASCII(matchesCurrent);
			cout << "Player 2, please draw 1, 2 or 3 matches." << endl;
			cin >> player2MatchesDrawn;
			switch (player2MatchesDrawn)
			{
			case 1: matchesCurrent -= player2MatchesDrawn;
				break;
			case 2: matchesCurrent -= player2MatchesDrawn;
				break;
			case 3: matchesCurrent -= player2MatchesDrawn;
				break;
			default: cout << "Cannot draw less than 1 or more than 3 matches. You forfeit your turn." << endl;
			}
			cout << endl;
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
