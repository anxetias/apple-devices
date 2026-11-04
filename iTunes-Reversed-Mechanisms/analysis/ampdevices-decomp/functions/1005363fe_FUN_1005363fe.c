// name: FUN_1005363fe
// address: 1005363fe

undefined4
FUN_1005363fe(long param_1,uint param_2,int param_3,uint param_4,short param_5,char *param_6,
             undefined2 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char local_138 [4];
  char *local_134;
  undefined2 local_12c;
  char *local_12a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_7 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_12a = "fileName != nullptr";
LAB_1005365d4:
      local_12c = 0x822;
      local_134 = "Assertion failure";
      builtin_strncpy(local_138,"\x02\x02\"\b",4);
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",local_138,0x16);
    }
  }
  else {
    *param_7 = 0;
    if (param_1 != 0) {
      if (param_4 != 0) {
        if (param_3 == 1 || param_2 == 0) {
          _snprintf(local_138,100,"%02d ",(ulong)param_4);
        }
        else {
          _snprintf(local_138,100,"%d-%02d ",(ulong)param_2);
        }
        FUN_1001e04f5(local_138,param_7);
      }
      FUN_1001e1890(param_1,param_7);
      if ((ushort)(param_5 - 1U) < 3) {
        FUN_1001e26e1(&DAT_100755af8 + *(int *)(&DAT_100755af8 + (ulong)(ushort)(param_5 - 1U) * 4),
                      param_7);
      }
      uVar3 = 0;
      if ((param_6 != (char *)0x0) && (*param_6 != '\0')) {
        uVar3 = 0;
        _snprintf(local_138,0x100," (v%s)",param_6);
        FUN_1001e26e1(local_138,param_7);
      }
      goto LAB_10053658a;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_12a = "baseName != nullptr";
      goto LAB_1005365d4;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_10053658a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

