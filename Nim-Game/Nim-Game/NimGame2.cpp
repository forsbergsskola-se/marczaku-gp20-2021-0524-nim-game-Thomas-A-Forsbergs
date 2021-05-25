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

	cout << "Welcome to a game of Nim, don't draw the last match.\n";

	for (int i = 0; i < matchesCurrent; i++)	{
		matchesASCII += "|";
	}
}