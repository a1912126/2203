#include <bits/stdc++.h>
#include "DownloadingFiles.hpp"
int main(){
    DownloadingFiles downloader;

    std::vector<std::string> tasks1 = {"3 57", "2 22"};
    std::cout << "Total time: " << downloader.actualTime(tasks1) << std::endl;

    std::vector<std::string> tasks2 = {"3 1057", "2 1022"};
    std::cout << "Total time: " << downloader.actualTime(tasks2) << std::endl;

    std::vector<std::string> tasks3 = {"25 1000", "5 5000", "10 5000"};
    std::cout << "Total time: " << downloader.actualTime(tasks3) << std::endl;

    std::vector<std::string> tasks4 = {"1 10", "1 20", "2 40"};
    std::cout << "Total time: " << downloader.actualTime(tasks4) << std::endl;
    std::vector<std::string> tasks5 = {"6 88","39 7057","63 2502","45 2285","28 8749","62 3636","1 5546","49 5741"};
    std::cout << "Total time: " << downloader.actualTime(tasks5) << std::endl;
}

