import re, unittest
def alpha(s):
  return bool(re.search("^[a-zA-Z]+$", s))

class TestAlphaFunc(unittest.TestCase):
  def test_alpha_case(self):
    self.assertTrue(alpha('amine'))
  def test_numeric_case(self):
    self.assertFalse(alpha('1234'))
  def test_alpha_numeric_case(self):
    self.assertFalse(alpha('amine123'))
unittest.main()