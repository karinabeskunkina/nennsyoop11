#pragma once
#ifndef animal_H
#define animal_H



#include <iostream>
#include <string>
using namespace std;




class Animal {
protected:
	string name;
	int age;
	string color;
public:
	Animal() {
		name = "";
		age = 0;
		color = "";
	}
	Animal(string name, int age, string color) {
		this->name = name;
		this->age = age;
		this->color = color;

	}
	virtual void print() = 0;
	~Animal() {}
};




class Cat :public Animal {
private:
	string breed;
public:
	Cat() :Animal() {
		breed = "";
	}
	Cat(string name, int age, string color, string breed) :Animal(name, age, color) {
		this->breed = breed;
	}
	void print() override {
		cout << name << "    " << age << "    " << breed << endl;
	}
	~Cat(){}
};

class Dog :public Animal {
private:
	string breed;
public:
	Dog() :Animal() {
		breed = "";
	}
	Dog(string name, int age, string color, string breed) :Animal(name, age, color) {
		this->breed = breed;
	}
	void print() override {
		cout << name << "    " << age << "    " << breed << endl;
	}
	~Dog(){}
};


class Parrot :public Animal {
private:
	string view;
public:
	Parrot() :Animal() {
		view = "";
	}
	Parrot(string name, int age, string color, string view) :Animal(name, age, color) {
		this->view = view;
	}
	void print() override {
		cout << name << "    " << age << "    " << view << endl;
	}
	~Parrot() {}
};
#endif 
