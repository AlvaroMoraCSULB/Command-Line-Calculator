#include <iostream>
#include <cmath>
#include <iomanip>
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
using namespace std;
const double pi = 3.141593;
const double euler = 2.71828;
template<class T>
class operations {
public:
    T add(T num, T num2) {
        return num + num2;
    }

    T subtract(T num, T num2) {
        return num - num2;
    }
    T multiply(T num, T num2) {
        return num * num2;
    }

    T divide(T num, T num2) {
        if (num2 != 0) {
            return num / num2;
        } else {
            cout << "Undefined." << endl;
            return 0; // You might want to handle division by zero differently
        }
    }
    T mod(T num, T num2){
        return fmod(num, num2);
    }
    T square(T num){
        return pow(num, 2);
    }
    T Sqrt(T num){
        if(num> 0){
            return sqrt(num);
        }else{
            cout<<"invalid input"<<endl;
        }
    }
    T power(T base, T exponent) {
        return pow(base, exponent);
    }
    T absval(T num){
        return abs(num);
    }
    T inverse(T num){
        if(num == 0){
            cout<<"cannot divide by zero"<<endl;
        }else{
            return 1/num;
        }
    }
    T Base10(T num){
        return pow(10, num);
    }
    T factorial(T num){
        if(num == 0 || num == 1){
            return 1;
        }else{
            return num * factorial(num - 1);
        }
    }

    T factorialTailRec(T num, T result = 1) {
        if (num == 0) {
            return result;
        }
        return factorialTailRec(num - 1, num * result);
    }

