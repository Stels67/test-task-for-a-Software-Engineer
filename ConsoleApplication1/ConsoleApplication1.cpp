// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

class ObjectParticle {
private:
    float particle = ((((-(1 / randomVariableInputViaConsole)) * nuclideL) * type_n_Reaction) * randomNumbersY);
    float randomNumbersY = 0.0 + rand() % 1; // uniformly distributed random numbers, interval 0.1 // {= 0.0 + rand() % 1}
    float nuclideL = 0.14; // the nuclide that the neutron collided with
    float type_n_Reaction = 54.126;
    float randomVariableInputViaConsole; // a random variable with a probability density
    string typeParticle;
public:
    void set_data(float y, string t) {
        randomVariableInputViaConsole = y;
        typeParticle = t;
    }

    void get_info() {
        cout << "\n - typeParticle: " << typeParticle << "\n - particle: " << particle << "\n - randomNumbersY: " << randomNumbersY << "\n - nuclideL: " << nuclideL << "\n - type_n_Reaction: " << type_n_Reaction << "\n - randomVariableInputViaConsole: " << randomVariableInputViaConsole << endl;
    } 

};

float main(){     
    setlocale(LC_ALL, "RU");

    float y1;
    std::cout << "Введите число: ";
    std::cin >> y1;

    ObjectParticle RSI;
    RSI.set_data( y1 , "RSI");
    RSI.get_info();

    return 0;

}