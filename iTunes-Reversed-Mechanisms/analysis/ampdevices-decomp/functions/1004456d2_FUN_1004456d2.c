// name: FUN_1004456d2
// address: 1004456d2

undefined4 FUN_1004456d2(long *param_1,undefined8 param_2,uint *param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_59 = 0;
  if (*(int *)((long)param_1 + 0x1c) == 0x46494c45) {
    cVar3 = (**(code **)(*param_1 + 8))();
    if (cVar3 == '\0') {
      uVar4 = 0;
      goto LAB_1004457c7;
    }
    FUN_10043e902(param_1);
    if (param_1[0x93] == 0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mAsset != __null";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar4 = (undefined4)param_1[0x97];
      goto LAB_1004457c7;
    }
    FUN_1004406ae(param_1,1,0);
    uVar8 = *(undefined8 *)PTR__AVCFMetadataFormatQuickTimeMetadata_10082b258;
    lVar5 = _AVCFAssetCopyMetadataForFormat(param_1[0x93]);
    if (lVar5 == 0) {
      uVar6 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    }
    else {
      uVar6 = FUN_10017072a(DAT_1008c4d90,0,lVar5);
      FUN_10017060f(lVar5);
    }
    uVar2 = *(undefined8 *)PTR__AVCFMetadataFormatQuickTimeUserData_10082b260;
    lVar5 = _AVCFAssetCopyMetadataForFormat(param_1[0x93]);
    if (lVar5 == 0) {
      uVar7 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    }
    else {
      uVar7 = FUN_10017072a(DAT_1008c4d90,0,lVar5);
      FUN_10017060f(lVar5);
    }
    if (param_3 != (uint *)0x0) {
      uVar1 = *param_3;
      if ((uVar1 & 1) != 0) {
        FUN_1004454c0(uVar6,*(undefined8 *)
                             PTR__AVCFMetadataQuickTimeMetadataKeyDisplayName_10082b310,param_3 + 2)
        ;
        FUN_1004454c0(uVar7,*(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyFullName_10082b348,
                      param_3 + 2);
      }
      if ((uVar1 & 8) != 0) {
        FUN_1004454c0(uVar6,*(undefined8 *)PTR__AVCFMetadataQuickTimeMetadataKeyAlbum_10082b2e8,
                      param_3 + 0x182);
        FUN_1004454c0(uVar7,*(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyAlbum_10082b320,
                      param_3 + 0x182);
      }
      if ((uVar1 & 0xa9415254) != 0) {
        FUN_1004454c0(uVar6,*(undefined8 *)PTR__AVCFMetadataQuickTimeMetadataKeyArtist_10082b2f0,
                      param_3 + 0x102);
        FUN_1004454c0(uVar7,*(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyArtist_10082b328,
                      param_3 + 0x102);
      }
      if ((uVar1 >> 10 & 1) != 0) {
        FUN_1004454c0(uVar6,*(undefined8 *)PTR__AVCFMetadataQuickTimeMetadataKeyComment_10082b2f8,
                      param_3 + 0x382);
        FUN_1004454c0(uVar7,*(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyComment_10082b330,
                      param_3 + 0x382);
      }
      if ((uVar1 >> 0x15 & 1) != 0) {
        FUN_1004454c0(uVar6,*(undefined8 *)PTR__AVCFMetadataQuickTimeMetadataKeyComposer_10082b300,
                      param_3 + 0x410);
        FUN_1004454c0(uVar7,*(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyComposer_10082b338,
                      param_3 + 0x410);
      }
      if ((uVar1 & 0x10) != 0) {
        FUN_1004454c0(uVar6,*(undefined8 *)PTR__AVCFMetadataQuickTimeMetadataKeyGenre_10082b318,
                      param_3 + 0x202);
        FUN_1004454c0(uVar7,*(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyGenre_10082b350,
                      param_3 + 0x202);
      }
    }
    if ((param_4 != 0) && ((*(byte *)(param_4 + 1) & 0x10) != 0)) {
      FUN_1004454c0(uVar6,*(undefined8 *)PTR__AVCFMetadataQuickTimeMetadataKeyCopyright_10082b308,
                    param_4 + 0x8c8);
      FUN_1004454c0(uVar7,*(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyCopyright_10082b340,
                    param_4 + 0x8c8);
    }
    lVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar5 != 0) {
      FUN_100171502(lVar5,uVar8,uVar6);
      FUN_100171502(lVar5,uVar2,uVar7);
      uVar8 = FUN_1003d0a4e(0,*(undefined4 *)((long)param_1 + 0x1c),param_1 + 4,0);
      uVar4 = _AVCFRewriteMetadata(uVar8,lVar5,0,&local_59);
      goto LAB_1004457cd;
    }
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "newMetaDataDict != __null";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffff94;
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mTrackKind == kITFileKind";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0x234e;
LAB_1004457c7:
    uVar6 = 0;
    uVar7 = 0;
  }
  lVar5 = 0;
  uVar8 = 0;
LAB_1004457cd:
  FUN_10017060f(uVar6);
  FUN_10017060f(uVar7);
  FUN_10017060f(lVar5);
  FUN_10017060f(0);
  FUN_10017060f(uVar8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

