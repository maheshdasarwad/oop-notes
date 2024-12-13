#include <iostream>
#include <exception>
#include <string>

using namespace std;

// Custom exception class for division by zero
class DivideException : public exception {
    private:
        string message;

    public:
        DivideException()
        {
            message = " Division by zero..!";
        }
        const char* what() const throw() {
            return message.c_str();
        }
};

class Calculator {
    public:
        double divide(float num1, float num2) {
            if (num2 == 0) {
                throw DivideException();
            }
            return num1 / num2;
        }
};

int main() {

    float num1 , num2;
    cout<<"Enter numerator : ";
    cin>>num1;

    cout<<"Enter dinominator : ";
    cin>>num2;
    
    Calculator obj;

    try {
        float result = obj.divide(num1 , num2);
        cout<<"\nResult = "<<result<<endl;
    }
    catch (const DivideException &e) {
        cout<<"\nError : "<< e.what()<<endl;
       
    }
    catch (...) {
        cout<<"\nUnknown error occurred...!"<<endl;
    }

    return 0;
}