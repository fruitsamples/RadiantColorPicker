/*
    RadiantColorPicker.h
*/

#import <Cocoa/Cocoa.h>

@class RadiantColorControl;

/* 
    The classname must be the same thing as the bundle filename (minus .bundle/.colorPicker).
    The NSPrincipalClass setting must be set in the Info.plist to be this classname.
 
    The custom color picker MUST implement NSColorPickingCustom, and can do one of the following: 
        1. Descend from NSColorPicker (which implements NSColorPickingDefault)
    OR
        2. Implement NSColorPickingDefault
 */

@interface RadiantColorPicker: NSColorPicker <NSColorPickingCustom> {
    IBOutlet NSView *_pickerView;
    IBOutlet RadiantColorControl *_radiantColorControl;
}

@end
