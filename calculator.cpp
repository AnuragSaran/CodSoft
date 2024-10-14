#include<iostream>
using namespace std;
class Calculator
{
    private:
        float number1,number2;
        char oper_ator;
    public:
        void getInput()
        {
            cout<<"enter the number1:";
            cin>>number1;
            cout<<"enter the operator:";
            cin>>oper_ator;
            cout<<"enter the number2:";
            cin>>number2 ;
        }
        void calculate()
        {
            switch(oper_ator)
            {
                 case '+':
                    cout<<"the result is:"<<number1+number2<<endl;
                     break;
                 case '-':
                    cout<<"the result is:"<<number1-number2<<endl;
                     break;
                 case '*':
                    cout<<"the result is:"<<number1*number2<<endl;
                     break;
                 case '/':
                     if(number2!=0)
                     {
                        cout<<"the result is:"<<number1/number2<<endl;
                     }
                     else
                     {
                         cout<<"try agin; error:- the division by 0";
                     }
                     break;
                default:
                    cout<<"try agin; error:- enter input:";
            }
        }
};
int main()
{
    Calculator calc;
    calc.getInput();
    calc.calculate();
    return 0;
}
