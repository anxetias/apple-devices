// name: FUN_1002b8a30
// address: 1002b8a30

ulong FUN_1002b8a30(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  char local_298 [80];
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  int local_23a;
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "JRFileSpecIsValid(inFileSpec)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1002b8b00;
  }
  if (param_2 == (char *)0x0 || param_3 == (undefined4 *)0x0) {
    if (param_2 == (char *)0x0) {
      param_2 = local_298;
    }
    if (param_3 == (undefined4 *)0x0) {
      param_3 = &local_228;
    }
    iVar2 = FUN_10017d477(param_1);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) goto LAB_1002b8aa0;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_248 = 0x8220202;
        local_244 = "Assertion failure";
        local_23c = 0x400;
        local_23a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_248,0x12);
      }
    }
  }
  else {
LAB_1002b8aa0:
    if ((*param_2 != '\0') && (param_2[1] == '\0')) {
      iVar2 = FUN_1001e21dd(param_3);
      uVar4 = CONCAT71((int7)((ulong)param_3 >> 8),iVar2 == 0x4d4f5650);
      goto LAB_1002b8b00;
    }
  }
  uVar4 = 0;
LAB_1002b8b00:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

