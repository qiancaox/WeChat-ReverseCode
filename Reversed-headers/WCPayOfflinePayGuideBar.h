//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString, WCPayOfflinePayGuideData;

@interface WCPayOfflinePayGuideBar : NSObject <PBCoding>
{
    unsigned int guide_type;
    unsigned int is_show_guide;
    unsigned int btn_jump_mode;
    WCPayOfflinePayGuideData *guide_data;
    NSString *guide_content;
    NSString *guide_content_color;
    NSString *guide_btn_text;
    NSString *guide_btn_text_color;
    NSString *guide_btn_bg_color;
    NSString *guide_logo;
    NSString *background_color;
    NSString *attach_info_left_wording;
    NSString *attach_info_right_wording;
    NSString *btn_jump_h5;
    NSString *btn_jump_tinyapp_username;
    NSString *btn_jump_tinyapp_path;
    NSString *dark_guide_btn_text_color;
    NSString *dark_guide_btn_bg_color;
    NSString *dark_background_color;
}

+ (void)removeOfflinePayGuideBarData;
+ (_Bool)saveOfflinePayGuideBarData:(id)arg1;
+ (id)getLocalOfflinePayGuideBarData;
+ (void)initialize;
+ (void)PBArrayAdd_dark_background_color;
+ (void)PBArrayAdd_dark_guide_btn_bg_color;
+ (void)PBArrayAdd_dark_guide_btn_text_color;
+ (void)PBArrayAdd_btn_jump_tinyapp_path;
+ (void)PBArrayAdd_btn_jump_tinyapp_username;
+ (void)PBArrayAdd_btn_jump_h5;
+ (void)PBArrayAdd_btn_jump_mode;
+ (void)PBArrayAdd_attach_info_right_wording;
+ (void)PBArrayAdd_attach_info_left_wording;
+ (void)PBArrayAdd_background_color;
+ (void)PBArrayAdd_guide_logo;
+ (void)PBArrayAdd_guide_btn_bg_color;
+ (void)PBArrayAdd_guide_btn_text_color;
+ (void)PBArrayAdd_guide_btn_text;
+ (void)PBArrayAdd_guide_content_color;
+ (void)PBArrayAdd_guide_content;
+ (void)PBArrayAdd_is_show_guide;
+ (void)PBArrayAdd_guide_data;
+ (void)PBArrayAdd_guide_type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dark_background_color; // @synthesize dark_background_color;
@property(retain, nonatomic) NSString *dark_guide_btn_bg_color; // @synthesize dark_guide_btn_bg_color;
@property(retain, nonatomic) NSString *dark_guide_btn_text_color; // @synthesize dark_guide_btn_text_color;
@property(retain, nonatomic) NSString *btn_jump_tinyapp_path; // @synthesize btn_jump_tinyapp_path;
@property(retain, nonatomic) NSString *btn_jump_tinyapp_username; // @synthesize btn_jump_tinyapp_username;
@property(retain, nonatomic) NSString *btn_jump_h5; // @synthesize btn_jump_h5;
@property(nonatomic) unsigned int btn_jump_mode; // @synthesize btn_jump_mode;
@property(retain, nonatomic) NSString *attach_info_right_wording; // @synthesize attach_info_right_wording;
@property(retain, nonatomic) NSString *attach_info_left_wording; // @synthesize attach_info_left_wording;
@property(retain, nonatomic) NSString *background_color; // @synthesize background_color;
@property(retain, nonatomic) NSString *guide_logo; // @synthesize guide_logo;
@property(retain, nonatomic) NSString *guide_btn_bg_color; // @synthesize guide_btn_bg_color;
@property(retain, nonatomic) NSString *guide_btn_text_color; // @synthesize guide_btn_text_color;
@property(retain, nonatomic) NSString *guide_btn_text; // @synthesize guide_btn_text;
@property(retain, nonatomic) NSString *guide_content_color; // @synthesize guide_content_color;
@property(retain, nonatomic) NSString *guide_content; // @synthesize guide_content;
@property(nonatomic) unsigned int is_show_guide; // @synthesize is_show_guide;
@property(retain, nonatomic) WCPayOfflinePayGuideData *guide_data; // @synthesize guide_data;
@property(nonatomic) unsigned int guide_type; // @synthesize guide_type;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

