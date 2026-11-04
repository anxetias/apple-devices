// name: FUN_100561ece
// address: 100561ece

int FUN_100561ece(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,long param_5
                 ,long param_6,long param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined1 local_90 [16];
  long local_80;
  undefined1 local_78 [20];
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_64 = param_3;
  FUN_1001b7a44(local_78);
  if (param_6 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "imageLibrary != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    iVar2 = -0x32;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(char *)(param_6 + 0xb70) == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "imageLibrary->libraryFolderValid";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar2 = -0x32;
      FUN_1001782e9(0,0);
    }
    else {
      local_80 = param_6 + 0x750;
      FUN_1005615da(&local_58);
      FUN_1001b80b2(local_78,&local_58);
      uVar4 = FUN_1001b7a50(&local_58);
      if ((*(int *)(param_6 + 8) == 0) && (*(int *)(param_6 + 0x20) == 0)) {
        *(undefined2 *)(param_6 + 0x13c8) = 1;
        local_5c = (uint)CONCAT71((int7)((ulong)uVar4 >> 8),1);
      }
      else {
        local_5c = 0;
      }
      *(undefined8 *)(param_6 + 0x142c) = 0;
      *(undefined8 *)(param_6 + 0x1418) = 0;
      *(undefined8 *)(param_6 + 0x1420) = 0;
      local_60 = param_4;
      for (lVar5 = FUN_100496019(param_6); lVar5 != 0; lVar5 = FUN_1004960d0(lVar5)) {
        *(undefined1 *)(lVar5 + 0x83) = 1;
        *(undefined1 *)(lVar5 + 0xd6) = 0;
        for (lVar6 = FUN_1004968c5(lVar5); lVar6 != 0; lVar6 = FUN_100496985(lVar6)) {
          if ((*(uint *)(lVar6 + 0x10) | 2) == 7) {
            *(undefined1 *)(lVar6 + 0x50) = 1;
          }
        }
      }
      for (lVar5 = FUN_100496392(param_6); lVar5 != 0; lVar5 = FUN_100496449(lVar5)) {
        *(undefined1 *)(lVar5 + 0xc5) = 1;
      }
      FUN_1001b7a5c(local_90,local_78);
      lVar5 = param_7 + 0x68;
      if (param_7 == 0) {
        lVar5 = param_5;
      }
      if (param_5 != 0) {
        lVar5 = param_5;
      }
      iVar2 = FUN_100562d07(param_1,param_2,local_90,local_64,local_60,lVar5,param_6,local_5c & 0xff
                           );
      FUN_1001b7a50(local_90);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      iVar3 = FUN_1001823de(local_80,param_6 + 0x1460,0xbfe);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      uVar7 = 7;
      if ((local_60 >> 10 & 1) == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "librarySource != kITImageLibrarySource_Unknown";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        uVar7 = 0;
        FUN_1001782e9(0,0);
      }
      *(undefined4 *)(param_6 + 0x13c0) = uVar7;
    }
    FUN_10017060f(0);
  }
  FUN_1001b7a50(local_78);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

