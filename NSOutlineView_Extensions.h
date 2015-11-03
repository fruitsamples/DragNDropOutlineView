//
//  NSOutlineView_Extensions.h
//
//  Copyright (c) 2001-2002, Apple. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSOutlineView (MyExtensions)

- (NSArray*)allSelectedItems;
- (void)selectItems:(NSArray*)items byExtendingSelection:(BOOL)extend;

@end

@interface MyOutlineView : NSOutlineView {
}
@end