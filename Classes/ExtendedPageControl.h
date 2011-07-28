// Copyright 2011 Cooliris, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <UIKit/UIKit.h>

// Assumes a height of 20 pixels
@interface ExtendedPageControl : UIControl {
@private
  NSArray* _items;
  id _selectedItem;
  BOOL _autoHides;
  NSUInteger _count;
  CGFloat _offset;
  CGFloat _step;
}
@property(nonatomic, copy) NSArray* items;
@property(nonatomic, retain) id selectedItem;
@property(nonatomic) BOOL hidesForSinglePage;  // Default is YES
- (void) setItems:(NSArray*)items firstItemIsInfo:(BOOL)firstItemIsInfo;
@end
