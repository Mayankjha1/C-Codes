// Calculate the percentage of Subjects [Maths,Science,english,hindi,EVS]

#include<iostream>
using namespace std;
int main(){
    int Maths;
    cout<<"Maths Marks : "<<endl;
    cin>>Maths;
    int Science;
    cout<<"Science Marks : "<<endl;
    cin>>Science;
    int english;
    cout<<"english Marks : "<<endl;
    cin>>english;
    int hindi;
    cout<<"hindi Marks : "<<endl;
    cin>>hindi;
    int EVS;
    cout<<"EVS Marks : "<<endl;
    cin>>EVS;

    int sum = (Maths+Science+english+hindi+EVS)*100/500;
    cout<<"Percentage is: "<<sum<<" %"<<endl;

    return 0;
}