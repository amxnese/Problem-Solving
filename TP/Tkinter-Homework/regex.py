import re

def is_alpha_only(s):
    return bool(re.match(r'^[A-Za-z]+$', s))

def find_digits(s):
    return re.findall(r'\d+', s)

def extract_emails(s):
    return re.findall(r'[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}', s)

def validate_date(date_string):
    return bool(re.match(r'^(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01])-\d{4}$', date_string))

def validate_password(password):
    return (len(password) >= 8 and
            bool(re.search(r'[A-Z]', password)) and
            bool(re.search(r'[a-z]', password)) and
            bool(re.search(r'\d', password)) and
            bool(re.search(r'[!@#$%^&*]', password)))

def extract_hashtags(s):
    return re.findall(r'#\w+', s)

def find_capitalized_words(s):
    return re.findall(r'\b[A-Z][a-zA-Z]*\b', s)