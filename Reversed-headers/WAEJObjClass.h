//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ObjClassProtocol-Protocol.h"

@class WAEJBindingGfx;

@interface WAEJObjClass : NSObject <ObjClassProtocol>
{
    WAEJBindingGfx *gfx_;
}

- (void)makeRenderingContext;
- (void)setRenderingContextDirty;
- (void)setCurrentContext:(void *)arg1;
- (unsigned int)get_gfx_object_id:(void *)arg1;
- (struct _sg_state_t *)get_sg_state:(void *)arg1;
- (void)dealloc;

@end

