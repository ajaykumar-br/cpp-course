#include<iostream>
using namespace std;

int stack[20]; //stack size is not fixed, it depends on your application
int top=-1;	//Initially top is not pointing to any element, hence -1

void push(int number) {
	if (top == 19){
		cout << "Stack overflow";	//No more space for the elements to enter the stack
	}
	else {
		top += 1;
		stack[top] = number;
		cout << number << " pushed into the stack" << endl;
	}
}

int pop() {
	int n;
	if (top == -1) {
		cout << "Stack Underflow";	//No elements in the stack
	}
	else {
		n = stack[top];
		top -= 1;
	}
	return n;
}

void view() {
	int i;
	for (i = 0; i <=top; i++) {
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
		case 3: 
			if (top == -1) {
				cout << "No elements in the stack" << endl;	//No elements in the stack
			}
			else {
				cout << "The elements in the stack are" << endl;
				view();
			}
			break;
		case 4: exit(0);
			break;
		default: cout << "Please enter a valid option" << endl;
		}
	}

}