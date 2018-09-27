//
//  AppDelegate.h
//  BetterMe
//
//  Created by Bhav Singh on 9/27/18.
//  Copyright © 2018 Bhav Singh. All rights reserved.
//
//I just want to see if this sends to github 
#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

