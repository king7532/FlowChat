//
//  AppDelegate.h
//  FlowChat
//
//  Created by Marcel Weiher on 2/13/17.
//  Copyright © 2017 metaobject. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (nonatomic,weak) IBOutlet NSTextField *messageBox;
@property (nonatomic,weak) IBOutlet NSSlider    *slider;
@property (nonatomic,weak) IBOutlet NSTextView  *messages;

@end

