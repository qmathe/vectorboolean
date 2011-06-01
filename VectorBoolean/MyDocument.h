//
//  MyDocument.h
//  VectorBoolean
//
//  Created by Andrew Finnell on 5/31/11.
//  Copyright 2011 Fortunate Bear, LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class CanvasView;

@interface MyDocument : NSDocument {
    IBOutlet CanvasView *_view;
}

- (IBAction) onReset:(id)sender;
- (IBAction) onUnion:(id)sender;
- (IBAction) onIntersect:(id)sender;
- (IBAction) onDifference:(id)sender; // Punch
- (IBAction) onJoin:(id)sender; // XOR

@end
