#include <iostream>
#include <vector>
#include <conio.h>
void getMenu(int selected_line) {
	std::cout << (selected_line == 0 ? ":Novaya prodaja (vvesti summu)\n" : "Novaya prodaja (vvesti summu)\n")
		<< (selected_line == 1 ? ":Vivod spiska prodaj (nomer prodaji i summa)\n" : "Vivod spiska prodaj (nomer prodaji i summa)\n")
		<< (selected_line == 2 ? ":Otmena poslednei prodaji\n" : "Otmena poslednei prodaji\n")
		<< (selected_line == 3 ? ":Vivesti otchot (kol-vo prodaj i obshaya summa)\n" : "Vivesti otchot (kol-vo prodaj i obshaya summa)\n")
		<< (selected_line == 4 ? ":Vivod maksimalnoy i minimalnoy prodaji\n" : "Vivod maksimalnoy i minimalnoy prodaji\n");
}
int main() {
	int sum_sellings, min, max, u_i, current_line = 0, selling;
	std::vector<int>sellings;
	do {
		system("cls");
		getMenu(current_line);
		u_i = _getch();
		switch (u_i) {
		case 72:
			current_line = (current_line == 0 ? 4 : current_line - 1);
			break;
		case 80:
			current_line = (current_line == 4 ? 0 : current_line + 1);
			break;
		case 13:
			switch (current_line) {
			case 0:
				system("cls");
				std::cout << "Vvedite summu novoi prodaji: ";
				std::cin >> selling;
				sellings.emplace_back(selling);
				break;
			case 1:
				if (sellings.empty()) std::cout << "Net prodaj\n";
				else for (int i = 0; i < sellings.size(); i++) std::cout << i + 1 << ". " << sellings.at(i) << " RUB\n";
				break;
			case 2:
				if (!sellings.empty()) sellings.pop_back();
				else std::cout << "Net prodaj\n";
				break;
			case 3:
				sum_sellings = 0;
				for (int i = 0; i < sellings.size(); i++) sum_sellings += sellings.at(i);
				std::cout << "Kol-vo prodaj: " << sellings.size() << "\nSumma prodaj: " << sum_sellings << '\n';
				break;
			case 4:
				if (!sellings.empty()) {
					min = max = sellings.front();
					for (int i = 0; i < sellings.size(); i++) {
						min = (min > sellings.at(i) ? sellings.at(i) : min);
						max = (max < sellings.at(i) ? sellings.at(i) : max);
					}
					std::cout << "Max: " << max << "\nMin: " << min << '\n';
				}
				else std::cout << "Net prodaj\n";
				break;
			}
			system("pause");
		}
	} while (u_i != 27);
}