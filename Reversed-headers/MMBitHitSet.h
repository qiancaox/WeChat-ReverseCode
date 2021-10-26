//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMBitHitSet : NSObject
{
    struct vector<KeywordsAggregate, std::__1::allocator<KeywordsAggregate>> m_asggregatesVec;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)DEKHash:(id)arg1;
- (id)matchKeywordWithContent:(id)arg1 location:(unsigned long long)arg2;
- (unsigned short)matchContent:(id)arg1 aggregate:(struct KeywordsAggregate)arg2;
- (struct KeywordHashPair)getHashPairWithHash1:(unsigned short)arg1 Hash2:(unsigned short)arg2;
- (struct KeywordsAggregate)getKeywordsAggregate:(unsigned char)arg1 Hash1:(unsigned short)arg2 Hash2:(unsigned short)arg3 weight:(unsigned char)arg4;
- (_Bool)removeKeyword:(id)arg1;
- (int)getSameCodeIndexWithHashPair:(struct KeywordHashPair)arg1 InAggregate:(struct KeywordsAggregate)arg2;
- (void)addKeyword:(id)arg1 weight:(unsigned char)arg2;
- (int)getAggregatesCount;
- (void)dealloc;

@end

