/* 
Copyright 2011 Hardcoded Software (http://www.hardcoded.net)

This software is licensed under the "GPL v3" License as described in the "LICENSE" file, 
which should be included with this package. The terms are also available at 
http://www.hardcoded.net/licenses/gplv3_license
*/

#import <Cocoa/Cocoa.h>

#import "HSGUIController.h"
#import "PyOpenedFileLabel.h"

@interface PMOpenedFileLabel : HSGUIController {}
- (id)initWithPyRef:(PyObject *)aPyRef textView:(NSTextField *)aView;
- (PyOpenedFileLabel *)model;
- (NSTextField *)view;
@end