//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTBaseSettingModel.h"

@interface WCTSettingSwitchModel : WCTBaseSettingModel
{
    _Bool _on;
    CDUnknownBlockType _switchAction;
}

+ (id)createWithTitle:(id)arg1 on:(_Bool)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType switchAction; // @synthesize switchAction=_switchAction;
@property(nonatomic) _Bool on; // @synthesize on=_on;

@end

