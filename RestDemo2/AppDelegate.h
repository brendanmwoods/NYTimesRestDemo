//
//  AppDelegate.h
//  RestDemo2
//
//  Created by Woods, Brendan on 2016-12-13.
//  Copyright © 2016 Ca Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

