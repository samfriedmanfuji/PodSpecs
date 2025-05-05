//
//  PayPalExpress.h
//  Fujifilm_SPA_SDK_iOS
//
//  Created by JNICK on 3/24/17.
//  Copyright (c) 2012 Fujifilm North America Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "PaymentWorker.h"
//#import "PaymentDelegate.h"
#if __has_include(<Braintree/Braintree-Swift.h>) // CocoaPods
#import <Braintree/Braintree-Swift.h>
#else // Carthage
#import <BraintreeCore/BraintreeCore-Swift.h>
#import <BraintreePayPal/BraintreePayPal-Swift.h>
#endif
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

/*!
 @brief Protocol for receiving payment lifecycle messages from a payment driver that requires presentation of a view controller to authorize a payment.
 */
@protocol PaymentDelegate

/*!
 @brief The payment driver requires presentation of a view controller in order to proceed.
 
 @discussion Your implementation should present the viewController modally, e.g. via
 `presentViewController:animated:completion:`
 
 @param viewController The view controller to present
 */
- (void)requestsPresentationOfViewController:(UIViewController *)viewController;

/*!
 @brief The payment driver requires dismissal of a view controller.
 
 @discussion Your implementation should dismiss the viewController, e.g. via
 `dismissViewControllerAnimated:completion:`
 
 @param viewController The view controller to be dismissed
 */
- (void)requestsDismissalOfViewController:(UIViewController *)viewController;


/*!
 @brief The app switcher will perform an app switch in order to obtain user payment authorization.
 
 @discussion Your implementation of this method may set your app to the state
 it should be in if the user manually app-switches back to your app.
 For example, re-enable any controls that are disabled.
 
 @param appSwitcher The app switcher
 */
- (void)appSwitcherWillPerformAppSwitch:(id)appSwitcher;

/*!
 @brief Delegates receive this message when the app switcher has successfully performed an app switch.
 
 @discussion You may use this hook to prepare your UI for app switch return. Keep in mind that
 users may manually switch back to your app via the iOS task manager.
 */
- (void)didPerformSwitchToTarget;

/*!
 @brief The app switcher has obtained user payment details and/or user authorization and will process the results.
 
 @discussion This typically indicates asynchronous network activity.
 When you receive this message, your UI should indicate activity.
 
 In the case of an app switch, this message indicates that the user has returned to this app;
 this is usually after handleAppSwitchReturnURL: is called in your UIApplicationDelegate.
 
 @note You may also hook into the app switch lifecycle via UIApplicationWillResignActiveNotification.
 
 @param appSwitcher The app switcher
 */
- (void)appSwitcherWillProcessPaymentInfo:(id)appSwitcher;
@end


@interface PayPalExpress : NSObject


@property (nonatomic, weak) id <PaymentDelegate> delegate;
@property (nonatomic, readonly, strong) NSString *amount;
@property (nonatomic, readonly, strong) NSString *tokenizedKey;

-(instancetype)initWithAmount:(NSString *)amount tokenizedKey:(NSString *)tokenizedKey delegate:(id<PaymentDelegate>)paymentDelegate;
- (void)requestPaymentWithCompletion:(void (^)(NSMutableDictionary * _Nullable paymentData, NSError *error))completionBlock;

@end

NS_ASSUME_NONNULL_END
