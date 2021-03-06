//
//  LFLayoutPickerController.h
//  LFImagePickerController
//
//  Created by LamTsanFeng on 2017/2/13.
//  Copyright © 2017年 LamTsanFeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LFLayoutPickerController : UINavigationController

/// 自定义图片
@property (nonatomic, copy) NSString *takePictureImageName;
@property (nonatomic, copy) NSString *photoSelImageName;
@property (nonatomic, copy) NSString *photoDefImageName;
@property (nonatomic, copy) NSString *photoOriginSelImageName;
@property (nonatomic, copy) NSString *photoOriginDefImageName;
@property (nonatomic, copy) NSString *photoNumberIconImageName;

/// 自定义外观颜色
@property (nonatomic, strong) UIColor *oKButtonTitleColorNormal;
@property (nonatomic, strong) UIColor *oKButtonTitleColorDisabled;
@property (nonatomic, strong) UIColor *naviBgColor;
@property (nonatomic, strong) UIColor *naviTitleColor;
@property (nonatomic, strong) UIFont *naviTitleFont;
@property (nonatomic, strong) UIColor *barItemTextColor;
@property (nonatomic, strong) UIFont *barItemTextFont;
@property (nonatomic, strong) UIColor *toolbarBgColor;
@property (nonatomic, strong) UIColor *toolbarTitleColorNormal;
@property (nonatomic, strong) UIColor *toolbarTitleColorDisabled;
@property (nonatomic, strong) UIFont *toolbarTitleFont;
@property (nonatomic, strong) UIColor *previewNaviBgColor;

/// 自定义文字
@property (nonatomic, copy) NSString *doneBtnTitleStr;
@property (nonatomic, copy) NSString *cancelBtnTitleStr;
@property (nonatomic, copy) NSString *previewBtnTitleStr;
@property (nonatomic, copy) NSString *editBtnTitleStr;
@property (nonatomic, copy) NSString *fullImageBtnTitleStr;
@property (nonatomic, copy) NSString *settingBtnTitleStr;
@property (nonatomic, copy) NSString *processHintStr;

#pragma mark - 编辑模式
/// 自定义外观颜色
@property (nonatomic, strong) UIColor *edit_oKButtonTitleColorNormal;
@property (nonatomic, strong) UIColor *edit_cancelButtonTitleColorNormal;
/// 自定义文字
@property (nonatomic, copy) NSString *edit_oKButtonTitle;
@property (nonatomic, copy) NSString *edit_cancelButtonTitle;
@property (nonatomic, copy) NSString *edit_processHintStr;


- (void)showAlertWithTitle:(NSString *)title;
- (void)showProgressHUDText:(NSString *)text isTop:(BOOL)isTop;
- (void)showProgressHUDText:(NSString *)text;
- (void)showProgressHUD;
- (void)hideProgressHUD;

@end
