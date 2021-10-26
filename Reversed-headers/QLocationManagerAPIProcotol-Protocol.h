//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol QLocationManagerAPIProcotol <NSObject>
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) long long accuracyAuthorization;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) int headingOrientation;
@property(nonatomic) double headingFilter;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
- (void)requestWhenInUseAuthorization;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
@end

