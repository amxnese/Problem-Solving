# Tkinter Homework for amine sedrata and laaraf mohamed soheib Group 2
import tkinter as tk
from tkinter import messagebox, font
from regex import *

def perform_action():
    # getting the text that the user has inserted
    input_text = entry.get()
    # Getting the option that the user has selected
    operation = operation_var.get()
    complete_action(input_text, operation)

def complete_action(input_text, operation):
    result = ""
    # Interacting based on the user's choice
    if operation == "Check if only alphabets":
        result = is_alpha_only(input_text)
    elif operation == "Find digits":
        result = find_digits(input_text)
    elif operation == "Extract email addresses":
        result = extract_emails(input_text)
    elif operation == "Validate date":
        result = validate_date(input_text)
    elif operation == "Validate password":
        result = validate_password(input_text)
    elif operation == "Extract hashtags":
        result = extract_hashtags(input_text)
    elif operation == "Find capitalized words":
        result = find_capitalized_words(input_text)
    if isinstance(result,list) and not result:
        result = "No results found."

    # pop up message to show the result
    messagebox.showinfo("Result", str(result))

# Creating the main window
app = tk.Tk()
app.title("TP2 Operations GUI")
app.configure(bg='lightblue')

# Creating a custom font to use for all objects
custom_font = font.Font(size=15)

# Creating a Welcoming label
welcome = tk.Label(app, text="Welcome To The RegEx GUI" ,width=50, font=("Helvetica", 24, "bold"))
welcome.pack(pady=45)

# Creating a Label that triggers the user to enter a text
tk.Label(app, text="Insert Your Text Here:",widt=20, font=("Helvetica", 14, "bold")).pack(pady=10)

# Creating the entry that the user interacts with 
entry = tk.Entry(app, width=50, bg='white', fg='black', font=("Helvetica", 15, "bold"))
entry.pack(padx=10, pady=10)

# Creating a StringVar to hold the user's options
operation_var = tk.StringVar(app)
# Setting Default value for the StringVar
operation_var.set("Check if only alphabets")
# Available Options
operations = [
    "Check if only alphabets",
    "Find digits",
    "Extract email addresses",
    "Validate date",
    "Validate password",
    "Extract hashtags",
    "Find capitalized words"
]

# Creating a Dropdown menu and passing our variables to it
operation_menu = tk.OptionMenu(app, operation_var, *operations)
operation_menu.config(bg='white', fg='black')
operation_menu.pack(pady=10)
operation_menu.config(font=("Arial", 10, "bold"))

# Creating our submit button
submit_button = tk.Button(app,text="Submit",
                              command=perform_action,
                              cursor='hand2', 
                              bg='silver',
                              font=("Helvetica", 12, "bold"))
submit_button.pack(pady=10)

app.mainloop()