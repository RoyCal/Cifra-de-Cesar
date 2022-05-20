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

        void encrypt();
        void decrypt();
        void formatKey(int x);

        string getOutput();
};