#include <iostream>
#include "clang/Tooling/CommonOptionsParser.h"
#include "llvm/Support/CommandLine.h"
#include <vector>
#include <filesystem>

struct Files{
  std::string err_file;
};

Files obj1;

std::string EnterWhichFile(){
  std::string file;
  std::cout << "Please enter on which file would you like to run the static analysis: " << std::endl;
  std::cin >> file;

  if(std::filesystem::exists(file)){
    return file;
  } else {
    return "Error";
  }
}


std::vector<std::string> ReturnFiles(){

  std::vector<std::string> StoreFiles;
  StoreFiles.push_back(obj1.err_file);

  return StoreFiles;
}

