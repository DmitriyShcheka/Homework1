/* Этот файл должен называться так же, как и тот, где находится объявление
 * соответствующей функции (с точностью, до расширения, естественно. То есть
 * этот должен быть Homework1.cpp) */

#include <iostream>
#include "Homework1.hpp"

using namespace std;
/* В задании был бесконечный цикл и такое выделение функции не очень полезно.
 * В функции выделяется то, что имеет высокий потенциал переиспользования. Такая
 * функция мало кому будет нужна */
void Hello(int k) {
	cout << "Hello world\n";
	for (int i = 0; i < k; i++) {
		string name = "";
		cin >> name;
		cout << "Hello, " + name + "\n";
	}
}
