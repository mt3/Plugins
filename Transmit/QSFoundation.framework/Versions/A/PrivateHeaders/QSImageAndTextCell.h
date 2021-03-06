//
//  QSImageAndTextCell.h
//
//  Copyright (c) 2001 Apple. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface QSImageAndTextCell : NSTextFieldCell {
@private
    NSImage	*image;
}

- (void)setImage:(NSImage *)anImage;
- (NSImage *)image;

- (void)drawWithFrame:(NSRect)cellFrame inView:(NSView *)controlView;
- (NSSize)cellSize;

@end