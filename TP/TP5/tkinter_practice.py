import tkinter as tk

def on_submit():
    name = name_entry.get().strip()
    if not name:
        name = "Guest"
    greeting_label.config(text=f"Hello, {name}! Welcome!")

root = tk.Tk()
root.title("Practical Section - Tkinter")
root.configure(bg="lightblue")
root.geometry("600x400")

welcome = tk.Label(root, text="Welcome to Tkinter Practical Section!", font=("Arial", 16))
welcome.pack(pady=10)

name_entry = tk.Entry(root, font=("Arial", 14), width=30)
name_entry.pack(pady=10)

submit_button = tk.Button(root, text="Submit", font=("Arial", 12), command=on_submit)
submit_button.pack(pady=10)

greeting_label = tk.Label(root, text="", font=("Arial", 14))
greeting_label.pack(pady=10)

root.mainloop()
