#include<iostream>
using namespace std;

int stack[20],top=-1;

void push(int number) {
	if (top == 20){
		cout << "Stack overflow";
		exit(0);
	}
	stack[top++] = number;
	cout << number << " pushed into the stack" << endl;
}

int pop() {
	int n;
	if (top == -1) {
		cout << "Stack Underflow";
		exit(0);
	}
	n = stack[top--];
	return n;
}

void view() {
	int i;
	for (i = 0; i < top; i++) {
		cout << stack[i] << endl;
	}
}

int main() {
	
	int option, number;

	cout << "Welcome to an exercise on stacks" << endl;
	for(;;){
		cout << "Here are some options to try on stacks:" << endl;
		cout << "1. Push	2.Pop" << endl;
		cout << "3. View	4.Exit" << endl;
		cout << "Please enter a valid option" << endl;

		cin >> option;

		switch (option) {
		case 1: cout << "Enter a number to push ";
			cin >> number;
			push(number);
			break;
		case 2: number = pop();
			cout << number << " was popped!" << endl;
			break;
		case 3: cout << "The elements in the stack are" << endl;
			view();
			break;
		case 4: exit(0);
			break;
		default: cout << "Please enter a valid option" << endl;
		}
	}

}