#include <IHSystem/Logger.hpp>
#include <IHSystem/FileSystem.hpp>
#include <stdexcept>

void Error()
{ throw std::runtime_error("ERROR"); }

int main()
{
  std::string execDirectory(ih::GetExecutableDirectory());
  ih::Logger logger(execDirectory+"/Files/Log", 3);

  logger.info("Executable file directory: " + execDirectory, 3);
  
  if (execDirectory == "")
    throw std::runtime_error("Indvalid executable directory");

  int8 yourAge = 10; // you can change this variable and check log chenges
  
  try
  {
    logger.info("App has started!", 5);

    if (yourAge < 0)
    {
      logger.warning("Your age is negative!", 2);
      logger.info("Your age set as 0", 3);
      yourAge = 0;
    }

    Error();
  }
  
  catch (const std::runtime_error& e)
    { logger.error(e.what()); }
    
  catch (const std::out_of_range& oor)
    { logger.criticalError(oor.what());}
  
  return 0;
}
