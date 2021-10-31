//
//  ThirdProject.m
//  ThirdProject
//
//  Created by 何亚兰 on 2021/8/17.
//

#import "ThirdProject.h"
#import "SecondProject.h"

@implementation ThirdProject

- (void)useForExternal {
    SecondProject *project = [[SecondProject alloc] init];
    [project useSecondProject:@"hello"];
}

@end
