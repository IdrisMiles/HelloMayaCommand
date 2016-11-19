#include "include/helloMaya.h"

const char* HelloMayaCommand::s_commandName = "helloMaya";
const char* HelloMayaCommand::s_author = "Idris Miles";
const char* HelloMayaCommand::s_pluginVersion = "1.0";
const char* HelloMayaCommand::s_mayaVersion = "Any";

HelloMayaCommand::HelloMayaCommand()
{

}

MStatus HelloMayaCommand::doIt(const MArgList&)
{
    MGlobal::displayInfo("Hello Maya!");
    return MS::kSuccess;
}

void* HelloMayaCommand::creator()
{
    return new HelloMayaCommand();
}
