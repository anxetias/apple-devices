// name: FUN_100340496
// address: 100340496

ulong FUN_100340496(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 local_88 [8];
  uint local_80 [2];
  undefined8 local_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_100166c1b(param_1,&cf_Dataclass);
  uVar4 = FUN_100166c1b(param_2,&cf_Dataclass);
  local_60 = param_1;
  uVar5 = FUN_100166c1b(param_1,&cf_AssetID);
  local_68 = param_2;
  uVar6 = FUN_100166c1b(param_2,&cf_AssetID);
  local_78 = uVar4;
  cVar1 = FUN_100170633(uVar3,uVar4);
  if ((cVar1 == '\0') || (cVar1 = FUN_100170633(uVar5,uVar6), cVar1 == '\0')) {
    uVar4 = FUN_100166c1b(local_60,&cf_AssetType);
    uVar7 = FUN_100166c1b(local_68,&cf_AssetType);
    cVar1 = FUN_100340841(uVar3,uVar5,uVar4,&local_70,local_80);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "GetAirTrafficAssetClassAndIDForIdentifier( dataclass1, assetIdentifier1, assetType1, assetClass1, assetID1 )"
        ;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    cVar1 = FUN_100340841(local_78,uVar6,uVar7,&local_6c,local_88);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "GetAirTrafficAssetClassAndIDForIdentifier( dataclass2, assetIdentifier2, assetType2, assetClass2, assetID2 )"
        ;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (local_70 < local_6c) {
      uVar10 = 0xffffffffffffffff;
      goto LAB_10034072f;
    }
    uVar10 = 1;
    if (local_6c < local_70) goto LAB_10034072f;
  }
  cVar1 = FUN_100170633(uVar3,&cf_Media);
  if ((cVar1 != '\0') && (cVar1 = FUN_100170633(local_78,&cf_Media), cVar1 != '\0')) {
    lVar8 = FUN_100166b7f(local_60,&cf_Variant);
    lVar9 = FUN_100166b7f(local_68,&cf_Variant);
    if ((lVar8 == 0) || (cVar1 = FUN_100167740(lVar8,&cf_AssetParts,&local_58), cVar1 == '\0')) {
      local_58 = 1;
    }
    if (lVar9 == 0) {
      uVar2 = 1;
    }
    else {
      cVar1 = FUN_100167740(lVar9,&cf_AssetParts,local_80);
      uVar2 = 1;
      if (cVar1 != '\0') {
        uVar2 = local_80[0];
      }
    }
    uVar11 = local_58 & 1;
    if ((uVar11 != (uVar2 & 1)) || (uVar11 = local_58 & 2, uVar11 != (uVar2 & 2))) {
      uVar10 = -(ulong)(uVar11 != 0) | 1;
      goto LAB_10034072f;
    }
  }
  uVar2 = FUN_100167d66(local_60,&cf_AssetManifestIndex);
  uVar11 = FUN_100167d66(local_68,&cf_AssetManifestIndex);
  if (uVar2 == 0 || uVar11 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "assetManifestIndex1 != 0 && assetManifestIndex2 != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar10 = 0xffffffffffffffff;
  if (uVar11 <= uVar2) {
    uVar10 = (ulong)(uVar11 < uVar2);
  }
LAB_10034072f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

