var CollectionViewController = JSB.defineClass('CollectionViewController : UICollectionViewController', {
  viewDidLoad: function() {
    self.navigationItem.title = 'Photo Album';

    self.view.backgroundColor = UIColor.whiteColor();

    self.collectionViewLayout.itemSize = {width: 77, height: 77};
    self.collectionViewLayout.minimumInteritemSpacing = 0;
    self.collectionViewLayout.minimumLineSpacing = 4;
    self.collectionViewLayout.sectionInset = {top: 4, left: 4, bottom: 4, right: 4};

    self.collectionView.registerClassForCellWithReuseIdentifier(UICollectionViewCell, 'Cell');

    self.assets = [];
    self.library = ALAssetsLibrary.new();

    self.library.enumerateGroupsWithTypesUsingBlockFailureBlock(
      0xFFFFFFFF, 
      function(group, stop) {
        if (group != NSNull.null()) {
          group.enumerateAssetsUsingBlock(function(result, index, stop) {
            if (result != NSNull.null()) {
              self.assets.push(result);
              self.collectionView.reloadData();
            }
          });
        }
      },
      function(error) {
        JSB.dump(error);
      });
  },
  numberOfSectionsInCollectionView: function(collectionView) {
    return 1;
  },
  collectionViewNumberOfItemsInSection: function(collectionView, section) {
    return self.assets.length;
  },
  collectionViewCellForItemAtIndexPath: function(collectionView, indexPath) {
    var asset = self.assets[indexPath.row];
    var thumbnail = UIImage.imageWithCGImage(asset.thumbnail());
    
    var cell = collectionView.dequeueReusableCellWithReuseIdentifierForIndexPath('Cell', indexPath);

    var imageView = cell.contentView.viewWithTag(1);
    if (!imageView) {
      imageView = UIImageView.new();
      imageView.frame = cell.contentView.bounds;

      cell.contentView.addSubview(imageView);
    }

    imageView.image = thumbnail;
    
    return cell;
  }
});

JSB.exports = CollectionViewController;
