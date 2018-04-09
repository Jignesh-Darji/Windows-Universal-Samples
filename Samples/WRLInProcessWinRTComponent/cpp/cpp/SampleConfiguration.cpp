// Copyright (c) Microsoft. All rights reserved.

#include "pch.h"
#include "MainPage.xaml.h"
#include "SampleConfiguration.h"

using namespace SDKTemplate;

Platform::Array<Scenario>^ MainPage::scenariosInner = ref new Platform::Array<Scenario>
{
    // The format here is the following:
    { "Using Custom Components",                                     "SDKTemplate.WRLInProcessWinRTComponent.OvenClient" },
    { "Using Custom Components (Implemented using WRL)",             "SDKTemplate.WRLInProcessWinRTComponent.OvenClientWRL" },
    { "Handling Windows Runtime Exceptions",                         "SDKTemplate.WRLInProcessWinRTComponent.CustomException" },
    { "Handling Windows Runtime Exceptions (Implemented using WRL)", "SDKTemplate.WRLInProcessWinRTComponent.CustomExceptionWRL" }
};
