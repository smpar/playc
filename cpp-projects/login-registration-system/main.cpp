#include<iostream>
#include<fstream>

void register_user() {
    std::string username, password;
    std::cout << "Username: "; std::cin >> username;
    std::cout << "Password: "; std::cin >> password;

    std::ofstream user_file;
    user_file.open("userfile.txt");
    user_file << username << std::endl << password;
    user_file.close();
}

void login_user() {
    std::string username, password;
    std::cout << "Username: "; std::cin >> username;
    std::cout << "Password: "; std::cin >> password;

    std::ifstream user_file;
    user_file.open("userfile.txt");

    std::string valid_username, valid_password;
    user_file >> valid_username >> valid_password;

    if(username == valid_username && password == valid_password) {
        std::cout << "Welcome " << valid_username << "!" << std::endl;
    } else {
        std::cout << "Wrong username or password!" << std::endl;
    }
}

int main(int argc, char* argv[]) {

    int option(0);
    do {
        std::cout << "1: Register\n" << "2: Login\n" << "Specify an option: ";
        std::cin >> option;
    } while(option != 1 && option != 2);

    if(option == 1) {
        register_user();
    } else {
        login_user();
    }

    return 0;
}