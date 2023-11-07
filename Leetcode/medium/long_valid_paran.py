class Solution(object):
    def longestValidParentheses(self, string):
        stack = [-1]  # Use a stack to keep track of indices
        max_length = 0
        for i in range(len(string)):
            print(i)
            if string[i] == '(':
                stack.append(i)  # Push the index of an opening parenthesis
            else:
                stack.pop()  # Pop the corresponding opening parenthesis
                if len(stack) == 0:
                    stack.append(i)  # Push the index of a closing parenthesis
                else:
                    length = i - stack[-1]  # Compute the length of a valid substring
                    max_length = max(max_length, length)
        return max_length
print(Solution().longestValidParentheses("()"))

