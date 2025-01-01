def encrypt(text, key):
    encrypted_text = ""
    for char in text:
        if char.isalpha():  # Check if the character is an alphabet
            shifted = ord(char) + key  # Shift the character by the key value
            if char.islower():
                if shifted > ord('z'):
                    shifted -= 26
                elif shifted < ord('a'):
                    shifted += 26
            elif char.isupper():
                if shifted > ord('Z'):
                    shifted -= 26
                elif shifted < ord('A'):
                    shifted += 26
            encrypted_text += chr(shifted)  # Convert shifted ASCII value back to character and append to the encrypted text
        else:
            encrypted_text += char  # If character is not an alphabet, keep it unchanged
    return encrypted_text

def decrypt(text, key):
    return encrypt(text, -key)  # Decrypting is just encrypting with the negative of the key

def main():
    message = input("Enter the message to encrypt: ")
    key = int(input("Enter the key value (an integer): "))  # Ask user for key input

    encrypted_message = encrypt(message, key)
    print("Encrypted message:", encrypted_message)

    decrypted_message = decrypt(encrypted_message, key)
    print("Decrypted message:", decrypted_message)

if __name__ == "__main__":
    main()