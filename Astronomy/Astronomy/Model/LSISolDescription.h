//
//  LSISolDescription.h
//  Astronomy
//
//  Created by Bhawnish Kumar on 6/17/20.
//  Copyright © 2020 Bhawnish Kumar. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSISolDescription : NSObject

@property (nonatomic, readonly) int sol;
@property (nonatomic, readonly) int totalPhotos;
@property (nonatomic, copy, readonly, nonnull) NSArray<NSString *> *cameras;


- (instancetype)initWithSol:(int)sol totalPhotos:(int)totalPhotos cameras:(nonnull NSArray<NSString *> *)cameras;

- (instancetype)withDictionary:(NSDictionary *)dictionary;


@end

NS_ASSUME_NONNULL_END
