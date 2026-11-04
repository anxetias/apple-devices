// name: FUN_1004e0c3f
// address: 1004e0c3f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1004e0c3f(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  uint local_58;
  undefined4 local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1003070df();
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      local_4a = "libraryTrackData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar4 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1004e0e22;
  }
  if ((param_2 == '\0') || (cVar1 = FUN_10031b8dc(lVar4), cVar1 == '\x06')) goto LAB_1004e0e22;
  dVar9 = (double)FUN_1001ebd46();
  cVar1 = FUN_10031b8dc(lVar4);
  if (cVar1 == '\0') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_impl(0x100000000,uVar6,1,"loading library",&local_58,2);
    }
    iVar2 = FUN_100317071(lVar4,1);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) goto LAB_1004e0ca8;
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    lVar4 = 0;
    goto LAB_1004e0e22;
  }
LAB_1004e0ca8:
  cVar1 = FUN_10031b8dc(lVar4);
  if (cVar1 == '\x04') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_impl(0x100000000,uVar6,1,"waiting for library to load",&local_58,2);
    }
  }
  cVar1 = FUN_10031b8dc(lVar4);
  if (cVar1 == '\x04') {
    uVar6 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
    do {
      iVar2 = FUN_1001b1a0f();
      iVar3 = FUN_1001b19b0();
      if (iVar2 == iVar3) {
        FUN_1001727b4(DAT_10070e560,uVar6,0);
      }
      else {
        FUN_1001b0d8d(DAT_10070e560);
      }
      if (param_1 != 0) {
        if (*(int *)(param_1 + 8) != 0x64756c63) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = 0x7ab58c;
            uStack_50 = 1;
            uStack_4e = 0;
            uStack_4c = 0x822;
            local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          cVar1 = FUN_1001782e9(0);
          if (cVar1 == '\0') goto LAB_1004e0d9c;
        }
        if (*(char *)(param_1 + 0x6ae5) != '\0') {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar6 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar1 != '\0') {
            uVar5 = *(undefined8 *)(param_1 + 0x38);
            local_58 = 0x8000100;
            local_54 = (undefined4)uVar5;
            uStack_50 = (undefined2)((ulong)uVar5 >> 0x20);
            uStack_4e = (undefined2)((ulong)uVar5 >> 0x30);
            __os_log_impl(0x100000000,uVar6,1,"aborting library load for device %016llX",&local_58,
                          0xc);
          }
          break;
        }
      }
LAB_1004e0d9c:
      cVar1 = FUN_10031b8dc(lVar4);
    } while (cVar1 == '\x04');
  }
  cVar1 = FUN_10031b8dc(lVar4);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  if (cVar1 == '\x06') {
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_54 = *(undefined4 *)(lVar4 + 0x9c);
      local_58 = 0x4000200;
      uStack_50 = 0x400;
      uStack_4e = (undefined2)*(undefined4 *)(lVar4 + 0x98);
      uStack_4c = (undefined2)((uint)*(undefined4 *)(lVar4 + 0x98) >> 0x10);
      pcVar7 = "library loaded (%u tracks, %u playlists)";
      uVar5 = 1;
      uVar8 = 0xe;
LAB_1004e0fe3:
      __os_log_impl(0x100000000,uVar6,uVar5,pcVar7,&local_58,uVar8);
    }
  }
  else {
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar1 != '\0') {
      local_58 = local_58 & 0xffff0000;
      pcVar7 = "failed to load library";
      uVar5 = 0x10;
      uVar8 = 2;
      goto LAB_1004e0fe3;
    }
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    dVar10 = (double)FUN_1001ebd46();
    dVar9 = (dVar10 - dVar9) * _DAT_100708b48;
    local_58 = 0x8000100;
    local_54 = SUB84(dVar9,0);
    uStack_50 = (undefined2)((ulong)dVar9 >> 0x20);
    uStack_4e = (undefined2)((ulong)dVar9 >> 0x30);
    __os_log_impl(0x100000000,uVar6,1,"perf> FindIPodHomeLibrary() took %.2f ms",&local_58,0xc);
  }
LAB_1004e0e22:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

