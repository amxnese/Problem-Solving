'''
Exercise 7: Find All Words Starting with a Capital Letter
Write a function that finds all words in a string that start with a capital letter.
'''
import re
def capital(s):
  pattern = re.compile(r"[A-Z]\w+")
  return pattern.findall(s)
print(capital('This is Regex'))