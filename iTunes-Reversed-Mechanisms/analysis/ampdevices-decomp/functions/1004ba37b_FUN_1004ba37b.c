// name: FUN_1004ba37b
// address: 1004ba37b

ulong FUN_1004ba37b(char *param_1,long param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70[0] = 0;
  local_6c = 0;
  if (*param_1 == '\0') {
    uVar5 = 0;
    goto LAB_1004ba5b6;
  }
  if (param_1[0x20] == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "( (&inHashComputation->expectedHash)->hash[0] != 0 )";
LAB_1004ba583:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else if (param_1[1] == '\0') {
    if (param_2 != 0) {
      uVar5 = FUN_10017a41b(param_2,3,param_1 + 0x20,param_1 + 0x61);
      return uVar5;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "inDownloadFile != __null";
      goto LAB_1004ba583;
    }
  }
  else {
    if (*(long *)(param_1 + 0xa8) != 0) {
      uVar2 = FUN_1001799f1(*(long *)(param_1 + 0xa8),local_70);
      uVar5 = (ulong)uVar2;
      if (uVar2 == 0xffffff80) goto LAB_1004ba5b6;
      if (uVar2 == 0) {
        uVar5 = 0;
        FUN_100179ae2(local_70,param_1 + 0x61,0,0x40);
        iVar3 = _strcasecmp(param_1 + 0x20,param_1 + 0x61);
        if (iVar3 == 0) goto LAB_1004ba5b6;
        uVar5 = 0x1f48;
        if (param_3 == '\0') {
          uVar5 = 0xfffe7960;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') goto LAB_1004ba5b6;
        local_3a = (char *)CONCAT44(local_3a._4_4_,(int)uVar5);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') goto LAB_1004ba5b6;
        local_3a = (char *)CONCAT44(local_3a._4_4_,uVar2);
      }
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      goto LAB_1004ba5b6;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "inHashComputation->hashContext != __null";
      goto LAB_1004ba583;
    }
  }
  FUN_1001782e9(0,0);
  uVar5 = 0xffffffce;
LAB_1004ba5b6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

