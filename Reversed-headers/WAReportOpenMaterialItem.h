//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportOpenMaterialItem : WAReportBaseItem
{
    unsigned int _action_type;
    unsigned int _scene_type;
    unsigned int _weapp_sum;
    unsigned int _weapp_index;
    NSString *_session;
    NSString *_weapp_id;
    NSString *_weapp_name;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *weapp_name; // @synthesize weapp_name=_weapp_name;
@property(retain, nonatomic) NSString *weapp_id; // @synthesize weapp_id=_weapp_id;
@property(nonatomic) unsigned int weapp_index; // @synthesize weapp_index=_weapp_index;
@property(nonatomic) unsigned int weapp_sum; // @synthesize weapp_sum=_weapp_sum;
@property(nonatomic) unsigned int scene_type; // @synthesize scene_type=_scene_type;
@property(nonatomic) unsigned int action_type; // @synthesize action_type=_action_type;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
- (id)reportString;
- (int)reportID;

@end

