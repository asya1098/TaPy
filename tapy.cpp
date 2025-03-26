#include<iostream>
#include<ctime>

int main()
{
    srand(time(NULL));
    int kolQuestion = 0;
    int answer = 0;

    std::cout << "TaPy - программа для проверки ваших знаний таблицы умножения" << std::endl;
    std::cout << "Сколько вопросов задать ?(введите число): ";
    std::cin >> kolQuestion;
    
    for(int i = 0; i < kolQuestion;i++){
    int a = 1 + rand() % 9;
    int b = 1 + rand() % 9;
    std::cout << "Сколько будет " << a << "*" << b <<":";
    std::cin >> answer;
    if(answer == a * b){
        std::cout << "Молодец!Правильно!" << std::endl;
    }else{
        std::cout << "Увы, но вы ошиблись!" << std::endl;
    }
    }
}