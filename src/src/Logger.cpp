#include "../Logger.hpp"
#include "../Time.hpp"
#include <filesystem>
#include <iostream>

namespace ih
{
  void Logger::writeMessage(const std::string& text)
  {
    logFile << text;
    std::cout << text;
  }

  void Logger::formatAndWriteMessage(const std::string& messageType, const std::string& text)
  {
    std::ostringstream oss;
    oss << "\t" << messageType << '(' << GetNowTime() << "): " << text << "\n";
    writeMessage(oss.str());
  }

  std::string Logger::generateLogFilePath(const std::string& basePath)
  {
    std::string filePath = basePath;
    int counter = 1;

    while (std::filesystem::exists(filePath))
      filePath = basePath + "_" + std::to_string(counter++);
      
    return filePath;
  }

  Logger::Logger(const std::string& logsPath, uint8_t logLevel): logLevel(logLevel)
  {
    logFile.open(generateLogFilePath(logsPath), std::ios::app);
    writeMessage("START\n");
  }

  void Logger::info(const std::string& text, uint8_t logLevel)
  {
    if (logLevel <= this->logLevel)
      formatAndWriteMessage("INFO", text);
  }

  void Logger::warning(const std::string& text, uint8_t logLevel)
  {
    if (logLevel <= this->logLevel)
      formatAndWriteMessage("WARNING", text);
  }

  void Logger::error(const std::string& text)
    { formatAndWriteMessage("ERROR", text); }

  void Logger::criticalError(const std::string& text)
    { formatAndWriteMessage("CRITICAL ERROR", text); }

  Logger::~Logger()
  {
    writeMessage("END");
    logFile.close();
  }
}
