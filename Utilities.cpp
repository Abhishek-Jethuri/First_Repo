// #pragma once

#include <iostream>
#include <vector>
#include <iomanip>
// using namespace std;

void PrintTable(std::vector<std::vector<std::string>> data){
    size_t numberOfRows = data.size();
    size_t numberOfColumns = data[0].size();
    std:: vector<size_t> columnWidths(numberOfColumns);
    for (const auto& row : data){
        for (size_t i = 0; i < numberOfColumns; i++){
            size_t length = row[i].length();
            if (length > columnWidths[i])
                columnWidths[i] = length;
        }
    }

    std:: cout << '+';
    for (const auto width : columnWidths){
        for (int j = 0; j < width; j++)
            std:: cout << '-';
        std:: cout << '+';
    }
    std:: cout << '\n';

    for (const auto& row : data){
        std:: cout << '|';
        for (size_t i = 0; i < numberOfColumns; i++){
            std:: cout << std:: setw(columnWidths[i]) << row[i] << '|';
        }
        std:: cout << '\n';

        std:: cout << '+';
        for (const auto width : columnWidths){
            for (int j = 0; j < width; j++)
                std:: cout << '-';
            std:: cout << '+';
        }
        std:: cout << '\n';
    }

}

// To add: Another Function
int main (){
    using namespace std;
    vector<vector<string>> table = 
    {{"Days/Time", "8-9", "9-10", "10-11", "11-12"},
    {"Monday", "Web T", "DAA", "CAO", "MnM"}};

    PrintTable(table);
}
