# Extract all valid email addresses from a string.
import re
def email(s):
  re.findall(r"[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.com", s)
