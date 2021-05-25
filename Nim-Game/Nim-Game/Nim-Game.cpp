// Nim-Game.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

static int getUserMatchDrawInput(int playerNumber, int totalMatches){
	std::cout << "Player " << playerNumber << ", please draw 1, 2 or 3 matches.";
	int player1Draw;
	int totalMatches;
	std::cin >> player1Draw;
	if (player1Draw < 1 || player1Draw > 3)	{
		std::cout << "Invalid amount of matches drawn.";
	}
	if (player1Draw > totalMatches)	{
		std::cout << "Not enough matches left to draw.";
	}
	return player1Draw;
}

static void drawMatches(int amount) {
	for (size_t i = 0; i < amount; i++)
	{
		std::cout << "|";
	}
	std::cout << "\n";
}

static int getValidUserMatchDrawInput(int playerNumber, int totalMatches) {
	while (true)
	{

	}
}

int main() {
    std::cout << "Hello World!\n";

    int matches = 24;

	while (matches > 0)
	{
		drawMatches(matches);
		matches -= getValidUserMatchDrawInput(1, matches);
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
