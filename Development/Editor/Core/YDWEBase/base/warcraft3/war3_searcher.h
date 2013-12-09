#pragma once

#include <base/config.h>
#include <base/warcraft3/basic_searcher.h>

namespace base { namespace warcraft3 {

	class _BASE_API war3_searcher : public basic_searcher
	{
		typedef basic_searcher _Mybase;
	public:
		war3_searcher();
		war3_searcher(HMODULE hGameDll);

		uint32_t  get_version() const;
		uint32_t  get_instance(uint32_t index);
		uint32_t  get_gameui(uint32_t unk0, uint32_t unk1);
		bool      is_gaming();
		uintptr_t unit_handle_to_object(uint32_t handle);

	private:
		uint32_t  search_version() const;
		uintptr_t search_get_instance() const;
		uintptr_t search_get_gameui() const;
		uintptr_t search_unit_handle_to_object() const;

	private:
		uint32_t  version_;
		uintptr_t get_instance_;
		uintptr_t get_gameui_;
		uintptr_t unit_handle_to_object_;
	};

	_BASE_API war3_searcher& get_war3_searcher();
	_BASE_API const char*    get_class_name(uintptr_t ptr);
}}
