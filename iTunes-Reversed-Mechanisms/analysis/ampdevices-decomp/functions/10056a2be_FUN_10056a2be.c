// name: FUN_10056a2be
// address: 10056a2be

int FUN_10056a2be(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_100569944(param_1,param_2,8);
  if (iVar3 == -0x80) goto LAB_10056a3b7;
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_2 + 4);
    param_2 = param_2 + 8;
    uVar6 = param_3;
    if (uVar1 < param_3) {
      uVar6 = uVar1;
    }
    if (8 < uVar6) {
      iVar3 = FUN_100569944(param_1,param_2);
      if (iVar3 == -0x80) goto LAB_10056a3b7;
      if (iVar3 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        goto joined_r0x00010056a3b5;
      }
      param_2 = param_2 + (ulong)(uVar6 - 8);
    }
    if (uVar1 < param_3) {
      FUN_1001c62d9(param_2,param_3 - uVar6);
    }
    iVar3 = 0;
    if (param_3 < uVar1) {
      uVar4 = (long)(int)(uVar1 - uVar6) + *(long *)(param_1 + 0x1c9c478);
      *(ulong *)(param_1 + 0x1c9c478) = uVar4;
      iVar3 = 0;
      if ((uVar4 < *(ulong *)(param_1 + 0x1c9c480)) ||
         (*(ulong *)(param_1 + 0x1c9c480) + *(long *)(param_1 + 0x1c9c488) <= uVar4)) {
        *(undefined8 *)(param_1 + 0x1c9c488) = 0;
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
joined_r0x00010056a3b5:
    if (cVar2 != '\0') {
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      local_4a = iVar3;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_10056a3b7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

