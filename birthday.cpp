#include <iostream>

std::string name;
void happyBirthday();

int main(){

    std::cout << "What is your name?: "; 
    std::cin >> name; 

    happyBirthday();  //parenthesis invoke function, think of as telephone
    
    return 0;
}

void happyBirthday(){
    for(int i = 0; i < 2; i++){
        std::cout << "Happy Birthday " << '\n'; 
    }
    std::cout << "Happy Birthday dear " << name << "!" << '\n';
    std::cout << "Happy Birthday to you!"<< '\n';
    
}
