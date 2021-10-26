//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMExtensionCenter : NSObject
{
    struct os_unfair_lock_s m_lock;
    struct unordered_map<Protocol *, MMExtension *, std::__1::hash<Protocol *>, std::__1::equal_to<Protocol *>, std::__1::allocator<std::__1::pair<Protocol *const, MMExtension *>>> *m_dictExtension;
    id m_context;
}

- (void)checkExistExtension;
- (void)callKeyExtensionOnMainThreadContinuously:(id)arg1 key:(id)arg2 selector:(SEL)arg3 sync:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)callExtensionOnMainThreadContinuously:(id)arg1 selector:(SEL)arg2 sync:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)callKeyExtensionOnMainThread:(id)arg1 key:(id)arg2 selector:(SEL)arg3 sync:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)callExtensionOnMainThread:(id)arg1 selector:(SEL)arg2 sync:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)callKeyExtensionContinuously:(id)arg1 key:(id)arg2 selector:(SEL)arg3 block:(CDUnknownBlockType)arg4;
- (void)callExtensionContinuously:(id)arg1 selector:(SEL)arg2 block:(CDUnknownBlockType)arg3;
- (void)callKeyExtension:(id)arg1 key:(id)arg2 selector:(SEL)arg3 block:(CDUnknownBlockType)arg4;
- (void)callExtension:(id)arg1 selector:(SEL)arg2 block:(CDUnknownBlockType)arg3;
- (void)unRegisterAllKeyExtension:(id)arg1 withTarget:(id)arg2;
- (void)unRegisterExtension:(id)arg1 withKey:(id)arg2 withTarget:(id)arg3;
- (void)registerExtension:(id)arg1 withKey:(id)arg2 withTarget:(id)arg3;
- (void)unRegisterExtension:(id)arg1 withTarget:(id)arg2;
- (void)registerExtension:(id)arg1 withTarget:(id)arg2;
- (id)getExtension:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

