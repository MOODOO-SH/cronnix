//
//  EnvVariable.h
//  CronniX
//
//  Created by Sven A. Schmidt on Tue Mar 16 2004.
//  Copyright (c) 2004 abstracture. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CrontabLineParsing.h"

@interface EnvVariable : NSObject <CrontabLineParsing> {

}

- (id)initWithString: (NSString *)line;
+ (BOOL)isContainedInString: (NSString *)line;

@end
