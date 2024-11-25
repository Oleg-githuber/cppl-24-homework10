#ifndef MY_SIMPLE_ANALOG_OF_UNIQUE_PTR
#define MY_SIMPLE_ANALOG_OF_UNIQUE_PTR

namespace my_simple_ptr
{
	template<class MyType>
	class simple_ptr
	{
	private:

		MyType* value{ nullptr };

	public:

		simple_ptr(MyType* my_ptr) : value{ my_ptr }
		{}

		simple_ptr(const simple_ptr<MyType>& other) = delete;

		MyType operator*()
		{
			return *value;
		}

		auto operator=(const simple_ptr<MyType>& other) = delete;

		MyType* release()
		{
			MyType* temp{ value };
			value = nullptr;
			return temp;
		}

		~simple_ptr()
		{
			delete value;
		}
	};
}
#endif // !MY_SIMPLE_ANALOG_OF_UNIQUE_PTR
