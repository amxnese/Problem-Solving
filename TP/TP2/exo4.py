# Validate whether a string is a valid date in MM-DD-YYYY format.
import re
def date(s):
  return bool(re.search("\d{2}-\d{2}-\d{4}", s))