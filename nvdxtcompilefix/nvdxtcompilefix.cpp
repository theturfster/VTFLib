#include <string>
#include <stdexcept>

namespace std2008
{
	class _String_base_2008
	{
		public:
			__declspec(dllexport) void _Xlen2008(void) const;
			__declspec(dllexport) void _Xran2008(void) const;
	};
	
	class exception_2008
	{
		public:
			__declspec(dllexport) void exception(const char* const &message);
	};
};

void std2008::_String_base_2008::_Xran2008() const
{
}	

void std2008::_String_base_2008::_Xlen2008() const
{
}

void std2008::exception_2008::exception(const char* const &message)
{
	std::exception::exception(message);
}
