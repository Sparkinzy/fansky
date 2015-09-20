//
//  SADataManager+Status.h
//  fansky
//
//  Created by Zzy on 9/12/15.
//  Copyright (c) 2015 Zzy. All rights reserved.
//

#import "SADataManager.h"
#import "SAStatus+CoreDataProperties.h"

@class SAStatus;

@interface SADataManager (Status)

- (void)insertStatusWithObjects:(NSArray *)objects type:(SAStatusTypes)type;
- (SAStatus *)insertStatusWithObject:(id)object localUser:(SAUser *)localUser type:(SAStatusTypes)type;
- (SAStatus *)statusWithID:(NSString *)statusID;

@end