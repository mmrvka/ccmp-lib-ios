//
//  CCMPAccountMO.h
//  
//
//  Created by Christoph Lückler on 26/05/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class CCMPMessageMO;

@interface CCMPAccountMO : NSManagedObject

@property (nonatomic, retain) NSNumber * accountId;
@property (nonatomic, retain) NSString * avatarURL;
@property (nonatomic, retain) NSString * cacheKey;
@property (nonatomic, retain) NSString * displayName;
@property (nonatomic, retain) NSDate * lastMessageDate;
@property (nonatomic, retain) NSDate * refreshTimestamp;
@property (nonatomic, retain) NSSet *message;

- (BOOL)isAvatarLoaded;

@end

@interface CCMPAccountMO (CoreDataGeneratedAccessors)

- (void)addMessageObject:(CCMPMessageMO *)value;
- (void)removeMessageObject:(CCMPMessageMO *)value;
- (void)addMessage:(NSSet *)values;
- (void)removeMessage:(NSSet *)values;

@end
