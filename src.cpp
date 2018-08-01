//src.cpp
#include <stdio.h>

void sayHello(){
    printf("Hello world");
}

void featureB(){
    printf("feature B completed");
}

void featureB1(){
	printf("B1");
}

void featureA1() {
	printf("A1");
	//printfA1 line 2
}

void featureC(){
    printf("completed C");
    printf("missing command");
}

int main(){
    sayHello();
}