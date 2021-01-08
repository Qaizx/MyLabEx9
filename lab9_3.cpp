//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string text;
    float sum = 0,sum2 = 0;
    int num = 0;
    while (getline(source, text))
    {
        num++;
        sum += atof(text.c_str());
        sum2 += pow(atof(text.c_str()),2);
    }
    
    cout << "Number of data = " << num << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/num << endl;
    cout << setprecision(3);
    cout << "Standard deviation = "<< pow((sum2/num)-pow((sum/num),2),0.5);
}
