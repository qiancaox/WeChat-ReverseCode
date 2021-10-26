//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@protocol ContactSearchLogicDelegate;

@interface ContactSearchLogic : NSObject <PBMessageObserverDelegate>
{
    unsigned int m_uiQRFromScene;
    id <ContactSearchLogicDelegate> _delegate;
}

+ (void)fillToCContact:(id)arg1 from:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactSearchLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSearchOpenIMContactResp:(id)arg1;
- (void)searchOpenIMContactWithPhoneNumber:(id)arg1;
- (void)qrSearchOpenIMContact:(id)arg1 FromScene:(unsigned int)arg2;

@end

