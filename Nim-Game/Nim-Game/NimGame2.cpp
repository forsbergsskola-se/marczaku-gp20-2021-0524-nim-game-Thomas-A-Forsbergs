#include <iostream>
#include <random>
using namespace std;

void MatchesDisplayASCII(int matchesCurrent);
void NimGame2();

int main() {
	cout << "Hello World!\n";
	NimGame2();
}

void NimGame2() {
	int matchesCurrent = 12;
	int player1MatchesDrawn = 0;
	int player2MatchesDrawn = 0;
	//create new random

	cout << "Welcome to a game of Nim, don't draw the last match.\n";

	while (matchesCurrent > 0)	{
		MatchesDisplayASCII(matchesCurrent);

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

void MatchesDisplayASCII(int matchesCurrent) {
	cout << "Matches left: ";
	for (int i = 0; i < matchesCurrent; i++) {
		cout << "|";
	}
	cout << endl;
}