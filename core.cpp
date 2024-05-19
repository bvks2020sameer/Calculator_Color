
#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

class Solver {
public:
    std::string solveOperations(const std::vector<float>& nums, const std::vector<std::string>& ops) {
        if (nums.empty()) {
            return "No input provided.";
        }

        float result = nums[0];
        for (size_t i = 0; i < ops.size(); ++i) {
            if (ops[i] == "+") {
                result += nums[i + 1]; // Adjust index to get the next number
            } else if (ops[i] == "-") {
                result -= nums[i + 1]; // Adjust index to get the next number
            } else if (ops[i] == "*") {
                result *= nums[i + 1]; // Adjust index to get the next number
            } else if (ops[i] == "/") {
                if (nums[i + 1] == 0) {
                    return "Divide By Zero Error!";
                }
                result /= nums[i + 1]; // Adjust index to get the next number
            }
        }

         return std::to_string(result);
    }
};

class Calculator {
public:
    std::vector<float> nums;
    std::vector<std::string> ops;

    void aggregate(const std::string& input) {
        std::istringstream iss(input);
        char op;
        float num;
        while (iss >> num >> op) {
            nums.push_back(num);
            ops.push_back(std::string(1, op));
        }
        // Add the last number from the input string
        if (!(iss >> num).fail()) {
            nums.push_back(num);
        }
    }
};

class Resulter{

public :

    string result(string str){
        Calculator calc;
        calc.aggregate(str);
        Solver solver;
        try
        {
            string result = solver.solveOperations(calc.nums, calc.ops);
            return result;
        }
        catch(const std::exception& e)
        {
            return "Please Enter Valid input";
        }

    }
};
