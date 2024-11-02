# Check if a string contains only alphabets (no spaces or special characters).
import re
def alpha(s):
  return bool(re.search("^[a-zA-Z]+$", s))
print(alpha("4mine"))