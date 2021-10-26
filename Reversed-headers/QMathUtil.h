//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QMathUtil : NSObject
{
}

+ (id)generateArcPointWithCenter:(CDStruct_c3b9c2ee)arg1 startPoint:(CDStruct_c3b9c2ee)arg2 endPoint:(CDStruct_c3b9c2ee)arg3 radius:(double)arg4 clockwise:(_Bool)arg5;
+ (_Bool)validateDeltaKChanged:(const CDStruct_c3b9c2ee *)arg1 centerSide:(double)arg2 end:(const CDStruct_c3b9c2ee *)arg3 isClockwise:(_Bool)arg4 start:(const CDStruct_c3b9c2ee *)arg5;
+ (double)calculateCircleCenterAndRadiusWithTangentAngle:(double)arg1 startPoint:(CDStruct_c3b9c2ee)arg2 endPoint:(CDStruct_c3b9c2ee)arg3 center:(CDStruct_c3b9c2ee *)arg4 clockwise:(_Bool)arg5;
+ (double)calculateCircleCenterAndRadiusWithThreePoints:(CDStruct_c3b9c2ee)arg1 endPoint:(CDStruct_c3b9c2ee)arg2 passedPoint:(CDStruct_c3b9c2ee)arg3 center:(CDStruct_c3b9c2ee *)arg4;
+ (double)calculateDistanceForPointA:(CDStruct_c3b9c2ee)arg1 pointB:(CDStruct_c3b9c2ee)arg2;
+ (double)isPointInLineSide:(CDStruct_c3b9c2ee)arg1 endPoint:(CDStruct_c3b9c2ee)arg2 checkPoint:(CDStruct_c3b9c2ee)arg3;
+ (double)calcLineAngleOffset:(double)arg1 offsetAngle:(double)arg2;
+ (double)calcLineAngle:(CDStruct_c3b9c2ee)arg1 pointB:(CDStruct_c3b9c2ee)arg2;
+ (double)calcLineSlope:(CDStruct_c3b9c2ee)arg1 pointB:(CDStruct_c3b9c2ee)arg2;
+ (double)angleToRadian:(double)arg1;
+ (double)radian2Angle:(double)arg1;
+ (id)singleton;

@end

