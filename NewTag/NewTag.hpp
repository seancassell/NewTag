// HEADER GUARD:
#pragma once

// INCLUDED HEADERS:
#include <MySTL/MySTL.hpp>
#include <pugixml/pugixml.hpp>
#include <id3v2lib/id3v2lib.h>
#include <omp.h>


// NAMESPACE ALIASES:
namespace fs = std::experimental::filesystem;


// FUNCTION SIGNATURES:
int main (int argc, char *argv[]);
inline std::string DeduceFilename (const std::string_view &str);
inline auto DoesFileExist (const std::string_view &target)->bool;
