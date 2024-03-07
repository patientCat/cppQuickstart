#include<iostream>

#include<unordered_map>

using namespace std;
class LearnHashMap{
    public:
    void learnConstrutor(){
        std::unordered_map<std::string, std::string> my_map;

        my_map["input"] = "10";

        cout << my_map["input"] << endl;
        cout << my_map["noexist"] << endl;

        std::unordered_map<std::string, string> my_map_10(10);

        my_map_10["input"] = "11";

        cout << my_map_10["input"] << endl;
        cout << my_map_10["noexist"] << endl;
    }
    
    void learnForEach(){
        std::unordered_map<std::string, int> dict = {{"hello", 1}, {"world", 2}};

        for(auto it = dict.begin(); it != dict.end(); it++){
            cout << it->first << endl;
            cout << it->second << endl;
        }

        for(auto &entry : dict){
            cout << entry.first << endl;
            cout << entry.second << endl;
        }

        // 获取所有的key
        for(auto &entry : dict){
            cout << entry.first << endl;
        }
    }

    void learAddAndErase(){
        std::unordered_map<std::string, int> my_map = {{"apple", 1}, {"banana", 2}, {"cherry", 3}};

        // 添加一个元素
        my_map["orange"] = 4;

        // 使用 insert() 成员函数添加一个元素
        my_map.insert(std::make_pair("grape", 5));

        // 删除一个元素
        my_map.erase("banana");

        // 输出 unordered_map 中的所有元素
        std::cout << "Elements in the unordered_map:"<< std::endl;
        for (const auto& entry : my_map) {
            std::cout << "Key: "<< entry.first << ", Value: "<< entry.second<< std::endl;
        }
    }

    void learnKeyExist(){
        std::unordered_map<std::string, int> my_map = {{"apple", 1}, {"banana", 2}, {"cherry", 3}};
        my_map.count("apple");
    }
};

int main(){
    LearnHashMap learnHashMap;
    learnHashMap.learnConstrutor();
    learnHashMap.learnForEach();
    learnHashMap.learAddAndErase();
}