#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


template <typename T1, typename T2>
class Calculator{
public:
      Calculator(T1 first, T2 second);    
      Calculator( const Calculator<T1, T2>& otherCalculator);      
      void setValue1(T1 first);
      void setValue2(T2 second);
      T1 add();
      T1 multiply();
      T1 subtract();
      T1 divide();
 private:
      T1 number1;
      T2 number2;
 };

 template <typename T1, typename T2>
 Calculator<T1, T2>::Calculator(T1 first, T2 second)
      :number1(first), number2(second)
 {}

 template <typename T1, typename T2>
 Calculator<T1, T2>::Calculator(const Calculator<T1, T2>& otherCalculator)
      :number1(otherCalculator.number1), number2(otherCalculator.number2)
 {}

 template <typename T1, typename T2>
 void Calculator<T1, T2>::setValue1(T1 first){
      number1 = first;
 }

 template <typename T1, typename T2>
 void Calculator<T1, T2>::setValue2(T2 second){
      number2 = second;
 }

 template <typename T1, typename T2>
 T1 Calculator<T1, T2>::add(){
      T1 answer = number1 + number2;
      return answer;
 }

template <typename T1, typename T2>
T1 Calculator<T1, T2>::multiply(){
      T1 answer = number1 * number2;
      return answer;
}


template <typename T1, typename T2>
T1 Calculator<T1, T2>::divide(){
      T1 answer = number1 / number2;
      return answer;
}


template <typename T1, typename T2>
T1 Calculator<T1, T2>::sub(){
      T1 answer = number1 - number2;
      return answer;
}

int main(){
      Calculator<int,int> simpleCalc(42, 3);
      cout << "Adding: " << simpleCalc.add() << endl;
      cout << "Multiplying: " << simpleCalc.multiply() << endl;
      cout << "Subracting: " << simpleCalc.sub() << endl;
      cout << "Sividing: " << simpleCalc.divide() << endl;
      simpleCalc.setValue1(7);
      cout << endl;

      Calculator<int,int> copyCalc( simpleCalc);
      cout << "Adding: " << simpleCalc.add() << endl;
      cout << "Multiplying: " << simpleCalc.multiply() << endl;
      cout << "Subracting: " << simpleCalc.sub() << endl;
      cout << "Sividing: " << simpleCalc.divide() << endl;
      cout << endl;

      Calculator<float,double> realCalc(1.41421, 2.718281828459045);
      cout << "Adding: " << simpleCalc.add() << endl;
      cout << "Multiplying: " << simpleCalc.multiply() << endl;
      cout << "Subracting: " << simpleCalc.sub() << endl;
      cout << "Sividing: " << simpleCalc.divide() << endl;
      cout << endl;
      
      return 0;
}
