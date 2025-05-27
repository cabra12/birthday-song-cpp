#include <iostream>

void happyBirthday(std::string name, int age);

int main(){
    std::string name;
    int age;

    std::cout << "What is your name?: "; 
    std::cin >> name; 

    std::cout << "How old are you today?: ";
    std::cin >> age;

    happyBirthday(name, age);  
    
    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << '\n';
    std::cout << "Here's your song: " << '\n';
    for(int i = 0; i < 2; i++){
        std::cout << "Happy Birthday to you!" << '\n'; 
    }
    std::cout << "Happy Birthday dear " << name << "!" << '\n';
    std::cout << "Happy Birthday to you!"<< '\n';
    std::cout << "You are " << age << " years old!" << '\n';
    
}
