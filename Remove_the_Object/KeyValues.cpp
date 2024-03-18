// Task1_LinkedList.cpp : Linked list, end item have nullptr in the next attribute (property)
//
#pragma once
#include <iostream>
#include "KeyValue.h"
#include "KeyValues.h"



using namespace std;

KeyValues::KeyValues(int n)
{
	this->keyValues = new KeyValue * [n];
	this->count = 0;
}

KeyValues:: ~KeyValues()

{

	for (int i = 0; i < this->count; i++)
	{
		delete this->keyValues[i];
	}

	delete[] this->keyValues;

}

int KeyValues::Count()
{
	return this->count;
}

KeyValue* KeyValues::createObject(int k, double v)
{
	KeyValue* newObject = new KeyValue(k, v);

	this->keyValues[this->count] = newObject;
	this->count += 1;

	return newObject;
}

KeyValue* KeyValues::searchObject(int k) {
	for (int i = 0; i < this->count; i++) { // Corrected loop condition
		if (this->keyValues[i]->GetKey() == k) {
			return this->keyValues[i];
		}
	}
	return nullptr; // Need to return nullptr if the key is not found
}

KeyValue* KeyValues::removeObject(int k) {
	for (int i = 0; i < this->count; i++) {
		if (this->keyValues[i]->GetKey() == k) {
			KeyValue* removedObject = this->keyValues[i];
			for (int j = i; j < this->count - 1; j++) {
				this->keyValues[j] = this->keyValues[j + 1];
			}
			this->keyValues[this->count - 1] = nullptr;
			this->count--;
			return removedObject;
		}
	}
	return nullptr;

}