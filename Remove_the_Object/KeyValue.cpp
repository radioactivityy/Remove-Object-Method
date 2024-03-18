#pragma once
#include <iostream>
#include "KeyValue.h"


//Constructor of the class with two parameters

KeyValue::KeyValue(int k, double v)
{
	this->key = k;
	this->value = v;

}

//Return property key of instance
int KeyValue::GetKey()
{
	return this->key;
}

//Return property value of instance
double KeyValue::GetValue()
{
	return this->value;
}

