while True:
    # Ask for a positive integer
    while True:
        n = input("Entrez un entier positif : ")
        try:
            n = int(n)
            if n > 0:
                break  # Valid input; exit inner loop
            else:
                print("Veuillez entrer un entier positif.")
        except ValueError:
            print("Veuillez entrer un entier valide.")

    # Display modulus results
    for i in range(1, n):  # Start from 1 to avoid division by zero
        print(f"{i} ==> classe {n % i}")

    # Ask if the user wants to close the program
    close_program = input("Entrez '1' pour fermer le programme, ou appuyez sur Entrée pour continuer : ")
    if close_program == "1":
        print("Programme fermé.")
        break

