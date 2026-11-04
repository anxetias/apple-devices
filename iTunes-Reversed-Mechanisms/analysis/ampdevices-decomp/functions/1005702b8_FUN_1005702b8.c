// name: FUN_1005702b8
// address: 1005702b8

int FUN_1005702b8(long *param_1,long param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_3);
  if (iVar2 == -0x80) goto LAB_100570434;
  if (iVar2 == 0) {
    local_50 = (ulong)(param_3 & 0xfffffff0);
    if ((param_3 & 0xfffffff0) == 0) {
LAB_100570417:
      iVar2 = 0;
      goto LAB_100570434;
    }
    iVar2 = (**(code **)(*(long *)param_1[2] + 0x90))
                      ((long *)param_1[2],param_2,param_1[0xd],local_50,1,0);
    if (iVar2 == -0x80) goto LAB_100570434;
    if (iVar2 == 0) {
      iVar2 = FUN_1000a8790(param_1[0xc],param_1[0xd],param_3 & 0xfffffff0,param_1[0xd],0);
      if ((iVar2 != 0) ||
         (iVar2 = (**(code **)(*(long *)param_1[4] + 0xa0))
                            ((long *)param_1[4],param_2,param_1[0xd],&local_50,1), iVar2 == -0x80))
      goto LAB_100570434;
      if (iVar2 == 0) {
        param_1[0x11] = param_2 + local_50;
        if (param_1[6] != 0) {
          FUN_1001cec82();
          iVar2 = (*(byte *)(param_1[6] + 0x48) ^ 1) * 0x80 + -0x80;
          goto LAB_100570434;
        }
        goto LAB_100570417;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  if (cVar1 != '\0') {
    local_3c = 0x400;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    local_3a = iVar2;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_100570434:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

