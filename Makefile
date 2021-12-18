.PHONY: protogen-py
protogen-py:
	protoc -I./proto --python_out=./python ./proto/*.proto

.PHONY: protogen-cpp
protogen-cpp:
	protoc -I./proto --cpp_out=./cpp ./proto/*.proto

.PHONY: bin-cpp
bin-cpp: cpp/test

cpp/test: cpp/test.o cpp/scalar.pb.o
	g++ -Wall -o $@ -lprotobuf $^

cpp/%.o: cpp/%.cc
	g++ -Wall -c -o $@ $<

.PHONY: clean-cpp
clean-cpp:
	-rm cpp/test
	-rm cpp/*.o
