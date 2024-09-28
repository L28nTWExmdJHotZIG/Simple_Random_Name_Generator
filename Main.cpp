#include <iostream>
#include <string>
#include <random>
#include <thread>
#include <chrono>

int main()
{
    int size_name = 17;

    char database[] = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890";

    std::random_device rd;
    std::uniform_int_distribution<int> gg(1, strlen(database)-1);

    for (int v = 0; v < 3; v++)
    {
        std::cout << "Your Name: ";
        for (int i = 0; i < size_name; i++)
        {
            std::cout << database[gg(rd)] << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(70));
        }
        std::cout << std::endl;
    }

}
