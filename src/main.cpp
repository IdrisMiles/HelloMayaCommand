#include <maya/MFnPlugin.h>

#include "include/helloMaya.h"


MStatus initializePlugin(MObject obj)
{
    MFnPlugin plugin(obj, HelloMayaCommand::s_author, HelloMayaCommand::s_pluginVersion, HelloMayaCommand::s_mayaVersion);
    MStatus status = plugin.registerCommand(HelloMayaCommand::s_commandName, HelloMayaCommand::creator);

    CHECK_MSTATUS_AND_RETURN_IT(status);
    return status;
}


MStatus uninitializePlugin(MObject obj)
{
    MFnPlugin plugin(obj);
    MStatus status = plugin.deregisterCommand(HelloMayaCommand::s_commandName);

    CHECK_MSTATUS_AND_RETURN_IT(status);
    return status;
}
