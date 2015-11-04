/*
     RadiantColorControl.h
*/

#import <Cocoa/Cocoa.h>

@interface RadiantColorControl : NSControl {
@private
    NSColor *_color;
    NSColor *_selectedColor;
    NSImage *_cachedImage;
    id _target;
    SEL _action;
}

- (NSColor *)color; 
- (void)setColor:(NSColor *)color;

- (NSColor *)selectedColor; 

@end
