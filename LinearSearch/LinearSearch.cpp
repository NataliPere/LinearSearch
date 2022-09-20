#include <iostream>

// �������� ����� ������� ��������� �������� value � ������ arr. ����� ���������� � ������� begin (�� ��������� - 0).
template <typename T>
int search_index(T arr[], const int length, T value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
			return -1;
}

// �������� ����� ���������� ��������� �������� value � ������ arr.
template <typename T>
int search_last_index(T arr[], const int length, T value) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
			return -1;
}

// �������� ����� ���������� ��������� �������� value � ������ arr. ����� ���������� � ������� begin.
template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
			return -1;
}

	// ����� �������� � ������� ������� sym
void subword(char arr[], const int length, char sym) {
	int index = search_index(arr, length, sym);
	if (index == -1)
		std::cout << "������";
	else
		for (int i = index; i < length; i++)
		std::cout << arr[i];
		std::cout << "\n";
		

}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	const int size = 10;
	int arr[size]{6, 4, 7, 9, 6, 5, 3, -10, 1, 0};
	
	// search_index
	std::cout << "������� ����� 7 � ������� = " << search_index(arr, size, 7) << "\n"; //3
	std::cout << "������ ������� ����� 6 � ������� = " << search_index(arr, size, 6) << "\n"; //0


	if (search_index(arr, size, 100) == -1)
		std::cout << "����� 100 ��� � �������. \n";
	else
	std::cout << "������� ����� 100 � ������� = " << search_index(arr, size, 100) << "\n"; 

	std::cout << "������ ������� ����� 6 � �������, ������� � ������� 3 = " << search_index(arr, size, 6, 3) << "\n"; //0

	// search_last_ index
	std::cout << "������� ����� 7 � ������� = " << search_last_index(arr, size, 7) << "\n"; //2
	std::cout << "��������� ������� ����� 6 � ������� = " << search_last_index(arr, size, 6) << "\n"; //4
	std::cout << "��������� ������� ����� 6 � ������� ������� � ������� 4 = " << search_last_index(arr, size, 6, 3) << "\n"; //0
	
	// ��������
	std::cout << "����������� �����:  \n";
	const int letters = 8;
	char word[letters] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
	for (int i = 0; i < letters; i++)
		std::cout << word[i];
		std::cout << "\n ��������\n";
		subword(word, letters, 'n');



	return 0;
}