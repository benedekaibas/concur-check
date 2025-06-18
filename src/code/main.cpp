#include <iostream>
#include "clang/Tooling/CommonOptionsParser.h"
#include "llvm/Support/CommandLine.h"
#include <vector>
#include <filesystem>


std::string EnterWhichFile(){
  std::string file;
  std::cout << "Please enter on which file would you like to run the static analysis: " << std::endl;
  std::cin >> file;

  if(std::filesystem::exists(file)){
    return file;
  } else {
    return "Error the file name does not exist.";
  }
}


std::vector<std::string> ReturnFiles(){
  std::vector<std::string> StoreFile;
  std::string file = EnterWhichFile();
  StoreFile.push_back(file);

  return StoreFile;
}

int main(){
  std::string Result = EnterWhichFile();
  std::cout << Result;

}
