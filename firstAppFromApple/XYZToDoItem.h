//
//  ToDoItem.h
//  firstAppFromApple
//
//  Created by GuoRui on 9/29/15.
//  Copyright © 2015 GuoRui. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;
@end
