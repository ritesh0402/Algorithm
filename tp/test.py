import os
file_path = 'bookdata.txt'

bookdata = open("bookdata.txt", "w+")
book = {"Title": 0, "Author": 1, "Booktype": 2, "Publication": 3, "Price": 4}
if os.path.getsize(file_path) == 0:
    print('File is empty')
    print("Enter the details of three books")
    for j in range(0, 3):

        book["Title"] = input("Enter the title: ")
        book["Author"] = input("Enter the author name: ")
        book["Booktype"] = input("Enter the booktype: ")
        book["Publication"] = input("Enter the publication: ")
        book["Price"] = input("Enter the price: ")

        print(book)
        with open("bookdata.txt", 'a') as f:
            for key, value in book.items():
                f.write('%s : %s\t' % (key, value))
            f.write('\n')

    print(bookdata.read())

else:
    print(bookdata.read())


bookdata.close()
