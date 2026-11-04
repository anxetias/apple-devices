// name: FUN_100358e4d
// address: 100358e4d

ulong FUN_100358e4d(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  ulong unaff_R12;
  ulong uVar6;
  char local_298 [80];
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  uint local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      puVar5 = &local_248;
      local_248 = 0x8220202;
      local_244 = "Assertion failure";
      local_23c = 0x822;
      pcVar4 = "JRFileSpecIsValid(inFolderSpec)";
LAB_100358fcf:
      *(char **)((long)puVar5 + 0xe) = pcVar4;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",puVar5,0x16);
    }
  }
  else {
    if (param_2 == (char *)0x0 || param_3 == (undefined4 *)0x0) {
      if (param_2 == (char *)0x0) {
        param_2 = local_298;
      }
      if (param_3 == (undefined4 *)0x0) {
        param_3 = &local_248;
      }
      uVar2 = FUN_10017d477(param_1);
      if (uVar2 != 0xffffff80) {
        unaff_R12 = (ulong)uVar2;
        if (uVar2 == 0) goto LAB_100358ec7;
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = uVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      uVar6 = 0;
      goto LAB_100358f84;
    }
LAB_100358ec7:
    if (*param_2 != '\0') {
      cVar1 = FUN_1002f18db(param_1,param_2,param_3);
      uVar6 = CONCAT71((int7)(unaff_R12 >> 8),1);
      if (cVar1 == '\0') {
        uVar2 = FUN_1002b8a30(param_1,param_2,param_3);
        uVar6 = (ulong)uVar2;
      }
      goto LAB_100358f84;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      puVar5 = &local_48;
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      pcVar4 = "inFolderInfo->isDirectory";
      goto LAB_100358fcf;
    }
  }
  uVar6 = 0;
  FUN_1001782e9(0,0);
LAB_100358f84:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

