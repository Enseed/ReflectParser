#ifndef __RECLECT_CLASS_ERRORDTO.H__
#define __RECLECT_CLASS_ERRORDTO.H__

#include <Enseed/Reflect/Class.h>

namespace reflect {


template<> struct Class<ErrorDTO>
{
	typedef ErrorDTOtype

	class Fields
	{
		struct time
		{
			typedef time introspection_type;
			typedef boost::posix_time::ptime type;
			typedef const boost::posix_time::ptime const_type;
			typedef ErrorDTO host_type;
			typedef const ErrorDTO const_host_type;
			static constexpr name[] = "time";
			static constexpr reflect::Visibility::Value visibility = reflect::Visibility::PUBLIC;
			static const boost::posix_time::ptime& readRef(const ErrorDTO &target) { return target.time; }
			static boost::posix_time::ptime* writePtr(ErrorDTO *target) { return &target->time; }
		};
		struct id
		{
			typedef id introspection_type;
			typedef boost::uuids::uuid type;
			typedef const boost::uuids::uuid const_type;
			typedef ErrorDTO host_type;
			typedef const ErrorDTO const_host_type;
			static constexpr name[] = "id";
			static constexpr reflect::Visibility::Value visibility = reflect::Visibility::PUBLIC;
			static const boost::uuids::uuid& readRef(const ErrorDTO &target) { return target.id; }
			static boost::uuids::uuid* writePtr(ErrorDTO *target) { return &target->id; }
		};
		struct type
		{
			typedef type introspection_type;
			typedef std::string type;
			typedef const std::string const_type;
			typedef ErrorDTO host_type;
			typedef const ErrorDTO const_host_type;
			static constexpr name[] = "type";
			static constexpr reflect::Visibility::Value visibility = reflect::Visibility::PUBLIC;
			static const std::string& readRef(const ErrorDTO &target) { return target.type; }
			static std::string* writePtr(ErrorDTO *target) { return &target->type; }
		};
		struct message
		{
			typedef message introspection_type;
			typedef std::string type;
			typedef const std::string const_type;
			typedef ErrorDTO host_type;
			typedef const ErrorDTO const_host_type;
			static constexpr name[] = "message";
			static constexpr reflect::Visibility::Value visibility = reflect::Visibility::PUBLIC;
			static const std::string& readRef(const ErrorDTO &target) { return target.message; }
			static std::string* writePtr(ErrorDTO *target) { return &target->message; }
		};
		struct stack
		{
			typedef stack introspection_type;
			typedef int type;
			typedef const int const_type;
			typedef ErrorDTO host_type;
			typedef const ErrorDTO const_host_type;
			static constexpr name[] = "stack";
			static constexpr reflect::Visibility::Value visibility = reflect::Visibility::PUBLIC;
			static const int& readRef(const ErrorDTO &target) { return target.stack; }
			static int* writePtr(ErrorDTO *target) { return &target->stack; }
		};
		struct cause
		{
			typedef cause introspection_type;
			typedef std::shared_ptr<ErrorDTO> type;
			typedef const std::shared_ptr<ErrorDTO> const_type;
			typedef ErrorDTO host_type;
			typedef const ErrorDTO const_host_type;
			static constexpr name[] = "cause";
			static constexpr reflect::Visibility::Value visibility = reflect::Visibility::PUBLIC;
			static const std::shared_ptr<ErrorDTO>& readRef(const ErrorDTO &target) { return target.cause; }
			static std::shared_ptr<ErrorDTO>* writePtr(ErrorDTO *target) { return &target->cause; }
		};
	};
	template<typename CB> void visitParents()
	{
	}

	template<typename CB> void visitParents(CB &cb)
	{
	}

	template<typename CB> void visitParents(const ErrorDTO &target)
	{
	}

	template<typename CB> void visitParents(CB &cb, const ErrorDTO &target)
	{
	}

	template<typename CB> void visitParents(ErrorDTO *target)
	{
	}

	template<typename CB> void visitParents(CB &cb, ErrorDTO *target)
	{
	}

	template<typename CB> void visitFields(reflect::VisibilityMask::Value visibilityMask = reflect::VisibilityMask::STANDARD)
	{
		if ((visibilityMask & Fields::time::visibility) != 0)
			CB::operator()(Fields::time());
		if ((visibilityMask & Fields::id::visibility) != 0)
			CB::operator()(Fields::id());
		if ((visibilityMask & Fields::type::visibility) != 0)
			CB::operator()(Fields::type());
		if ((visibilityMask & Fields::message::visibility) != 0)
			CB::operator()(Fields::message());
		if ((visibilityMask & Fields::stack::visibility) != 0)
			CB::operator()(Fields::stack());
		if ((visibilityMask & Fields::cause::visibility) != 0)
			CB::operator()(Fields::cause());
	}

	template<typename CB> void visitFields(CB &cb, reflect::VisibilityMask::Value visibilityMask = reflect::VisibilityMask::STANDARD)
	{
		if ((visibilityMask & Fields::time::visibility) != 0)
			cb(Fields::time());
		if ((visibilityMask & Fields::id::visibility) != 0)
			cb(Fields::id());
		if ((visibilityMask & Fields::type::visibility) != 0)
			cb(Fields::type());
		if ((visibilityMask & Fields::message::visibility) != 0)
			cb(Fields::message());
		if ((visibilityMask & Fields::stack::visibility) != 0)
			cb(Fields::stack());
		if ((visibilityMask & Fields::cause::visibility) != 0)
			cb(Fields::cause());
	}

	template<typename CB> void visitFields(const ErrorDTO& target, reflect::VisibilityMask::Value visibilityMask = reflect::VisibilityMask::STANDARD)
	{
		if ((visibilityMask & Fields::time::visibility) != 0)
			CB::operator()(Fields::time(), Fields::time::readRef(target));
		if ((visibilityMask & Fields::id::visibility) != 0)
			CB::operator()(Fields::id(), Fields::id::readRef(target));
		if ((visibilityMask & Fields::type::visibility) != 0)
			CB::operator()(Fields::type(), Fields::type::readRef(target));
		if ((visibilityMask & Fields::message::visibility) != 0)
			CB::operator()(Fields::message(), Fields::message::readRef(target));
		if ((visibilityMask & Fields::stack::visibility) != 0)
			CB::operator()(Fields::stack(), Fields::stack::readRef(target));
		if ((visibilityMask & Fields::cause::visibility) != 0)
			CB::operator()(Fields::cause(), Fields::cause::readRef(target));
	}

	template<typename CB> void visitFields(ErrorDTO* target, reflect::VisibilityMask::Value visibilityMask = reflect::VisibilityMask::STANDARD)
	{
		if ((visibilityMask & Fields::time::visibility) != 0)
			CB::operator()(Fields::time(), Fields::time::writePtr(target));
		if ((visibilityMask & Fields::id::visibility) != 0)
			CB::operator()(Fields::id(), Fields::id::writePtr(target));
		if ((visibilityMask & Fields::type::visibility) != 0)
			CB::operator()(Fields::type(), Fields::type::writePtr(target));
		if ((visibilityMask & Fields::message::visibility) != 0)
			CB::operator()(Fields::message(), Fields::message::writePtr(target));
		if ((visibilityMask & Fields::stack::visibility) != 0)
			CB::operator()(Fields::stack(), Fields::stack::writePtr(target));
		if ((visibilityMask & Fields::cause::visibility) != 0)
			CB::operator()(Fields::cause(), Fields::cause::writePtr(target));
	}

	template<typename CB> void visitFields(CB &cb, const ErrorDTO& target, reflect::VisibilityMask::Value visibilityMask = reflect::VisibilityMask::STANDARD)
	{
		if ((visibilityMask & Fields::time::visibility) != 0)
			cb(Fields::time(), Fields::time::readRef(target));
		if ((visibilityMask & Fields::id::visibility) != 0)
			cb(Fields::id(), Fields::id::readRef(target));
		if ((visibilityMask & Fields::type::visibility) != 0)
			cb(Fields::type(), Fields::type::readRef(target));
		if ((visibilityMask & Fields::message::visibility) != 0)
			cb(Fields::message(), Fields::message::readRef(target));
		if ((visibilityMask & Fields::stack::visibility) != 0)
			cb(Fields::stack(), Fields::stack::readRef(target));
		if ((visibilityMask & Fields::cause::visibility) != 0)
			cb(Fields::cause(), Fields::cause::readRef(target));
	}

	template<typename CB> void visitFields(CB &cbErrorDTO* target, reflect::VisibilityMask::Value visibilityMask = reflect::VisibilityMask::STANDARD)
	{
		if ((visibilityMask & Fields::time::visibility) != 0)
			cb(Fields::time(), Fields::time::writePtr(target));
		if ((visibilityMask & Fields::id::visibility) != 0)
			cb(Fields::id(), Fields::id::writePtr(target));
		if ((visibilityMask & Fields::type::visibility) != 0)
			cb(Fields::type(), Fields::type::writePtr(target));
		if ((visibilityMask & Fields::message::visibility) != 0)
			cb(Fields::message(), Fields::message::writePtr(target));
		if ((visibilityMask & Fields::stack::visibility) != 0)
			cb(Fields::stack(), Fields::stack::writePtr(target));
		if ((visibilityMask & Fields::cause::visibility) != 0)
			cb(Fields::cause(), Fields::cause::writePtr(target));
	}

	template<typename CB> void visitFieldsRecursive(reflect::VisibilityMask::Value visibilityMask = reflect::VisibilityMask::STANDARD)
	{
		if ((visibilityMask & Fields::time::visibility) != 0)
			CB::operator()(Fields::time());
		if ((visibilityMask & Fields::id::visibility) != 0)
			CB::operator()(Fields::id());
		if ((visibilityMask & Fields::type::visibility) != 0)
			CB::operator()(Fields::type());
		if ((visibilityMask & Fields::message::visibility) != 0)
			CB::operator()(Fields::message());
		if ((visibilityMask & Fields::stack::visibility) != 0)
			CB::operator()(Fields::stack());
		if ((visibilityMask & Fields::cause::visibility) != 0)
			CB::operator()(Fields::cause());

		visitParents([auto &parentClass] { parentClass.visitFieldsRecursive<CB>(visibilityMask == reflect::VisibilityMask::STANDARD ? reflect::VisibilityMask::PUBLIC_AND_PROTECTED : visibilityMask); })
	}

	template<typename CB> void visitFieldsRecursive(CB &cb, reflect::VisibilityMask::Value visibilityMask = reflect::VisibilityMask::STANDARD)
	{
		if ((visibilityMask & Fields::time::visibility) != 0)
			cb(Fields::time());
		if ((visibilityMask & Fields::id::visibility) != 0)
			cb(Fields::id());
		if ((visibilityMask & Fields::type::visibility) != 0)
			cb(Fields::type());
		if ((visibilityMask & Fields::message::visibility) != 0)
			cb(Fields::message());
		if ((visibilityMask & Fields::stack::visibility) != 0)
			cb(Fields::stack());
		if ((visibilityMask & Fields::cause::visibility) != 0)
			cb(Fields::cause());

		visitParents([auto &parentClass] { parentClass.visitFieldsRecursive(cb, visibilityMask == reflect::VisibilityMask::STANDARD ? reflect::VisibilityMask::PUBLIC_AND_PROTECTED : visibilityMask); })
	}

	template<typename CB> void visitFieldsRecursive(const ErrorDTO &target, reflect::VisibilityMask::Value visibilityMask = reflect::VisibilityMask::STANDARD)
	{
		if ((visibilityMask & Fields::time::visibility) != 0)
			CB::operator()(Fields::time(), Fields::time::readRef(target));
		if ((visibilityMask & Fields::id::visibility) != 0)
			CB::operator()(Fields::id(), Fields::id::readRef(target));
		if ((visibilityMask & Fields::type::visibility) != 0)
			CB::operator()(Fields::type(), Fields::type::readRef(target));
		if ((visibilityMask & Fields::message::visibility) != 0)
			CB::operator()(Fields::message(), Fields::message::readRef(target));
		if ((visibilityMask & Fields::stack::visibility) != 0)
			CB::operator()(Fields::stack(), Fields::stack::readRef(target));
		if ((visibilityMask & Fields::cause::visibility) != 0)
			CB::operator()(Fields::cause(), Fields::cause::readRef(target));

		visitParents([auto &parentClass] { parentClass.visitFieldsRecursive<CB>(target, visibilityMask == reflect::VisibilityMask::STANDARD ? reflect::VisibilityMask::PUBLIC_AND_PROTECTED : visibilityMask); })
	}

	template<typename CB> void visitFieldsRecursive(CB &cb, const ErrorDTO &target, reflect::VisibilityMask::Value visibilityMask = reflect::VisibilityMask::STANDARD)
	{
		if ((visibilityMask & Fields::time::visibility) != 0)
			cb()(Fields::time(), Fields::time::readRef(target));
		if ((visibilityMask & Fields::id::visibility) != 0)
			cb()(Fields::id(), Fields::id::readRef(target));
		if ((visibilityMask & Fields::type::visibility) != 0)
			cb()(Fields::type(), Fields::type::readRef(target));
		if ((visibilityMask & Fields::message::visibility) != 0)
			cb()(Fields::message(), Fields::message::readRef(target));
		if ((visibilityMask & Fields::stack::visibility) != 0)
			cb()(Fields::stack(), Fields::stack::readRef(target));
		if ((visibilityMask & Fields::cause::visibility) != 0)
			cb()(Fields::cause(), Fields::cause::readRef(target));

		visitParents([auto &parentClass] { parentClass.visitFieldsRecursive(cb, target, visibilityMask == reflect::VisibilityMask::STANDARD ? reflect::VisibilityMask::PUBLIC_AND_PROTECTED : visibilityMask); })
	}

	template<typename CB> void visitFieldsRecursive(ErrorDTO *target, reflect::VisibilityMask::Value visibilityMask = reflect::VisibilityMask::STANDARD)
	{
		if ((visibilityMask & Fields::time::visibility) != 0)
			CB::operator()(Fields::time(), Fields::time::writePtr(target));
		if ((visibilityMask & Fields::id::visibility) != 0)
			CB::operator()(Fields::id(), Fields::id::writePtr(target));
		if ((visibilityMask & Fields::type::visibility) != 0)
			CB::operator()(Fields::type(), Fields::type::writePtr(target));
		if ((visibilityMask & Fields::message::visibility) != 0)
			CB::operator()(Fields::message(), Fields::message::writePtr(target));
		if ((visibilityMask & Fields::stack::visibility) != 0)
			CB::operator()(Fields::stack(), Fields::stack::writePtr(target));
		if ((visibilityMask & Fields::cause::visibility) != 0)
			CB::operator()(Fields::cause(), Fields::cause::writePtr(target));

		visitParents([auto &parentClass] { parentClass.visitFieldsRecursive<CB>(target, visibilityMask == reflect::VisibilityMask::STANDARD ? reflect::VisibilityMask::PUBLIC_AND_PROTECTED : visibilityMask); })
	}

	template<typename CB> void visitFieldsRecursive(CB &cb, ErrorDTO *target, reflect::VisibilityMask::Value visibilityMask = reflect::VisibilityMask::STANDARD)
	{
		if ((visibilityMask & Fields::time::visibility) != 0)
			cb()(Fields::time(), Fields::time::writePtr(target));
		if ((visibilityMask & Fields::id::visibility) != 0)
			cb()(Fields::id(), Fields::id::writePtr(target));
		if ((visibilityMask & Fields::type::visibility) != 0)
			cb()(Fields::type(), Fields::type::writePtr(target));
		if ((visibilityMask & Fields::message::visibility) != 0)
			cb()(Fields::message(), Fields::message::writePtr(target));
		if ((visibilityMask & Fields::stack::visibility) != 0)
			cb()(Fields::stack(), Fields::stack::writePtr(target));
		if ((visibilityMask & Fields::cause::visibility) != 0)
			cb()(Fields::cause(), Fields::cause::writePtr(target));

		visitParents([auto &parentClass] { parentClass.visitFieldsRecursive(cb, target, visibilityMask == reflect::VisibilityMask::STANDARD ? reflect::VisibilityMask::PUBLIC_AND_PROTECTED : visibilityMask); })
	}
};

} // namespace reflect

#endif // __RECLECT_CLASS_ERRORDTO.H__
