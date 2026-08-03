#include <iostream>
#include "../include/ShadersUtil.h"
#include <fstream>
#include <string>

void Shader::test_print() const
{
    std::cout << "Hello from Shader" << std::endl;
}

std::string Shader::readFile(const char *filePath)
{
    std::string content;
    std::ifstream fileStream(filePath, std::ios::in);
    std::string line = "";
    while (!fileStream.eof())
    {
        std::getline(fileStream, line);
        content.append(line + "\n");
    }
    fileStream.close();
    return content;
}