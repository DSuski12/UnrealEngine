#include <iostream>

void PrintIntroduction()
{
	std::cout << "\n\nYou a secret agent breaking into a secure server room...\n";
	std::cout << "Enter the correct code to continue...\n\n";
}


void PlayGame()
	{
	//Print welcom messages to the terminal 
	std::cout << "You are a secret agent breaking a secure server room...";
	std::cout << std::endl;
	std::cout << "Enter the code to continue...\n\n";

	// Declere 3 number code 
	const int CodeA = 4;
	const int CodeB = 3;
	const int CodeC = 2;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA + CodeB + CodeC;

	// Print sum and product to the terminal 
	std::cout << std::endl;
	std::cout << "+ There are 3 numbers in teh code" << std::endl;
	std::cout << "\n+ The codes add-up to: " << CodeSum << std::endl;
	std::cout << "\n+ The codes multiply to givae: " << CodeProduct << std::endl;

	// Store player guess
	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA + GuessB + GuessC;

	// Check if the playes guess is corect 
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "You win!";
	}
	else
	{
		std::cout << "You lose! ";
	}
	}

int main()
{
	while (true)
	{
		bool LevelComplete;
		PlayGame(); 
		std::cin.clear(); // Clears any errors
		std::cin.ignore();// Discards the buffer
	}
	return 0;
}