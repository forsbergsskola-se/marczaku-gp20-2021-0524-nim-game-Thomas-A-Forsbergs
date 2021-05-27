#include <iostream>
#include <random>
using namespace std;

int main() {
	cout << "Hello World!\n";
}

static void NimGame2() {
	int matchesCurrent = 12;
	char matchesASCII;
	int player1MatchesDrawn = 0;
	int player2MatchesDrawn = 0;
	//create new random

	cout << "Welcome to a game of Nim, don't draw the last match.\n";

	string MatchesDisplayASCII(int matchesCurrent) {
		char matchesASCII;
		matchesASCII = "";
		for (int i = 0; i < matchesCurrent; i++) {
			matchesASCII += "|";
		}

		cout << "Mathces left: " << matchesASCII << "\n";
		return matchesASCII;
	}

	while (matchesCurrent > 0)	{
		matchesASCII = MatchesDisplayASCII(matchesCurrent);

		cout << "Player 1, please draw 1, 2 or 3 matches.\n";
		cin >> player1MatchesDrawn;
		matchesCurrent -= player1MatchesDrawn;

		if (matchesCurrent == 0)		{
			cout << "Player 1 lost.\n";
			cout << "Game finished.\n";
		}		else		{
			MatchesDisplayASCII(matchesCurrent);
			cout << "Player 2, please draw 1, 2 or 3 matches.\n";
			//player2MatchesDrawn random
			cout << player2MatchesDrawn;
			matchesCurrent -= player2MatchesDrawn;
			if (matchesCurrent == 0) {
				cout << "Player 2 lost.\n";
				cout << "Game finished.\n";
			}
		}
	}
}