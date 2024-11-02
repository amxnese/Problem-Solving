'''
Validate whether a password meets certain criteria:
• At least 8 characters long
• Contains at least one uppercase letter
• Contains at least one lowercase letter
• Contains at least one digit
• Contains at least one special character (!@#$%^&*)
'''
import re
def valid_password(s):
  pattern = re.compile(r'(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[!@#$%^&*]).{8}')
  return bool(pattern.search(s))
print(valid_password("Amine123*"))