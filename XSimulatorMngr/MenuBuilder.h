//
//  MenuBuilder.h
//  XSimulatorMngr
//
//  Copyright © 2017 assln. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Foundation/Foundation.h>
#import "RecentData.h"


@interface MenuBuilder : NSObject
@property (nonatomic, weak) NSMenu *menu;
@property (nonatomic, strong) RecentData *recent;
@property (nonatomic, assign) BOOL emulatorsErasing;

- (void)update;
@end
