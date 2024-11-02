# Return all digits found in a string.
import re
def dig(s):
  return re.findall('\d', s)
print(dig('4464l;aj563;'))