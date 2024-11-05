import re, unittest
def capital(s):
  pattern = re.compile(r"[A-Z]\w+")
  return pattern.findall(s)

class TestCapFunc(unittest.TestCase):
  def test_no_cap_case(self):
    self.assertEqual(capital('no capitals here'), [])
  def test_one_cap_case(self):
    self.assertEqual(capital('one Capital here'), ['Capital'])
  def test_two_caps_case(self):
    self.assertEqual(capital('Two Capitals here'), ['Two', 'Capitals'])
unittest.main()