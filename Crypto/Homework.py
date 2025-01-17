import sys

def pgcd(a, b):
    while b:
        a, b = b, a % b
    return a

def extended_pgcd(a, b):
    if b == 0:
        return a, 1, 0
    gcd, x1, y1 = extended_pgcd(b, a % b)
    x = y1
    y = x1 - (a // b) * y1
    return gcd, x, y

def inverse_mul(e, phi):
    gcd, x, _ = extended_pgcd(e, phi)
    if gcd != 1:
        raise ValueError("Modular inverse does not exist for the given values.")
    return x % phi

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

# RSA Key Generation
def generate_keys():
    while True:
        try:
            p = int(input("Enter a prime number for p: "))
            if not is_prime(p):
                raise ValueError(f"{p} is not a prime number.")

            q = int(input("Enter a different prime number for q: "))
            if not is_prime(q):
                raise ValueError(f"{q} is not a prime number.")
            if p == q:
                raise ValueError("p and q must be different.")

            n = p * q
            phi = (p - 1) * (q - 1)

            # Choose e such that 1 < e < phi and gcd(e, phi) == 1
            e = 3
            while pgcd(e, phi) != 1:
                e += 2

            d = inverse_mul(e, phi)

            print("\nKeys generated successfully!")
            return (e, n), (d, n)  # Public and private keys
        except ValueError as ve:
            print(f"Error: {ve}. Please try again.")

# Encryption and Decryption
def encrypt(message, public_key):
    e, n = public_key
    return [(ord(char)  e) % n for char in message]

def decrypt(cipher, private_key):
    d, n = private_key
    return ''.join([chr((char  d) % n) for char in cipher])

# Main Menu
def rsa_menu():
    while True:
        try:
            public_key, private_key = generate_keys()
            print("\nPublic Key:", public_key)
            print("Private Key:", private_key)

            message = input("\nEnter the message to encrypt: ")
            cipher = encrypt(message, public_key)
            print("\nEncrypted Message:", cipher)

            decrypted_message = decrypt(cipher, private_key)
            print("Decrypted Message:", decrypted_message)

            # Command Menu
            while True:
                print("hint : put large numbers in order to crypt longer messages")
                command = input("\nDo you want to try again or quit? (retry [r] /quit [q]): ").strip().lower()
                if command == "r":
                    break
                elif command == "q":
                    print("Goodbye!")
                    sys.exit()
                else:
                    print("Invalid input. Please enter 'retry' or 'quit'.")
        except KeyboardInterrupt:
            print("\nExiting the program. Goodbye!")
            sys.exit()

# Run the Application
if name == "main":
    rsa_menu()