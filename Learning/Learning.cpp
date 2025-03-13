// main.cpp
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <memory>
#include <map>
#include <thread>
#include <mutex>
#include <algorithm>
#include "Myfunctions.h"
#include "MyClass.h"

std::mutex mtx;

void threadTask(int id) {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Thread " << id << " is running." << std::endl;
}

void memoryAllocationExample() {
    int* dynamicArray = new int[5];
    for (int i = 0; i < 5; ++i) {
        dynamicArray[i] = i * 10;
    }
    std::cout << "Valores no array alocado dinamicamente: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;
    delete[] dynamicArray;
}

class ExamplePOO {
private:
    int attribute;
public:
    ExamplePOO(int value) : attribute(value) {}
    void display() const {
        std::cout << "Atributo: " << attribute << std::endl;
    }
};

struct ExampleStruct {
    int id;
    std::string name;
};

void pointerAndReferenceExample() {
    int a = 42;
    int* p = &a;
    int& ref = a;

    std::cout << "Valor de a: " << a << std::endl;
    std::cout << "Valor via ponteiro: " << *p << std::endl;
    std::cout << "Valor via refer�ncia: " << ref << std::endl;
    *p = 50;
    std::cout << "Novo valor de a (modificado via ponteiro): " << a << std::endl;
}

void basicExamples() {
    // Tipos de dados e operadores
    int x = 5, y = 10;
    int sum = x + y;
    std::cout << "Soma: " << sum << std::endl;

    // Controle de fluxo
    if (sum > 10) {
        std::cout << "A soma � maior que 10." << std::endl;
    }
    else {
        std::cout << "A soma n�o � maior que 10." << std::endl;
    }

    // Arrays e strings
    int array[3] = { 1, 2, 3 };
    std::string text = "Exemplo";
    std::cout << "Array: ";
    for (int i : array) {
        std::cout << i << " ";
    }
    std::cout << "\nString: " << text << std::endl;
}

int main() {
    // === Entrada e Sa�da ===
    std::cout << "Digite seu nome: ";
    std::string nome;
    std::cin >> nome;
    std::cout << "Ol�, " << nome << "!" << std::endl;

    // === Controle de Fluxo ===
    int escolha;
    std::cout << "Escolha um n�mero (1-3): ";
    std::cin >> escolha;
    switch (escolha) {
    case 1: std::cout << "Voc� escolheu 1!" << std::endl; break;
    case 2: std::cout << "Voc� escolheu 2!" << std::endl; break;
    case 3: std::cout << "Voc� escolheu 3!" << std::endl; break;
    default: std::cout << "Escolha inv�lida!" << std::endl; break;
    }

    // === Vetores e STL ===
    std::vector<int> numeros = { 1, 2, 3, 4, 5 };
    std::cout << "N�meros no vetor: ";
    for (int n : numeros) std::cout << n << " ";
    std::cout << std::endl;

    // Usando um algoritmo da STL
    std::sort(numeros.begin(), numeros.end(), std::greater<int>());
    std::cout << "N�meros em ordem decrescente: ";
    for (int n : numeros) std::cout << n << " ";
    std::cout << std::endl;

    // === Classes e Objetos ===
    MyClass obj("Exemplo de Classe");
    obj.printMessage();

    // === Ponteiros Inteligentes ===
    std::unique_ptr<MyClass> ptr = std::make_unique<MyClass>("Ponteiro Inteligente");
    ptr->printMessage();

    // === Threads ===
    std::thread t1(threadTask, 1);
    std::thread t2(threadTask, 2);
    t1.join();
    t2.join();

    // === Tratamento de Exce��es ===
    try {
        throw std::runtime_error("Erro de exemplo");
    }
    catch (const std::exception& e) {
        std::cerr << "Exce��o capturada: " << e.what() << std::endl;
    }

    // === Exemplos Adicionais ===
    memoryAllocationExample();

    ExamplePOO pooExample(100);
    pooExample.display();

    ExampleStruct data = { 1, "Estrutura de Dados" };
    std::cout << "Struct ID: " << data.id << ", Nome: " << data.name << std::endl;

    pointerAndReferenceExample();

    basicExamples();

    return 0;
}
