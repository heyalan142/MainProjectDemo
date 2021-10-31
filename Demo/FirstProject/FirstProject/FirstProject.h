//
//  FirstProject.h
//  FirstProject
//
//  Created by 何亚兰 on 2021/8/17.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CGBase.h>
#import "FirstFile.h"

#define FirstProjectPrint \
NSLog(@"print hello");

typedef enum {
    FirstEnumBegin = 1,
    FirstEnumMiddle = 2,
    FirstEnumEnd = 3     
} FirstEnum;

typedef NSInteger (^MyFirstBlock)(NSString*, NSString*);

@interface FirstProject : NSObject

-(void)useFirstProject:(MyFirstBlock)block file:(FirstFile*)file;

@end
