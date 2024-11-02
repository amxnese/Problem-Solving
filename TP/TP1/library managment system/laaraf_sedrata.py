# python tp1 library homework for sedrata amine and laaraf med soheib
class library:
  def __init__(self, books:list):
    self.books = books
    self.archive = books

  def open(self):
    print("welcome to the library, please insert your next action:")
    while True:
      while True:
        try:
          choice =int(input(
          '''
1 : for adding a book 
2 : for borrowing a book
3 : for returning a book
4 : for displaying available books
5 : for buying a book
6 : to close the library
enter your choice here:  '''))
          break
        except ValueError:
          print("invalid input!")
          continue
      if   choice == 1:  self.add()
      elif choice == 2:  self.borrow()
      elif choice == 3:  self.return_book()
      elif choice == 4:  self.displayavailablebook()
      elif choice == 5:  self.buy()
      elif choice == 6:  print("thanks for visiting our humble library, hope we see you soon!"); break
      else:              print('invalid input!!')

  def search(self, book):
      return True if book in self.books else False

  def borrow(self):
    book = input("what book do you want to borrow:  ").lower()
    if self.search(book):
      print(f"\nyour book was delivered, please return it in less than a month")
      self.books.remove(book)
    else:
      print("\nSorry, This book is unavaillable for the moment!") 

  def buy(self):
    book = input("what book do you want to buy:  ").lower()
    if self.search(book):
      print(f"\nyour book was delivered, enjoy!")
      self.books.remove(book)
      self.archive.remove(book)
    else:
      print("\nSorry, This book is unavaillable for the moment!") 

  def return_book(self):
    book = input("what book are you returning:  ").lower()
    if book in self.archive:
      self.books.append(book)
      print(f"\n{book} has been returned successfully, thanks for your loyalty")
    else:
      print("\nthis book wasn't borrowed from our library")

  def displayavailablebook(self):
      print("our availlable books are: \n")
      for book in sorted(self.books): 
        print(book)

  def add(self):
    book = input("what book are you adding:  ")
    self.books.append(book)
    self.archive.append(book)
    print(f'\n{book} has been added successfully!')

lib = library(['the great gatsby', '1984', 'ice and fire', 'chrime and punishment'])

lib.open()