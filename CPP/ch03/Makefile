# Build Directory
BUILD_DIR = build

# if ./build exists, clean it up and run the build process -> generate image
# else, create ./build and run ^
out:
	if [ -e "$(BUILD_DIR)/" ] ; \
	then \
			rm -rf ./build/* ; \
			cd ./build &&	cmake .. && make &&	./Main >> out.ppm ; \
	else \
			mkdir ./build ; \
			cd ./build &&	cmake .. && make &&	./Main >> out.ppm ; \
	fi ;
