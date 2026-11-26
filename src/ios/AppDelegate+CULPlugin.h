//
//  AppDelegate+CULPlugin.h
//
//  Created by Nikolay Demyankov on 15.09.15.
//

#import <Cordova/CDVAppDelegate.h>

/**
 *  Category for CDVAppDelegate that overrides application:continueUserActivity:restorationHandler,
 *  so we could handle application launch when user clicks on the link in the browser.
 *  On cordova-ios 8, scenes deliver applinks via CDVPluginContinueUserActivityNotification instead;
 *  CULPlugin observes that notification.
 */
@interface CDVAppDelegate (CULPlugin)

- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray *))restorationHandler;

@end
