# Validate whether a string is a valid date in MM-DD-YYYY format.
import re, unittest
def date(s):
  return re.findall("\d{2}-\d{2}-\d{4}", s)

class TestDateFunc(unittest.TestCase):
  def test_no_date_case(self):
    self.assertEqual(date('this12-03-2002tho'), ['12-03-2002'])
  def test_one_date_case(self):
    self.assertEqual(date('23-03-1942'), ['23-03-1942'])
  def test_two_dates_case(self):
    self.assertEqual(date('23-03-194231-04-1942'), ['23-03-1942', '31-04-1942'])
unittest.main()