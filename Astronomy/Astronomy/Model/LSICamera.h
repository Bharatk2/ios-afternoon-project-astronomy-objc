//
//  LSICamera.h
//  Astronomy
//
//  Created by Bhawnish Kumar on 6/15/20.
//  Copyright © 2020 Bhawnish Kumar. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_SWIFT_NAME(Camera)
@interface LSICamera : NSObject

@property (nonatomic, readonly) int cameraId;
@property (nonatomic, readonly) int roverId;
@property (nonatomic, copy, readonly, nonnull) NSString *name;
@property (nonatomic, copy, readonly, nonnull) NSString *fullName;

- (nonnull instancetype)initWithCameraId:(int)cameraId roverId:(int)roverId name:(nonnull NSString *)name fullName:(nonnull NSString *)fullName;

- (nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dictionary;

@end


