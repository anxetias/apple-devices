// name: FUN_10025e6e0
// address: 10025e6e0

void FUN_10025e6e0(long param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  cfstringStruct **ppcVar7;
  cfstringStruct *local_98 [2];
  undefined1 local_81;
  long local_80 [2];
  long local_70 [2];
  cfstringStruct *local_60;
  cfstringStruct *local_58 [2];
  undefined1 local_48 [12];
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48._0_4_ = 0x8220202;
      local_48._4_8_ = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mDataDict != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined1 *)(param_1 + 0x4dce) = 1;
    local_58[0] = &cf_create;
    FUN_1001a7b90(local_80);
    FUN_10032f0f2(local_98);
    FUN_10032f0f2(local_48);
    lVar1 = param_1 + 0x18;
    cVar2 = FUN_1001a92ae(lVar1,local_80,local_48);
    ppcVar7 = local_98;
    if (cVar2 != '\0') {
      ppcVar7 = (cfstringStruct **)local_48;
    }
    FUN_1001a7a9e(local_70,ppcVar7);
    FUN_1001a85d4(local_48);
    FUN_1001a85d4(local_98);
    FUN_1001ab240(local_80);
    if (local_70[0] != 0) {
      uVar3 = FUN_1001a8610(local_70);
      uVar6 = 0x14;
      if (uVar3 < 0x15) {
        uVar6 = FUN_1001a8610(local_70);
      }
      uVar4 = FUN_1001a8626(local_70);
      FUN_1001c631b(uVar4,param_1 + 0x28,uVar6);
    }
    FUN_1001a85d4(local_70);
    local_58[0] = &cf_fixed;
    FUN_1001a7b90(local_80);
    FUN_10032f0f2(local_98);
    FUN_10032f0f2(local_48);
    cVar2 = FUN_1001a92ae(lVar1,local_80,local_48);
    ppcVar7 = local_98;
    if (cVar2 != '\0') {
      ppcVar7 = (cfstringStruct **)local_48;
    }
    FUN_1001a7a9e(local_70,ppcVar7);
    FUN_1001a85d4(local_48);
    FUN_1001a85d4(local_98);
    FUN_1001ab240(local_80);
    if (local_70[0] != 0) {
      uVar3 = FUN_1001a8610(local_70);
      uVar6 = 0x86;
      if (uVar3 < 0x87) {
        uVar6 = FUN_1001a8610(local_70);
      }
      uVar4 = FUN_1001a8626(local_70);
      FUN_1001c631b(uVar4,param_1 + 0x3c,uVar6);
    }
    FUN_1001a85d4(local_70);
    FUN_10032f0f2(local_48);
    FUN_1001b7a44(local_70);
    FUN_10032f0f2(local_98);
    FUN_10032f0f2(local_80);
    FUN_1001a7b90(&local_60);
    cVar2 = FUN_1001a9810(lVar1,&local_60,local_58);
    uVar5 = 0;
    if (cVar2 != '\0') {
      uVar5 = SUB84(local_58[0],0);
    }
    *(undefined4 *)(param_1 + 0xc2) = uVar5;
    FUN_1001ab240(&local_60);
    local_60 = &cf_artworkUUID;
    FUN_1001a7b90(local_58,&local_60);
    cVar2 = FUN_1001a944e(lVar1,local_58,local_70);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001b8172(param_1 + 0xc6,local_70);
      *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) | 1;
    }
    local_60 = &cf_dataDict;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a9164(lVar1,local_58,local_98);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001a7ad8(param_1 + 0xd6,local_98);
      *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) | 2;
    }
    local_60 = &cf_longDescription;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a944e(lVar1,local_58,local_70);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001b8172(param_1 + 0xf6,local_70);
      *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) | 4;
    }
    local_60 = &cf_collectionDescription;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a944e(lVar1,local_58,local_70);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001b8172(param_1 + 0x106,local_70);
      *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) | 0x10;
    }
    local_60 = &cf_movieInfo;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a92ae(lVar1,local_58,local_80);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001a7ad8(param_1 + 0x116,local_80);
      *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) | 8;
    }
    local_60 = &cf_lyrics;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a957a(lVar1,local_58,&local_81);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) | 0x20;
    }
    local_60 = &cf_removedKeys;
    FUN_1001a7b90(local_58);
    cVar2 = FUN_1001a90d0(lVar1,local_58,local_48);
    FUN_1001ab240(local_58);
    if (cVar2 != '\0') {
      FUN_1001a7ad8(param_1 + 0xe6,local_48);
      *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) | 0x40;
    }
    FUN_1001a85d4(local_80);
    FUN_1001a8fac(local_98);
    FUN_1001b7a50(local_70);
    FUN_1001a7a94(local_48);
    local_58[0] = &cf_itTrackInfo;
    FUN_1001a7b90(local_80);
    FUN_10032f0f2(local_98);
    FUN_10032f0f2(local_48);
    cVar2 = FUN_1001a92ae(lVar1,local_80,local_48);
    ppcVar7 = local_98;
    if (cVar2 != '\0') {
      ppcVar7 = (cfstringStruct **)local_48;
    }
    FUN_1001a7a9e(local_70,ppcVar7);
    FUN_1001a85d4(local_48);
    FUN_1001a85d4(local_98);
    FUN_1001ab240(local_80);
    if (local_70[0] != 0) {
      uVar3 = FUN_1001a8610(local_70);
      uVar6 = 0x1660;
      if (uVar3 < 0x1661) {
        uVar6 = FUN_1001a8610(local_70);
      }
      uVar4 = FUN_1001a8626(local_70);
      FUN_1001c631b(uVar4,param_1 + 0x126,uVar6);
    }
    FUN_1001a7b90(&local_60);
    FUN_10032f0f2(local_58);
    FUN_10032f0f2(local_48);
    cVar2 = FUN_1001a92ae(lVar1,&local_60,local_48);
    ppcVar7 = local_58;
    if (cVar2 != '\0') {
      ppcVar7 = (cfstringStruct **)local_48;
    }
    FUN_1001a7a9e(local_80,ppcVar7);
    FUN_1001a85d4(local_48);
    FUN_1001a85d4(local_58);
    FUN_1001ab240(&local_60);
    if (local_80[0] != 0) {
      uVar3 = FUN_1001a8610(local_80);
      uVar6 = 0x3648;
      if (uVar3 < 0x3649) {
        uVar6 = FUN_1001a8610(local_80);
      }
      uVar4 = FUN_1001a8626(local_80);
      FUN_1001c631b(uVar4,param_1 + 0x1786,uVar6);
    }
    FUN_1001a85d4(local_80);
    FUN_1001a85d4(local_70);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

