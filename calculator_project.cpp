#include <iostream>
// incorperating pointers to know how they work
int main()
{
    int age;
    std::cout<<"eneter your age" << std::endl;
    std::cin >> age;

    int* p_age = &age;

    int dog_age;
    if (*p_age < 1){

    std::cout<<"invalid age, run again" << std::endl;
    }
    else if(*p_age == 1){
        dog_age = 15;
        std::cout<<"you are " + std::to_string(dog_age) + " years old" << std::endl;
    }
    
    else if(*p_age == 2){
        dog_age = 24;
        std::cout<<"you are " + std::to_string(dog_age) + " years old" << std::endl;
    }
    else if(*p_age > 2){
        dog_age = 24 + ((age-2)*5);
        std::cout<<"you are " + std::to_string(dog_age) + " years old" << std::endl;
    }

    return 0;
}