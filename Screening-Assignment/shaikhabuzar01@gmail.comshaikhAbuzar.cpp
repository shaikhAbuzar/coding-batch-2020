// shaikhabuzar01@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main(){
    string lines[2000];
    ifstream infile("lines.txt");
    int i = 0;
    string line;
    while (getline(infile, line)){
        lines[i] = line;
        //cout << i << " " << lines[i] << endl;
        i++;
    }
    int random_no, characters = 0;
    time_t total_time = 0, start, endt;

    for (int j = 0; j < 5; j++){
        random_no = rand() % i;
        cout << "Statement: " << lines[random_no] << endl;
        cout << "Type here: ";
        string user_line;
        //cin.ignore();
        time(&start);
        getline(cin, user_line);
        time(&endt);
        total_time += endt - start;
        characters += user_line.size();
    }

    cout << "\nResults\nTotal No. of Characters: " << characters << "." << endl;
    cout << "You Took: " << total_time << "s" << endl;
    total_time /= 60;
    // 9cout << total_time << endl;
    cout << "Your speed: " << characters / total_time << " chars per min." << endl;
    return 0;
}
