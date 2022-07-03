// BOJ_4949_균형잡힌_세상
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string input;
    while (1)
    {
        getline(cin, input);    // 문자열 한줄을 입력받음
        if (input == ".") {
            break;
        }
        bool flag = true;       // 기본 문자열 상태는 true
        stack<char> stack;

        for (int i = 0; i < input.length(); i++)
        {
            char letter = input[i];

            if (stack.empty() && (letter == ')' || letter == ']')) // 맨 처음 닫는 괄호가 오면 균형잡힌 문자열이 아님
            {
                flag = false;
                break;
            }
            

            if (letter == '(' || letter == '[') // 여는 괄호가 들어왔을 때 stack에 push해준다.
            {
                stack.push(letter);
            }

            if (letter == ')')          // 닫는 괄호 )가 왔을 때 stack 최상단 괄호가 ( 이고 stack이 비어있지 않을 때
            {
                if (!stack.empty() && stack.top() == '(')
                {
                    stack.pop();
                } else {
                    flag = false;
                }
            }
            else if (letter == ']')          // 닫는 괄호 ]가 왔을 때 stack 최상단 괄호가 [ 이고 stack이 비어있지 않을 때
            { 
                if (!stack.empty() && stack.top() == '[')
                {
                    stack.pop();
                } else {
                    flag = false;
                }
            }
        }
        if (stack.empty() && flag == true)
        {
            cout << "yes" << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
    }
    return 0;
}