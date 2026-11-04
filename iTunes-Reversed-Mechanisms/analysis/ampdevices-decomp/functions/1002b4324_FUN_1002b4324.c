// name: FUN_1002b4324
// address: 1002b4324

undefined8 FUN_1002b4324(long param_1,void *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1002b43df:
    uVar3 = 0xffffffce;
  }
  else {
    uVar3 = 0xffffffd5;
    if ((*(byte *)(lVar1 + 0x1bb3) & 8) == 0) {
      uVar3 = FUN_1002b0559(param_1,0xc2);
      if ((int)uVar3 == 0) {
        if (*(int *)(param_1 + 0x3c) == 0x44574e4c) {
          pvVar4 = (void *)FUN_1004aa9fa(*(undefined8 *)(param_1 + 0x80));
          if (pvVar4 == (void *)0x0) goto LAB_1002b43df;
          _memcpy(param_2,pvVar4,0x420);
          uVar3 = 0;
        }
        else {
          uVar3 = 0xfffffffc;
          if (*(int *)(param_1 + 0x3c) == 0x46494c45) {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
              uVar3 = FUN_1002b1039(param_1,param_2);
              return uVar3;
            }
            goto LAB_1002b4470;
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
LAB_1002b4470:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

