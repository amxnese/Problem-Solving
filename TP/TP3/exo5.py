import re, unittest
def valid_password(s):
  pattern = re.compile(r'(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[!@#$%^&*]).{8}')
  return bool(pattern.search(s))

class TestPasswordFunc(unittest.TestCase):
  def test_no_capital_case(self):
    self.assertFalse(valid_password('aminesdr421'))
  def test_no_lower_case(self):
    self.assertFalse(valid_password('AMINE2345'))
  def test_valid_case(self):
    self.assertTrue(valid_password('Aminesdrt123*'))
unittest.main()