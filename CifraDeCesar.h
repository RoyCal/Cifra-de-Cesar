#pragma once

#include <iostream>

using namespace std;

class CifraDeCesar{
    private:
        string inputText;
        string outputText;
        int key;
        string alphabetLower = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
        string alphabetUpper = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

    public:
        CifraDeCesar();
        CifraDeCesar(string input, int key);

        void encrypt(); //encriptar o texto
        void decrypt(); //descriptografar o texto 
        void formatKey(int x); //formata a chave para um numero compativel e equivalente

        string getOutput();
};