lib:
  rm libsay_hello.a
  g++ say_hello.cpp -c
  ar rc libsay_hello.a say_hello.o
  ranlib libsay_hello.a

g++ main.cpp -Ilib -lsay_hello -Llib
