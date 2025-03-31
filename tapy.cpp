#include<iostream>
#include<ctime>
#include<string>

std::string correctAnswer();
std::string wrongAnswer();

// глобальные переменные 
int kolQuestion = 0;
int answer = 0;

int main()
{
    srand(time(NULL));

    std::cout << "TaPy - программа для проверки ваших знаний таблицы умножения" << std::endl;
    std::cout << "Сколько вопросов задать ?(введите число): ";
    std::cin >> kolQuestion;
    
    for(int i = 0; i < kolQuestion;i++){
    int a = 1 + rand() % 9;
    int b = 1 + rand() % 9;
    std::cout << "Сколько будет " << a << "*" << b <<":";
    std::cin >> answer;
    if(answer == a * b){
        std::cout << correctAnswer() << std::endl;
    }else{
        std::cout << wrongAnswer() << std::endl;
    }
  }
}

std::string correctAnswer(){
  int random = 1 + rand() % 5; 
  switch(random)
  {
    case 1:
      return "Молодец!";

    case 2:
      return "Правильно!";

    case 3:
      return "Отлично!";

    case 4:
      return "Так держать!";

    case 5:
      return "Молодчина!";
  }
}

std::string wrongAnswer(){
  int random = 1 + rand() % 5;
  switch(random)
  {
    case 1:
      return "Неправильно!";
    
    case 2:
      return "Попробуй еще раз";

    case 3:
      return "У тебя ошибочка!";
    
    case 4:
      return "Неугадал!";

    case 5:
      return "Увы, но вы ошиблись!";
  }
}



