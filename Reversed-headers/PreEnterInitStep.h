//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PreEnterBaseStep.h"

#import "initLogicControllerDelegate-Protocol.h"

@class InitLogicController;

@interface PreEnterInitStep : PreEnterBaseStep <initLogicControllerDelegate>
{
    InitLogicController *m_initLogicController;
    _Bool m_bInitOK;
    _Bool m_recoverViewShown;
}

- (void).cxx_destruct;
- (_Bool)showDBRecoverViewIfNeeded;
- (void)stopIniting:(unsigned int)arg1;
- (void)handleInitOk;
- (void)percentIniting:(id)arg1;
- (_Bool)isInitOK;
- (_Bool)isIniting;
- (void)startStep;
- (id)initFromReg:(_Bool)arg1;

@end

