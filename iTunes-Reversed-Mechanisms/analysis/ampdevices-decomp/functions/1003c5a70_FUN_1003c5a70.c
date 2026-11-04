// name: FUN_1003c5a70
// address: 1003c5a70

long FUN_1003c5a70(long param_1,char param_2,long param_3,char param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "deviceGUID != 0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_4 == '\0' || param_3 != 0) {
    lVar2 = FUN_1003070df();
    if (lVar2 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "trackData != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      for (lVar3 = FUN_100315ede(lVar2); lVar3 != 0; lVar3 = FUN_100316031(lVar3)) {
        if (((*(short *)(lVar3 + 0x10) == 0x14) && (*(long *)(lVar3 + 0x4f0) == param_1)) &&
           ((cVar1 = FUN_100482222(lVar3,1), param_2 == '\0' || (cVar1 == param_2))))
        goto LAB_1003c5bcc;
      }
      if (param_4 != '\0') {
        FUN_1001b8dfc(&local_58,param_3);
        lVar3 = FUN_1003c5cfa(lVar2,param_2,param_1,&local_58);
        FUN_1001b7a50(&local_58);
        goto LAB_1003c5bcc;
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "deviceName != nullptr || createPlaylist == false";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar3 = 0;
LAB_1003c5bcc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

