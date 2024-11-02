my_dict = {
  'title': 'The Great Gatspy',
  'author': 'Fitzgerald',
  'year': 1925
}
print(f'The title of the book is {my_dict['title']}, the author of the book is {my_dict['author']}')

my_dict['publisher'] = 'charles'

for key, value in my_dict.items():
  print(f'{key}: {value}')