// name: FUN_1004a7d3c
// address: 1004a7d3c

undefined8 FUN_1004a7d3c(byte param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  AMPPhotoKitImporter *this;
  undefined8 uVar9;
  SEL extraout_RDX;
  uint local_48;
  undefined8 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  uVar4 = FUN_1004a7bcc();
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (lVar5 == 0) {
    uVar4 = FUN_1004a4efe();
    IVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(IVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = local_48 & 0xffff0000;
      __os_log_error_impl(0x100000000,IVar6,0x10,"NULL system photo library URL from PhotoKit!",
                          &local_48,2);
    }
    uVar4 = 0;
  }
  else {
    IVar6 = _objc_alloc(PTR__OBJC_CLASS___PHPhotoLibrary_10082b530);
    IVar6 = PHPhotoLibrary::initWithPhotoLibraryURL_
                      (IVar6,PTR_s_initWithPhotoLibraryURL__10088ca40,lVar5);
    if (IVar6 == 0) {
      uVar4 = FUN_1004a4efe();
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_48 = local_48 & 0xffff0000;
        __os_log_error_impl(0x100000000,uVar8,0x10,"NULL PHPhotoLibrary!",&local_48,2);
      }
      uVar4 = 0;
    }
    else {
      IVar7 = PHPhotoLibrary::openAndWaitWithUpgrade_error_
                        (IVar6,PTR_s_openAndWaitWithUpgrade_error__10088d660,0);
      uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(0);
      if ((char)IVar7 == '\0') {
        uVar4 = FUN_1004a4efe();
        this = (AMPPhotoKitImporter *)_objc_retainAutoreleasedReturnValue(uVar4);
        cVar2 = _os_log_type_enabled(this,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8420102;
          local_44 = uVar8;
          __os_log_error_impl(0x100000000,this,0x10,"Couldn\'t open photo library; error %{public}@"
                              ,&local_48,0xc);
        }
        uVar4 = 0;
      }
      else {
        this = (AMPPhotoKitImporter *)_objc_alloc_init(&objc::class_t::AMPPhotoKitImporter);
        AMPPhotoKitImporter::setPhotoLibrary_((ID)this,PTR_s_setPhotoLibrary__10088d668,IVar6);
        if (param_1 != 0) {
          AMPPhotoKitImporter::loadMasterImageDictionary
                    (this,(ID)PTR_s_loadMasterImageDictionary_10088d670,extraout_RDX);
        }
        AMPPhotoKitImporter::createRootMediaGroup((ID)this,PTR_s_createRootMediaGroup_10088d678);
        AMPPhotoKitImporter::loadGroupsWithFetchLimit_
                  ((ID)this,PTR_s_loadGroupsWithFetchLimit__10088d680,(ulong)(param_1 ^ 1));
        IVar7 = AMPPhotoKitImporter::rootMediaGroup((ID)this,PTR_s_rootMediaGroup_10088d5f0);
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar7);
        _objc_storeStrong(&DAT_1008bfa20,this);
        if (lVar3 != 0) {
          PHPhotoLibrary::registerChangeObserver_
                    (IVar6,PTR_s_registerChangeObserver__10088d688,DAT_1008bfa20);
          uVar9 = _objc_retainBlock(lVar3);
          uVar1 = DAT_1008bfa28;
          DAT_1008bfa28 = uVar9;
          (*(code *)PTR__objc_release_10082c7b0)(uVar1);
        }
      }
      (*(code *)PTR__objc_release_10082c7b0)(this);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  }
  (*(code *)PTR__objc_release_10082c7b0)(IVar6);
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

