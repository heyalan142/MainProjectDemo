//
//  SecondProject.h
//  SecondProject
//
//  Created by 何亚兰 on 2021/8/17.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CGGeometry.h>

#define SecondProjectPrint NSLog(@"print hello");

typedef NS_ENUM(NSInteger, SecondEnum) {
    SecondEnumBegin = 0,
    SecondEnumMiddle = 1,
    SecondEnumEnd = 2,
};

typedef NSInteger (^MySecondBlock)(NSString *, NSString *);

@interface SecondProject : NSObject

- (void)useSecondProject:(NSString *)str;

@end
