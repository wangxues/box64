#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

//GO(XF86VidModeGetViewPort, iFpipp)
//GO(XF86VidModeValidateModeLine, iFpip)
GO(XF86VidModeGetGamma, iFXip)
GO(XF86VidModeSetGamma, iFXip)
GO(XF86VidModeSetClientVersion, iFX)
GO(XF86VidModeGetGammaRamp, iFXiippp)
//GO(XF86VidModeGetMonitor, iFpip)
GO(XF86VidModeQueryVersion, iFXpp)
GO(XF86VidModeDeleteModeLine, iFXip)
GO(XF86VidModeGetModeLine, iFXipBWWWWWWWWWuip_)
GOM(XF86VidModeGetAllModeLines, iFEXipp)
GO(XF86VidModeSetGammaRamp, iFXiippp)
//GO(XF86VidModeGetPermissions, iFpip)
//GO(XF86VidModeModModeLine, iFpip)
GO(XF86VidModeSetViewPort, iFXiii)
GO(XF86VidModeSwitchMode, iFXii)
//GO(XF86VidModeAddModeLine, iFpipp)
GO(XF86VidModeSwitchToMode, iFXip)
GO(XF86VidModeQueryExtension, iFXpp)
GO(XF86VidModeGetGammaRampSize, iFXip)
//GO(XF86VidModeGetDotClocks, iFpipppp)
GO(XF86VidModeLockModeSwitch, iFXii)
