all : Vector.class testVector.class test

Vector.class : Vector.java
	javac Vector.java

testVector.class : Vector.class testVector.java
	javac testVector.java

clean :
	rm Vector.class testVector.class

test :
	java testVector
