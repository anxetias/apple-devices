// name: FUN_10040fdb0
// address: 10040fdb0

bool FUN_10040fdb0(void)

{
  undefined *puVar1;
  char cVar2;
  ID self;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  
  self = _objc_alloc_init(PTR__OBJC_CLASS___ACAccountStore_10082b620);
  IVar3 = ACAccountStore::aa_primaryAppleAccount(self,PTR_s_aa_primaryAppleAccount_10088ca28);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  cVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar4,PTR_s_isEnabledForDataclass__10088ca30,
                     *(undefined8 *)PTR__ACAccountDataclassCloudPhotos_10082b608);
  IVar3 = _objc_alloc(PTR__OBJC_CLASS___PHPhotoLibrary_10082b530);
  IVar5 = PHPhotoLibrary::systemPhotoLibraryURL
                    ((ID)PTR__OBJC_CLASS___PHPhotoLibrary_10082b530,
                     PTR_s_systemPhotoLibraryURL_10088ca38);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  IVar3 = PHPhotoLibrary::initWithPhotoLibraryURL_
                    (IVar3,PTR_s_initWithPhotoLibraryURL__10088ca40,uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  IVar5 = PHPhotoLibrary::isKeepOriginalsEnabled(IVar3,PTR_s_isKeepOriginalsEnabled_10088ca48);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(IVar3);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(self);
  return (char)IVar5 == '\0' && cVar2 != '\0';
}

