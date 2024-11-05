# Return all digits found in a string.
import re, unittest
def dig(s):
  return re.findall('\d', s)
print(dig('4464l;aj563;'))

class TestDigFunc(unittest.TestCase):
  def test_alpha_case(self):
    self.assertEqual(dig('amine'), [])
  def test_numeric_case(self):
    self.assertEqual(dig('1234'), ['1','2','3','4'])
  def test_alpha_numeric_case(self):
    self.assertEqual(dig('amine123'), ['1','2','3'])
unittest.main()