//
//  SendingNodInterfaceController.h
//  NodWatchTestApp
//
//  Created by Nam Kim on 6/13/15.
//  Copyright © 2015 Nam Kim. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface SendingNodInterfaceController : WKInterfaceController

@property (nonatomic, strong) IBOutlet WKInterfaceLabel *sendingLabel;
@property (nonatomic, strong) IBOutlet WKInterfaceImage *animationImage;

@end

