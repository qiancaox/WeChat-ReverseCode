//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;

@interface YtCAPTCHA_OC : JSONModel
{
    int _fixed_interval;
    int _unit;
    int _rand_shift;
    int _rand_inv;
    NSArray *_intervals;
    NSString *_seq_id;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *seq_id; // @synthesize seq_id=_seq_id;
@property(retain, nonatomic) NSArray *intervals; // @synthesize intervals=_intervals;
@property(nonatomic) int rand_inv; // @synthesize rand_inv=_rand_inv;
@property(nonatomic) int rand_shift; // @synthesize rand_shift=_rand_shift;
@property(nonatomic) int unit; // @synthesize unit=_unit;
@property(nonatomic) int fixed_interval; // @synthesize fixed_interval=_fixed_interval;

@end

