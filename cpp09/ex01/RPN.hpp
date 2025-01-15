#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <sstream>
#include <stdexcept>
#include <cctype>
#include <iostream>

class RPN
{
    private:
        std::stack<int> _stack;
        int             result;
        RPN();

    public:
        RPN(const std::string &str);
        ~RPN();
        RPN(const RPN &other);
        RPN &operator=(const RPN &rhs);

        int getResult() const;
        bool isOperator(const std::string &token);
        int applyOperator(int a, int b, const char &op);
};

#endif