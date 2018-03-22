#pragma once

#ifndef INPUT_MANAGER_HPP
#define INPUT_MANAGER_HPP

namespace engine
{
	class input_manager {


	public:
		//CONSTRUCTOR
		input_manager();

		bool get_d();
		bool get_del();
		bool get_esc();

		/****************
		*
		GETTERS & SETTERS
		*
		****************/

		void set_d(bool dState);
		void set_del(bool delState);
		void set_esc(bool escState);


	private:

		bool dKey;		//this draws objects
		bool delKey;	//this deletes objects
		bool escKey;	//this closes App

	};
}
#endif // !INPUT_MANAGER_HPP