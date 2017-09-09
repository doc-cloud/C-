class Array {
public:
	Array(int length);
	Array(const Array & obj);
	~Array();

	int& operator[](int i);
	Array& operator=(Array &obj);
	bool operator==(Array &obj);
	bool operator!=(Array &obj);

	void setData(int index, int value);
	int getData(int index);
	int length();
private:
	int m_len;
	int *m_space;
};
