# Extract all valid email addresses from a string.
import re, unittest
def email(s):
  return re.findall(r"[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.com", s)
print(email('Laarafmohamed@gmail.comami'))
class TestEmailFunc(unittest.TestCase):
  def test_no_email_case(self):
    self.assertEqual(email('aminesdrt@gmail'), [])
  def test_one_email_case(self):
    self.assertEqual(email('laaraf@gmail.comadfm'), ['laaraf@gmail.com'])
  def test_two_email_case(self):
    self.assertEqual(email('aminesdrt@gmail.comlaaraf@yahoo.com'), ['aminesdrt@gmail.com','laaraf@yahoo.com'])
unittest.main()