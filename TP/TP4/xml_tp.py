# amine sedrata and laaraf soheib
import xml.etree.ElementTree as ET
import json
from datetime import datetime

book = ET.parse('BOOK.xml')
root = book.getroot()
titles = root.findall('.//title')
authors = root.findall('.//author')


###################################################


new_book = ET.Element('book', id='105') 
ET.SubElement(new_book, 'title').text = 'Data Science Fundamentals'
ET.SubElement(new_book, 'author').text = 'Linda Green'
ET.SubElement(new_book, 'genre').text = 'Data Science'
ET.SubElement(new_book, 'price').text = '40.99 USD'
ET.SubElement(new_book, 'published').text = '2023-11-20'
ET.SubElement(new_book, 'rating').text = '4.9'
root.append(new_book)
book.write('books.xml')
for title,author in zip(titles,authors):
  print(f"title: {title.text}, author: {author.text}")



for book in root.findall('book') :
    date = book.find('published')
    if date is not None:
        formatted_date = datetime.strptime(date.text, '%Y-%m-%d')
        if formatted_date >= datetime(2023, 1, 1):
            title = book.find('title').text
            author = book.find('author').text
            print(f"Title: {title}, Author: {author} Published: {date.text}")


books = []
magazines = []
for book in root.findall('book') :
    books.append({
        'title': book.find('title').text,
        'author': book.find('author').text
    })
for magazine in root.findall('magazine') :
    magazines.append({
        'title': magazine.find('title').text,
        'editor': magazine.find('editor').text
    })

json_books = json.dumps(books,indent=0)
json_magazines = json.dumps(magazines,indent=0)
print(json_magazines)


