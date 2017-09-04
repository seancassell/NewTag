#include "NewTag.hpp"


// Program entry point:
int main (int argc, char *argv[]) {
	const std::string TEST_FILE_PATH = "C:\\Tools\\test\\test2.c";
	std::string file_name = DeduceFilename(TEST_FILE_PATH);
	std::cout << "File Path   : " << TEST_FILE_PATH
		<< "Filename    : " << file_name 
		<< "File exists : " << (DoesFileExist(TEST_FILE_PATH) ? 'Y' : 'N') << std::endl;
	return EXIT_SUCCESS;
}


// Uses Regex to isolate the filename from the full path:
// Adapted from: https://stackoverflow.com/a/9363293 and
// https://stackoverflow.com/a/9367263
inline std::string DeduceFilename (const std::string_view &str) {
	fs::path p(str.data());
	return p.filename().string();
}


// Checks to see if the specified filename exists:
inline auto DoesFileExist (const std::string_view &target) -> bool {
	fs::path _path(target.data());
	if (fs::exists(_path) && fs::is_regular_file(_path)) {
		return true;
	} else {
		return false;
	}
}