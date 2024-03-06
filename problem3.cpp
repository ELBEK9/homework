#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Student{
private:
    string name;
    long int id;
    string groupName;
    
public:
    Student(string n, int id, string g){
        this->name = n; 
        this->id = id; 
        this->groupName = g;
    }
    
    string& getGroupName() {
        return groupName;
    }
};

int main()
{
    int num_of_stud;
    cin>>num_of_stud;
    
    vector<Student> students;
    string name, groupName;
    long int id;
    
    for (int i = 0;  i < num_of_stud; ++i) {
        cin>>name>>id>>groupName;
        students.emplace_back(name, id, groupName);
    }
    
    map<string, int> groupCount;
    for(auto it=students.rbegin();it!=students.rend();it++){
        string& groupName = it->getGroupName();
        groupCount[groupName]++;
    }
    
    for (auto it = groupCount.begin(); it != groupCount.end(); it++) {
        cout<<it->first<<":"<<it->second<<endl;
    }
    
    return 0;
}
