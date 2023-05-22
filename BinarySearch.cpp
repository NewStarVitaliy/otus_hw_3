#include <ctime>
#include "checkValue.h"
#include "highScore.h"
#include "randomValue.h"



int main(){
	// take random_value

    int random_value = randomValue();
    

	// Ask about name
	std::cout << "Hi! Enter your name, please:" << std::endl;
	std::string user_name;
	std::cin >> user_name;

	//search Value and check attempts
	int attempts = CheckValue(random_value);
	int HightScoreTable = HighScore(user_name, attempts);
	if (HightScoreTable == -1){
		std::cout << "HighScoreTable.txt Error" << std::endl;
	}
	return 0;


}