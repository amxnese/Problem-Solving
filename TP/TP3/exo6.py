import re, unittest
def hashtags(text):
  pattern = re.compile(r'(?<=#)\w+')
  result = ['#' + hashtag for hashtag in pattern.findall(text)]
  return result

class TestHashtagFunc(unittest.TestCase):
  def test_no_hashtag_case(self):
    self.assertEqual(hashtags('no hashtags here'), [])
  def test_one_date_case(self):
    self.assertEqual(hashtags('one #hashtags'), ['#hashtags'])
  def test_two_dates_case(self):
    self.assertEqual(hashtags('#two #hashtags'), ['#two', '#hashtags'])
unittest.main()