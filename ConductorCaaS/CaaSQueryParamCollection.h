#import <Foundation/Foundation.h>

@interface CaaSQueryParamCollection : NSObject

@property(nonatomic, readonly) NSArray* values;
@property(nonatomic, readonly) NSString* format;

- (id) initWithValuesAndFormat: (NSArray*) values
                        format: (NSString*) format;

@end
