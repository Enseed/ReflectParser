#ifndef __ERRORDTO__
#define __ERRORDTO__

#include <string>
#include <memory>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/optional.hpp>


struct ErrorDTO
{
	boost::posix_time::ptime time;
	boost::uuids::uuid id;
	std::string type;
	std::string message;
	boost::optional<std::vector<std::string>> stack;
	std::shared_ptr<ErrorDTO> cause;
};

#endif // __ERRORDTO__