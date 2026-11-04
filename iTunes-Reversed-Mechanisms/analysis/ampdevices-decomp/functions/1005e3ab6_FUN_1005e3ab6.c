// name: FUN_1005e3ab6
// address: 1005e3ab6

undefined8
FUN_1005e3ab6(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,long param_5,
             undefined4 param_6,long *param_7)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1005e2888(param_1,param_4,2,param_6);
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "artistInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1005e3cbb;
  }
  if (param_5 != 0) {
    *(long *)(lVar4 + 0x48) = param_5;
    *(byte *)(lVar4 + 0x5c) = *(byte *)(lVar4 + 0x5c) & 0xfd;
  }
  *(char *)(lVar4 + 0x5f) = (char)param_6;
  FUN_1001de788(lVar4 + 0xe8,param_1 + 0x396,param_2);
  FUN_1001de788(lVar4 + 0xf8,param_1 + 0x49a,param_3);
  lVar1 = *(long *)(lVar4 + 8);
  if (lVar1 == 0) {
LAB_1005e3be0:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar1 + 0x80) != 0x74646174) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_1005e3be0;
    }
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    lVar2 = *(long *)(lVar1 + 0x1ba8);
    *(long *)(lVar4 + 0xe0) = lVar2;
    if (lVar2 == 0) {
      if (*(long *)(lVar1 + 0x1ba0) != 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "trackData->firstArtistInfoPrivate == nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      plVar6 = (long *)(lVar1 + 0x1ba0);
      if (*(int *)(lVar1 + 0xa8) != 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "trackData->numArtistInfos == 0";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else {
      plVar6 = (long *)(lVar2 + 0xd8);
    }
    *plVar6 = lVar4;
    *(long *)(lVar1 + 0x1ba8) = lVar4;
    if (*(long *)(lVar4 + 0x18) != 0) {
      FUN_1005e39b4(lVar1 + 0x2650,*(long *)(lVar4 + 0x18),lVar4);
    }
    *(int *)(lVar1 + 0xa8) = *(int *)(lVar1 + 0xa8) + 1;
  }
  (**(code **)(*param_1 + 0x10))(param_1,0x74326161,param_1,lVar4,0);
  *param_7 = lVar4;
LAB_1005e3cbb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

