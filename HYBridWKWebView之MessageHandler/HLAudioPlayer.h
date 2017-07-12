//
//  HLAudioPlayer.h
//  音效播放器
//
//  Created by Doman on 2017/7/12.
//  Copyright © 2017年 Doman. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface HLAudioPlayer : NSObject

+ (AVAudioPlayer *)playMusic:(NSString *)fileName;

+ (void)pauseMusic:(NSString *)fileName;

+ (void)stopMusic:(NSString *)fileName;


+ (void)playSound:(NSString *)soundName;

+ (void)disposeSound:(NSString *)soundName;

@end
