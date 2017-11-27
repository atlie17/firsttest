#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string str;
    ifstream fin;
    int ten_lines = 9;
    bool continue_running;
    char continue_char;
    int i = 0;

    fin.open("lorem.txt");
    if(fin.is_open()){
        do{
            for(; i <= ten_lines;i++)
                {
                getline(fin, str);
                cout << str << endl;
                }
        fin.close();

    cout << "Do you want to continue (y/n)?";
    cin >> continue_char;
    if(continue_char == 'y'){
        continue_running = true;
        i = 0;
    }
    else{
        continue_running = false;
    }
        }
        while(continue_running == true);


    return 0;
}
}