    T log(T num ){
        return log10(num);
    }
    T ln(T num){
        return log10(num)/ log10(euler);
    }
    T sine(T num){
        return sin((num*(pi/180)));
    }
    T cosine(T num){
        return cos((num*(pi/180)));
    }
    T tangent(T num){
        return tan((num*(pi/180)));
    }
    T cotan(T num){
        return 1/tan((num*(pi/180)));
    }
    T csc(T num){
        return 1/sine(num);
    }
    T sec(T num){
        return 1/cosine(num);
    }
    void menu() {
        T choice;
        T choice2;
        cout<< "Choose a Whole or decimal number: ";
        cin >> choice;
        bool validinput = true;
        //cout<<setprecision(2)<<showpoint;
        cout<<"1. Addition"<<"\t 2. Subtract \t  3. Multiply \t  4. Division\n 5. Modulus\t6. Square\t 7. Sqrt \t 8. Exponent"
                << endl;
        cout << " 9. Abs value\t10. Inverse\t 11. 10^x\t 12. Factorial\n 13. Log \t14. ln \t\t 15. Trigonometry"
             << endl;
        int op;
        cout << "Choose your operation by typing the number: ";
        cin >> op;
       // cout << endl;
        switch(op) {
            case 1:
                cout << "What number do you want to add " << choice << " with?: ";
                cin >> choice2;
                cout << "Your answer is " << add(choice, choice2) << endl;
                break;
            case 2:
                cout << "What number do you want to subtract" << choice << " with?:  ";
                cin >> choice2;
                cout << endl;
                cout << "Your answer is " << subtract(choice, choice2) << endl;
                break;
            case 3:
                cout << "What number do you want to multiply" << choice << " with?: ";
                cin >> choice2;
                cout << endl;
                cout << "Your answer is " << multiply(choice, choice2) << endl;
                break;
            case 4:
                cout << "What number do you want to divide " << choice << " with?: ";
                cin >> choice2;
                cout << endl;
                cout << "Your answer is " << divide(choice, choice2) << endl;
                break;
            case 5:
                cout << "What number do you want to mod " << choice << " with?: ";
                cin >> choice2;
                cout << choice << " mod " << choice2 << " = " << mod(choice, choice2) << endl;
                break;
            case 6:
                cout << endl;
                cout << "Your answer is " << square(choice) << endl;
                break;
            case 7:
                cout << "Sqrt(" << choice << ") = " << Sqrt(choice) << endl;
                break;
            case 8:
                cout << "To what power do you want to raise " << choice << " to: ";
                cin >> choice2;
                cout << choice <<"^" << choice2 << " = " << power(choice, choice2) << endl;
                break;
            case 9:
                cout << "The |" << choice << "| = " << absval(choice) << endl;
                break;
            case 10:
                cout << "The inverse of " << choice << " = " << inverse(choice) << endl;
                break;
            case 11:
                cout << "10^" << choice << " = " << Base10(choice) << endl;
                break;
            case 12:
                cout << choice << "!" << " = " << factorial(choice) << endl;
                break;
            case 13:
                cout << "log(" << choice << ") = " << log(choice) << endl;
                break;
            case 14:
                cout << "ln(" << choice << ") = " << ln(choice) << endl;
                break;
            case 15:
                    cout << "1. sin \t2. cosine\t3. tan\n 4. csc\t     5. sec\t"<<"     "<<"6. cotan" << endl;
                    cout << "What trig function?: ";
                    int trig;
                    cin >> trig;
                    cout << endl;
                    int kb;
                        switch (trig) {
                            case 1:
                                cout<<"1. degrees\t2.radians"<<endl;
                                cout << "What mode do you want the answer in: ";
                                cin >> kb;
                                cout << endl;
                                switch(kb){
                                    case 1:
                                        cout << "sin(" << choice << ") = " << sine(choice) << endl;
                                        break;
                                    case 2:
                                        cout << "sin(" << choice << ") = " << sin(choice) << endl;
                                        break;
                                    default:
                                        validinput = false;
                                        break;
                                }
                                break;

                            case 2:
                                cout<<"1. degrees\t2.radians"<<endl;
                                cout << "What mode do you want the answer in: ";
                                cin >> kb;
                                cout << endl;
                                switch(kb){
                                    case 1:
                                        cout << "cos(" << choice << ") = " << cosine(choice) << endl;
                                        break;
                                    case 2:
                                        cout << "cos(" << choice << ") = " << cos(choice) << endl;
                                        break;
                                    default:
                                        validinput = false;
                                        break;
                                }
                                break;
                            case 3:
                                cout<<"1. degrees\t2.radians"<<endl;
                                cout << "What mode do you want the answer in: ";
                                cin >> kb;
                                cout << endl;
                                switch(kb){
                                    case 1:
                                        cout << "tan(" << choice << ") = " << tangent(choice) << endl;
                                        break;
                                    case 2:
                                        cout << "tan(" << choice << ") = " << tan(choice) << endl;
                                        break;
                                    default:
                                        validinput = false;
                                        break;
                                }
                                break;
                            case 4:
                                cout<<"1. degrees\t2.radians"<<endl;
                                cout << "What mode do you want the answer in: ";
                                cin >> kb;
                                cout << endl;
                                switch(kb){
                                    case 1:
                                        cout << "csc(" << choice << ") = " << csc(choice) << endl;
                                        break;
                                    case 2:
                                        cout << "csc(" << choice << ") = " << 1/sin(choice) << endl;
                                        break;
                                    default:
                                        validinput = false;
                                        break;
                                }
                                break;
                            case 5:
                                cout<<"1. degrees\t2.radians"<<endl;
                                cout << "What mode do you want the answer in: ";
                                cin >> kb;
                                cout << endl;
                                switch(kb){
                                    case 1:
                                        cout << "sec(" << choice << ") = " << sec(choice) << endl;
                                        break;
                                    case 2:
                                        cout << "sec(" << choice << ") = " << 1/cos(choice) << endl;
                                        break;
                                    default:
                                        validinput = false;
                                        break;
                                }
                               break;
                            case 6:
                                cout<<"1. degrees\t2.radians"<<endl;
                                cout << "What mode do you want the answer in: ";
                                cin >> kb;
                                cout << endl;
                                switch(kb){
                                    case 1:
                                        cout << "cot(" << choice << ") = " << cotan(choice) << endl;
                                        break;
                                    case 2:
                                        cout << "cot(" << choice << ") = " << 1/tan(choice) << endl;
                                        break;
                                    default:
                                        validinput = false;
                                        break;
                                }
                                break;
                            default:
                                validinput = false;
                                break;
                        }


            default:
                validinput = false;
                if(!validinput) {
                    cout << "Invalid input" << endl;
                }
                break;

        }
    }
};
int main() {
    operations<double> ops;
    ops.menu();
    return 0;
}

