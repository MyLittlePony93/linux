void modifyString(std::string& str_in)
{
    str_in = "other string";
}

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
