// name: FUN_100638411
// address: 100638411

undefined8 FUN_100638411(int *param_1,undefined8 *param_2,undefined8 param_3,char *param_4)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [20];
  uint local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_4 = '\0';
  cVar2 = FUN_1003a7de7(param_2);
  uVar6 = 0;
  if (cVar2 != '\0') goto LAB_10063844e;
  local_5c = 0;
  cVar2 = FUN_100484163(param_3);
  if (cVar2 == '\0') goto LAB_10063844e;
  if (*param_1 == 0x706c7374) {
LAB_1006384d0:
    if ((param_1[0xe3] != 0) && ((uint)param_1[0xe3] <= *(uint *)(*(long *)(param_1 + 0x1e) + 0x18))
       ) {
      FUN_1001b7a44(local_70);
      FUN_1001c334a(&local_58,0x2328002a);
      FUN_1001b8e86(local_80,param_1[0xe3],1);
      FUN_1001bbec4(local_90,&local_58,local_80);
      FUN_1001b7a50(local_80);
      FUN_1001b7a50(&local_58);
      lVar4 = FUN_1004de2ea(param_1);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 8) != 0x64756c63) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure (expected to be true)";
            local_4c = 0x822;
            local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          cVar2 = FUN_1001782e9(0,1);
          if (cVar2 == '\0') goto LAB_100638748;
        }
        FUN_1004fda52(&local_58,*(undefined4 *)(lVar4 + 0x28));
        FUN_1001b80b2(local_70,&local_58);
        FUN_1001b7a50(&local_58);
      }
LAB_100638748:
      FUN_100450d15(local_90,local_70);
      FUN_1001b7a50(local_90);
      FUN_1001b7a50(local_70);
      uVar6 = 0xffffff80;
      goto LAB_10063844e;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0);
    if (cVar2 != '\0') goto LAB_1006384d0;
  }
  FUN_1002e2e73(param_2);
  cVar2 = FUN_100492fa3(*param_2);
  if (cVar2 != '\0') {
    if (*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0);
      if (cVar2 == '\0') goto LAB_100638620;
    }
    lVar4 = *(long *)(param_1 + 2);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x80) != 0x74646174) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar2 = FUN_1001782e9(0);
        if (cVar2 == '\0') goto LAB_100638620;
        lVar4 = *(long *)(param_1 + 2);
      }
      if (*(int *)(lVar4 + 0x84) == 0x2062696c) {
        lVar4 = FUN_1002e2e73(param_2);
        for (lVar5 = FUN_1002f9fc5(*(undefined8 *)(param_1 + 2)); lVar5 != 0;
            lVar5 = FUN_1002fa118(lVar5)) {
          lVar1 = *(long *)(lVar5 + 8);
          if ((lVar1 == 0) || (*(long *)(lVar1 + 0x10) == 0)) {
            lVar7 = 0;
          }
          else {
            lVar7 = *(long *)(*(long *)(lVar5 + 0x10) + 0x38);
          }
          if (((lVar4 == 0) || (*(long *)(lVar4 + 8) == 0)) ||
             (*(long *)(*(long *)(lVar4 + 8) + 0x10) == 0)) {
            lVar8 = 0;
          }
          else {
            lVar8 = *(long *)(*(long *)(lVar4 + 0x10) + 0x38);
          }
          if (((lVar1 != 0) && (lVar7 == lVar8)) &&
             ((*(long *)(lVar1 + 0x10) != 0 &&
              ((*(long *)(*(long *)(lVar5 + 0x10) + 0x38) != 0 &&
               ((*(byte *)(lVar1 + 0xc3) & 8) == 0)))))) {
            param_2 = (undefined8 *)FUN_100489951(param_1,lVar5,0);
            goto LAB_100638671;
          }
        }
      }
    }
  }
LAB_100638620:
  if (*param_4 == '\0') {
    if ((local_5c & 0xffffffe6) != 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "(instanceCopyOptions & ~(kCopyPlaylistItemTranscodeFile | kCopyPlaylistItemUnzipFile | kCopyPlaylistItemZipFile)) == 0"
        ;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    param_2 = (undefined8 *)FUN_1003a790f(param_2,0,param_1,0,local_5c);
LAB_100638671:
    *param_4 = '\x01';
  }
  if (param_2 != (undefined8 *)0x0) {
    *(undefined4 *)((long)param_2 + 0x5c) = 1;
    uVar6 = 0;
  }
LAB_10063844e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

