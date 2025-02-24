#include <iostream>
#include <string>
#include <unistd.h>


using namespace std;

unsigned int microseconds = 10000;
unsigned int familiarity_maggie = 0;

int getInput();
void output(string in, string menu);  // Funktion deklariert
void greet();

int main() {
    greet();
    return 0;
}

int getInput() {
	int x;
    cin >> x;
    return x;
}


void output(string in, string menu) {
	cout << "\n";
	for (int i = 0; i < in.length(); i++) {
		cout << in[i];
		usleep(microseconds);
	}
	cout << "\n";
	cout << menu;
	cout << "\n";
}

void greet() {
	string sentence = "'Hi, I'm Maggie! Nice to meet ya!'\n";
    string menu = "[0] 'Hi, I'm Mark. Nice to meet you too!'\n"
                  "[1] 'Hi, umm... '\n"
                  "[2] *Ignore*\n";
	
	output(sentence, menu);

	int user_input = getInput();
	
	string answer;
	
	switch(user_input) {
	case 0:
		answer = "*Maggie smiles* You're in art class right? I saw you at the blackboard searching for this course.'";
		familiarity_maggie += 5;
		break;
	case 1:
		answer = "Right right, im with you in art class!\n"
				 "I saw you searching your name on the blackboard for the art course.\n"
				 "Thought i'd say hi... i dont really know anybody here so...\n";
		familiarity_maggie += 2;
		break;
	case 2:
		answer = "Okay...so youre not talking with me.. alright...\n"
				 "Something wrong today?\n";
			 
		break;
	default:
		answer = "0";
	}
	
	output(answer, "");
	
}