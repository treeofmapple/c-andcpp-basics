#pragma once
#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <string>

class MyClass {
private:
    std::string message;
public:
    // Construtor
    MyClass(const std::string& msg) : message(msg) {}

    // M�todo para exibir a mensagem
    void printMessage() const {
        std::cout << "Mensagem: " << message << std::endl;
    }

    // M�todo para alterar a mensagem
    void setMessage(const std::string& newMessage) {
        message = newMessage;
    }

    // M�todo para obter a mensagem
    std::string getMessage() const {
        return message;
    }
};

#endif // MYCLASS_H
