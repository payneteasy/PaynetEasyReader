//
// Created by Evgeniy Sinev on 07/08/14.
// Copyright (c) 2014 Evgeniy Sinev. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface PNEReaderInfo : NSObject

typedef NS_ENUM(NSInteger, PNEReaderType) {
      PNEReaderType_TEST
    , PNEReaderType_MIURA
    , PNEReaderType_SPIRE
    , PNEReaderType_MIURA_OR_SPIRE
    , PNEReaderType_INPAS
};

@property (readonly, nonatomic) PNEReaderType type;
@property (readonly, copy, nonatomic) NSString *address;

- (instancetype)initWithType:(PNEReaderType)aType address:(NSString *)anAddress;

- (instancetype)initWithType:(PNEReaderType)aType;

+ (instancetype)infoWithType:(PNEReaderType)aType;

+ (instancetype)infoWithType:(PNEReaderType)aType address:(NSString *)anAddress;

- (NSString *)description;

@end