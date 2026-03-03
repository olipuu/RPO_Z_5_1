//#include <iostream>
//void getMenu() {
//	std::cout << "\tmenu:\n1.max verstappen\n2.AVG\n3.abs sum\n4.(int) sum\n0.exit\n-->";
//}
//template <typename T>
//T findMax(T num1, T num2) {
//	return (num1 > num2 ? num1 : num2);
//}
//template <typename T>
//double average(T num1, T num2) {
//	return (num1 + num2) / 2;
//}
//template <typename T>
//T absSum(T num1, T num2) {
//	return (num1 + num2 < 0 ? -(num1 + num2) : num1 + num2);
//}
//template <typename T>
//int integerSum(T num1, T num2) {
//	return num1 + num2;
//}
//template <typename T>
//void actionsMenu() {
//	T num1, num2;
//	int ui = 1;
//	std::cout << "Vvedite 2 chisla:";
//	std::cin >> num1 >> num2;
//	while (ui != 0) {
//		system("cls");
//		getMenu();
//		std::cin >> ui;
//		switch (ui) {
//		case 1:
//			system("cls");
//			std::cout << findMax(num1, num2) << '\n';
//			system("pause");
//			break;
//		case 2:
//			system("cls");
//			std::cout << average(num1, num2) << '\n';
//			system("pause");
//			break;
//		case 3:
//			system("cls");
//			std::cout << absSum(num1, num2) << '\n';
//			system("pause");
//			break;
//		case 4:
//			system("cls");
//			std::cout << integerSum(num1, num2) << '\n';
//			system("pause");
//			break;
//		}
//	}
//}
//int main() {
//	std::cout << "\tViberite type:\n1.int\n2.float\n3.double\n-->";
//	int type; std::cin >> type;
//	switch (type) {
//	case 1:
//		actionsMenu<int>(); break;
//	case 2:
//		actionsMenu<float>(); break;
//	case 3:
//		actionsMenu<double>(); break;
//	}
//	system("cls");
//}