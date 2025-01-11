#ifndef IH_LOGGER_HPP
#define IH_LOGGER_HPP

#include "settings.hpp"
#include <fstream>

namespace ih
{
  class Logger
  {
    private:
      std::ofstream logFile;
      uint8 logLevel;

      void writeMessage(const std::string& text);
      void formatAndWriteMessage(const std::string& messageType, const std::string& text);

      std::string generateLogFilePath(const std::string& basePath);

    public:
      Logger(const std::string& logsPath, uint8 logLevel);
      ~Logger();
      void info(const std::string& text, uint8 logLevel);
      void warning(const std::string& text, uint8 logLevel);
      void error(const std::string& text);
      void criticalError(const std::string& text);
  };
}

#endif
