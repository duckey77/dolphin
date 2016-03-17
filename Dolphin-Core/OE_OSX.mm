/*
 Copyright (c) 2016, OpenEmu Team
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright
 notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
 notice, this list of conditions and the following disclaimer in the
 documentation and/or other materials provided with the distribution.
 * Neither the name of the OpenEmu Team nor the
 names of its contributors may be used to endorse or promote products
 derived from this software without specific prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY OpenEmu Team ''AS IS'' AND ANY
 EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL OpenEmu Team BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#include <Foundation/Foundation.h>
#include <IOKit/hid/IOHIDLib.h>
#include <Cocoa/Cocoa.h>

#include "InputCommon/ControllerInterface/OSX/OSX.h"
//#include "OE_OSXKeyboard.h"
#include "OE_OSXJoystick.h"

#include <map>

namespace ciface
{
    namespace OSX
    {

        static std::map<std::string, int> kbd_name_counts, joy_name_counts;

        void DeviceElementDebugPrint(const void *value, void *context)
        {
        }

        void Init(std::vector<Core::Device*>& devices, void *window)
        {
            // Create 4 OE joysticks
            devices.push_back(new Joystick("OE_GameDev0", joy_name_counts["OE_GameDev0"]++));
            devices.push_back(new Joystick("OE_GameDev1", joy_name_counts["OE_GameDev1"]++));
            devices.push_back(new Joystick("OE_GameDev2", joy_name_counts["OE_GameDev2"]++));
            devices.push_back(new Joystick("OE_GameDev3", joy_name_counts["OE_GameDev3"]++));
        }
        
        void DeInit()
        {
        }
    }
}