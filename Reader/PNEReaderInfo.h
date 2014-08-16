//
// Created by Evgeniy Sinev on 07/08/14.
// Copyright (c) 2014 Evgeniy Sinev. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface PNEReaderInfo : NSObject

typedef NS_ENUM(NSInteger, PNEReaderType) {
    PNEReaderType_TEST
    , PNEReaderType_MIURA
};

@property (readonly, nonatomic) PNEReaderType type;
@property (readonly, copy, nonatomic) NSString *address;

- (instancetype)initWithType:(PNEReaderType)aType address:(NSString *)anAddress;

- (instancetype)initWithType:(PNEReaderType)aType;

+ (instancetype)infoWithType:(PNEReaderType)aType;

+ (instancetype)infoWithType:(PNEReaderType)aType address:(NSString *)anAddress;


@end