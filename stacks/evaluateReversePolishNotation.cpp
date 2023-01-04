

                                                        //   Evaluate Reverse Polish Notation    //



static unordered_set<string> operators({"+","-","*","/"});
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>ans;
        for(auto t:tokens)
        {
            if(operators.find(t)==operators.end())
            {
                ans.push(stoi(t));
            }
            else
            {
                int operantOne=ans.top(); ans.pop();
               
                int operantTwo=ans.top(); ans.pop();
                
                if(t=="+")
                ans.push(operantOne+operantTwo);
                else if(t=="-")
                ans.push(operantOne-operantTwo);
                else if(t=="*")
                ans.push(operantOne*operantTwo);
                else
                {
                    if(operantOne>operantTwo && operantTwo!=0)
                    {
                        ans.push(operantOne/operantTwo);
                    }
                    else
                    {
                        ans.push(operantTwo/operantOne);
                    }

                }
                
            }
        }
        
        return ans.top();
        
    }
};
