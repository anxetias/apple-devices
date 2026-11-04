// name: FUN_1001c6987
// address: 1001c6987

void FUN_1001c6987(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  long lVar2;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = param_1;
  local_88 = param_3;
  local_80 = param_4;
  local_78 = param_5;
  local_6c = param_2;
  cVar1 = FUN_1001ee068();
  if (cVar1 == '\0') {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      FUN_1001c6e5e(param_1,param_2,param_3,param_4,param_5);
      return;
    }
    goto LAB_1001c6aaa;
  }
  if ((*(int *)(param_1 + 4) == 0) && (*(long *)(param_1 + 0x10) != 0)) {
    local_48 = operator_new(0x30);
    *local_48 = (long)&PTR_FUN_10083d168;
    local_48[1] = (long)&local_90;
    local_48[2] = (long)&local_6c;
    local_48[3] = (long)&local_88;
    local_48[4] = (long)&local_80;
    local_48[5] = (long)&local_78;
    FUN_1001b18c5(local_68);
    if (local_48 == local_68) {
      lVar2 = 0x20;
    }
    else {
      lVar2 = 0x28;
      if (local_48 == (long *)0x0) goto LAB_1001c6a8b;
    }
    (**(code **)(*local_48 + lVar2))();
  }
LAB_1001c6a8b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_1001c6aaa:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

