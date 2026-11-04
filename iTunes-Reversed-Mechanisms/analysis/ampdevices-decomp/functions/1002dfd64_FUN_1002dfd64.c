// name: FUN_1002dfd64
// address: 1002dfd64

uint FUN_1002dfd64(long param_1,long param_2,int *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == param_2) {
    uVar5 = 0;
  }
  else if (param_1 == 0) {
    uVar5 = (uint)(param_2 != 0);
  }
  else if (param_2 == 0) {
    uVar5 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x10) == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "trackData != __null";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    do {
      iVar3 = *param_3;
      if (iVar3 == 0xb) {
        uVar1 = *(undefined2 *)(param_1 + 0x136);
        uVar2 = *(undefined2 *)(param_2 + 0x136);
        uVar6 = 0;
LAB_1002dfe18:
        uVar5 = FUN_1002df995(param_1,param_2,uVar1,uVar2,uVar6);
      }
      else {
        if (iVar3 == 0x18) {
          uVar1 = *(undefined2 *)(param_1 + 0x13a);
          uVar2 = *(undefined2 *)(param_2 + 0x13a);
          uVar6 = 1;
          goto LAB_1002dfe18;
        }
        uVar5 = 0;
        if (iVar3 == 0) break;
        uVar5 = FUN_1002de174(param_1,param_2,iVar3,param_4);
      }
      param_3 = param_3 + 1;
    } while (uVar5 == 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

