'''
Exercise 6: Extract Hashtags from Text
Extract all hashtags from a string (words starting with #).
'''
import re
def hashtags(text):
  pattern = re.compile(r'(?<=#)\w+')
  result = ['#' + hashtag for hashtag in pattern.findall(text)]
  return result
print(hashtags("#PythonRocks #HealthcareAI #DataScience2025 #MachineLearning #BigData"))