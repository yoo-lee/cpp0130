#include<iostream>
#include<string>

using namespace std;


int main() {
    std::string str = "samurai,ngineer";

    int engineerPos = str.find("e");

    std::cout << "e" << engineerPos << "番目にあります。n";

    int programmerPos = str.find("programmer");

    if (programmerPos == std::string::npos) {
        std::cout << "programmerは見つかりませんでした。n";
    }else {
        std::cout << "programmerは" << programmerPos << "番目にあります。n";
    }

    return 0;
}
