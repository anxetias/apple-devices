// name: getFetchOptionsForFetchLimit:
// address: 1004a1de5

/* Function Stack Size: 0x18 bytes */

ID AMPPhotoKitImporter::getFetchOptionsForFetchLimit_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  IVar1 = photoLibrary(param_1,PTR_s_photoLibrary_10088d370);
  uVar2 = _objc_retainAutoreleasedReturnValue(IVar1);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_librarySpecificFetchOptions_10088d378);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  if (lVar4 != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setIncludeUserSmartAlbums__10088d380,1);
    local_38 = *(undefined8 *)PTR__PHAssetPropertySetPhotosInfoPanelExtended_10082b558;
    local_30 = *(undefined8 *)PTR__PHAssetPropertySetDescription_10082b540;
    IVar1 = NSArray::arrayWithObjects_count_
                      ((ID)PTR__OBJC_CLASS___NSArray_10082df78,
                       PTR_s_arrayWithObjects_count__10088bda0,&local_38,2);
    uVar2 = _objc_retainAutoreleasedReturnValue(IVar1);
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_addFetchPropertySets__10088d388,uVar2);
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    if (param_3 != 0) {
      (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setFetchLimit__10088d390,param_3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    IVar1 = _objc_autoreleaseReturnValue(lVar4);
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

