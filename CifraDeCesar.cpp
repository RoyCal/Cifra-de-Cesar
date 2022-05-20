#include "CifraDeCesar.h"

CifraDeCesar::CifraDeCesar(){
    
}

CifraDeCesar::CifraDeCesar(string input, int key){
    inputText = input;
    formatKey(key);
}

void CifraDeCesar::formatKey(int x){
    key = x;

    if(x == 26 || x == -26){
        key = 0;
        return;
    } else if(x > 26 || x < -26){
        key = x%26;
    }

    if(key < 0){
        key = 26 + key;
    }
}

void CifraDeCesar::encrypt(){
    string output;

    for(int i = 0; i < inputText.size(); i++){
        if(alphabetLower.find(inputText[i]) != -1){
            output.push_back(alphabetLower[alphabetLower.find(inputText[i])+key]);

        } else if(alphabetUpper.find(inputText[i]) != -1){
            output.push_back(alphabetUpper[alphabetUpper.find(inputText[i])+key]);

        } else {
            output.push_back(inputText[i]);
        }
    }

    outputText = output;
}

void CifraDeCesar::decrypt(){
    string output;

    for(int i = 0; i < inputText.size(); i++){
        if(alphabetLower.find(inputText[i]) != -1){
            output.push_back(alphabetLower[alphabetLower.find(inputText[i])+26-key]);

        } else if(alphabetUpper.find(inputText[i]) != -1){
            output.push_back(alphabetUpper[alphabetUpper.find(inputText[i])+26-key]);

        } else {
            output.push_back(inputText[i]);
        }
    }

    outputText = output;
}

string CifraDeCesar::getOutput(){
    return outputText;
}