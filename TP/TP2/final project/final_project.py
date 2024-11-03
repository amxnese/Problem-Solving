# homework of amine sedrata and laaraf soheib
import re

def email(s):
  # replacing the [at] with @ at first
  s = re.sub(r'\[at\]','@',s)
  # using an email specific pattern to match our email
  return re.findall(r"[\w%+-.']+@[\w.\[\]-]+\.[a-zA-Z]{2,}\.?[a-zA-Z]{0,}", s)

def extract_phone_numbers(text):
  # creating the phone numbers pattern
  pattern = re.compile(r'\(?\d{1,3}\)?[-.\s]?\(?\d{1,4}\)?[-.\s]\d{1,4}[-.\s]?\d{0,4}')
  # extracting the numbers from the text
  numbers = pattern.findall(text)
  # looping through the numbers to add a + before each number
  numbers = ['+' + re.sub('[()]', '', number) for number in numbers]
  # replacing every '-' and '.' with a space
  numbers = [re.sub('[-.]', ' ', number) for number in numbers]
  return numbers

def extract_dates(text):
  # creating the pattern for our dates
  pattern = re.compile(r'([a-zA-Z0-9 ]+[/.,]{1,}[a-zA-Z0-9 ]+[/.,]{0,}[a-zA-Z0-9 ]+)')
  # using the strip method to remove unnecessary spaces from our dates
  result = [date.strip() for date in pattern.findall(text) ]
  return result

def valid_password(text):
  # creating the pattern that meets our password criteria
  # using the lookahead ?= to check for each character if it exists since the lookaheads does not consume characters and are independant meaning that the order does not matter
  pattern = re.compile(r'(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[!@#$%^&*]).{10}')
  # converting our results to a boolean value since it will be false if the result is [] else true
  return bool(pattern.search(text))

def hashtags(text):
  # creating the pattern for our social media post hashtags
  pattern = re.compile(r'(?<=#)\w+')
  # adding a hashtag to each result
  result = ['#' + hashtag for hashtag in pattern.findall(text)]
  return result

mark_spencer = '''
    - Email: m_spencer[at]mail-provider.com  
    - Phone: +1-800-555-2468  
    - Emergency Contact: (800)-246-5555  
    - Date of Birth: 15/08/1980  
'''
alice_monroe = '''
    - Email: alice_monroe@healthcare.com  
    - Work Phone: 1.800.400.5123  
    - Alternative Phone: 1800-400-2345  
    - Joined on: April 23rd, 2015  
'''
Samantha = '''
    - Email: sam.oneill@random_mail.co.uk  
    - Phone: 001 (345) 567-8932  
    - Alt Email: sam.o'neill@example.org  
    - Password: Secure!2021  
    - Project Deadline: 10.12.2024  
'''
Jacob_lee = '''
    - Email: jacoblee.mail@[web].com  
    - Phone: 345-789-2341 (Mobile)  
    - Work Phone: +44 20 7946 0958  
    - Date of Hire: 2019/11/29  
'''
sarah_johnson = '''
    - Contact Email: sarah.j@researchinst.edu  
    - Cell: (555)444.7890  
    - Password: Research@1234  
    - Next Meeting: Friday, the 31st of January, 2025 
'''
employees = [mark_spencer, alice_monroe, Samantha, Jacob_lee, sarah_johnson]
emails = []
for mail in employees:
  emails.append(email(mail))

phone_numbers = []
for num in employees:
  phone_numbers.append(extract_phone_numbers(num))

dates = []
for date in employees:
  dates.append(extract_dates(date))

post = '#PythonRocks #HealthcareAI #DataScience2025 #MachineLearning #BigData'
hashes = hashtags(post)
print(hashes)
