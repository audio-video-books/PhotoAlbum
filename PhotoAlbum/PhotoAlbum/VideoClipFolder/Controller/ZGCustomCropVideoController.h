//
//  ZGCustomCropVideoController.h
//  PhotoAlbum
//
//  Created by saina_su on 2017/8/30.
//  Copyright © 2017年 saina. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

@class ZGCustomCropVideoController;

@protocol ZGCustomCropVideoControllerDelegate <NSObject>
//返回截取好的视频
-(void)cropVideoController:(ZGCustomCropVideoController *)cropVideo didFinishCropVideoAsset:(PHAsset *)asset;
- (void)cropVideoControllerDidCancelCrop:(ZGCustomCropVideoController *)cropVideo;

@end

@interface ZGCustomCropVideoController : UIViewController

@property(nonatomic, weak) id<ZGCustomCropVideoControllerDelegate>  cropVideoDelegate;

@property(nonatomic, strong) NSURL *vcURL;/**需要参数URL*/
@property(nonatomic, assign) NSInteger maximumTimeVideo;/**参数: 截取的长度*/


@end
