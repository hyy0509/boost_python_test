# boost_python_test
ubuntu安装libboost-python 
sudo apt -y install libpython2.7-dev libboost-python-dev


test method:
lw@lw-pc:~/Documents/git_huang/boost_python_test/build$ python
Python 2.7.12 (default, Oct  8 2019, 14:14:10) 
[GCC 5.4.0 20160609] on linux2
Type "help", "copyright", "credits" or "license" for more information.
>>> import hello
>>> w = hello.World("Hi")
>>> w.greet()
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
AttributeError: 'World' object has no attribute 'greet'
>>> w.Greet()
'Hi'
>>> 

