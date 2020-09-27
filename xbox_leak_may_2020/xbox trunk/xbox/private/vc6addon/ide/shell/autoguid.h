// GUIDs used in our automation object model that are not exposed to the user
//  in include\objmodel\appguid.h.  These are the dispinterface IDs and the
//  CLSIDs which are declared in the type library and used internally to 
//  implement the objects, but are not exposed to C++ clients through our
//  headers.

// {2769BF40-1930-11cf-8E4D-00AA004254C4}
DEFINE_GUID(IID_IDispApplication, 
0x2769bf40, 0x1930, 0x11cf, 0x8e, 0x4d, 0x0, 0xaa, 0x0, 0x42, 0x54, 0xc4);

// {E9EB1AE1-89A8-11CF-9BE8-00A0C90A632C}
DEFINE_GUID(IID_IDispDocuments,
0xE9EB1AE1L,0x89A8,0x11CF,0x9B,0xE8,0x00,0xA0,0xC9,0x0A,0x63,0x2C);

// {E9EB1AE2-89A8-11CF-9BE8-00A0C90A632C}
DEFINE_GUID(CLSID_Documents,
0xE9EB1AE2L,0x89A8,0x11CF,0x9B,0xE8,0x00,0xA0,0xC9,0x0A,0x63,0x2C);

// AutoWindows Dispatch GUID.
// {5774D191-96E1-11CF-9C00-00A0C90A632C}
DEFINE_GUID(IID_IDispWindows,
0x5774D191L, 0x96E1, 0x11CF, 0x9C, 0x00, 0x00, 0xA, 0xC9, 0x0A, 0x63, 0x2C);

// {5774D192-96E1-11CF-9C00-00A0C90A632C}
DEFINE_GUID(CLSID_Windows,
0x5774D192L, 0x96E1, 0x11CF, 0x9C, 0x00, 0x00, 0xA0, 0xC9, 0x0A, 0x63, 0x2C);

// DispInterface
// {E1870221-933A-11CF-9BF9-00A0C90A632C}
DEFINE_GUID(IID_IDispGenericDocument,
0xE1870221L,0x933A,0x11CF,0x9B,0xF9,0x00,0xA0,0xC9,0x0A,0x63,0x2C);

// {E1870222-933A-11CF-9BF9-00A0C90A632C}
DEFINE_GUID(CLSID_GenericDocument,
0xE1870222L,0x933A,0x11CF,0x9B,0xF9,0x00,0xA0,0xC9,0x0A,0x63,0x2C);

// DispInterface
// {E1870223-933A-11CF-9BF9-00A0C90A632C}
DEFINE_GUID(IID_IDispGenericWindow,
0xE1870223L,0x933A,0x11CF,0x9B,0xF9,0x00,0xA0,0xC9,0x0A,0x63,0x2C);

// {E1870224-933A-11CF-9BF9-00A0C90A632C}
DEFINE_GUID(CLSID_GenericWindow,
0xE1870224L,0x933A,0x11CF,0x9B,0xF9,0x00,0xA0,0xC9,0x0A,0x63,0x2C);

// {DFAC7C40-A810-11CF-AD07-00A0C9034965}
DEFINE_GUID(IID_IDispProjects,
0xDFAC7C40L,0xA810,0x11CF,0xAD,0x07,0x00,0xA0,0xC9,0x03,0x49,0x65);

// {DFAC7C41-A810-11CF-AD07-00A0C9034965}
DEFINE_GUID(CLSID_Projects,
0xDFAC7C41L,0xA810,0x11CF,0xAD,0x07,0x00,0xA0,0xC9,0x03,0x49,0x65);



/////////////////////////////////////////////////////////////////////////
// AutoCollection IDs

// {5FCF79C0-648E-11cf-AD07-00A0C9034965}
DEFINE_GUID(IID_IDualObjs,
0x5FCF79C0L,0x648E,0x11CF,0xAD,0x07,0x00,0xA0,0xC9,0x03,0x49,0x65);

// {5C26FC60-6076-11CF-AD07-00A0C9034965}
DEFINE_GUID(IID_IObjs,
0x5C26FC60L,0x6076,0x11CF,0xAD,0x07,0x00,0xA0,0xC9,0x03,0x49,0x65);
