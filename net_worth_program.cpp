#include <iostream>
#include <iomanip>

using namespace std;

class PersonNetWorth
{
                        // should create asset classes
    public:
        void add_savings(int deposit);
        int get_net_worth();
        

    private:

        int savings = 0;
        int GOOG = 1*164;
        int gold = 5;
};

void PersonNetWorth::add_savings(int deposit)
{
    savings = savings + deposit;

}

int PersonNetWorth::get_net_worth()
{
    return savings;
    return GOOG;
    return gold;
                //find way to get all assets displayed
}

void display(PersonNetWorth name)
{
    cout << name.get_net_worth() << endl;

}


int main()
{
    PersonNetWorth shelia;
    shelia.add_savings(500);
    display(shelia);
    
    //std::cin >> age;


    return 0;
}