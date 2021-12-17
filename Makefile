.PHONY: protogen-py
protogen-py:
	protoc -I./proto --python_out=./python ./proto/*.proto
