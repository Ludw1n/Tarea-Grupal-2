#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <stack>
#include <regex>

using namespace std;

struct Palabra {
    string traduccion;
    string funcionalidad;
};

map<string, Palabra> diccionario;
const string archivoNombre = "diccionario.dat";

string palabrasBase[] = {
    "asm", "auto", "bool", "break", "case", "catch", "char", "class", "const",
    "const_cast", "continue", "default", "delete", "do", "double", "dynamic_cast",
    "else", "enum", "explicit", "extern", "false", "float", "for", "friend", "goto",
    "if", "inline", "int", "long", "mutable", "namespace", "new", "operator",
    "private", "protected", "public", "register", "reinterpret_cast", "return",
    "short", "signed", "sizeof", "static", "static_cast", "struct", "switch",
    "template", "this", "throw", "true", "try", "typedef", "typeid", "typename",
    "union", "unsigned", "using", "virtual", "void", "volatile", "while"
};

