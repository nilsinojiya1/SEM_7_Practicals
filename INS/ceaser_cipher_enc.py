def encrypt(key, message):
    message = message.upper()
    alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    encryption = ""
    for letter in message:
        if letter in alpha:
            index = (alpha.find(letter) + key) % len(alpha)
            encryption = encryption + alpha[index]
        else:
            encryption = encryption + letter

    return encryption


print("Ency_Message= " + encrypt(3, "hello"))
