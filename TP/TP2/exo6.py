'''
Exercise 6: Extract Hashtags from Text
Extract all hashtags from a string (words starting with #).
'''
import re
def hashtags(s):
  pattern = re.compile(r'(?<=#)\w+')
  return pattern.findall(s)
print(hashtags("this #is a #hashtag"))