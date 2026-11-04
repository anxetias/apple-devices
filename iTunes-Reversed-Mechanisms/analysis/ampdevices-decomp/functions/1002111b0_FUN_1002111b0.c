// name: FUN_1002111b0
// address: 1002111b0

void FUN_1002111b0(undefined4 param_1,uint param_2,long param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "thisController != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar2 = FUN_1001e9de0(param_3 + 0x2110);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        *(undefined4 *)(param_3 + 0x2ab8) = param_1;
        uVar3 = 100;
        if (param_2 < 100) {
          uVar3 = param_2;
        }
        fVar5 = 0.0;
        if (-1 < (int)param_2) {
          fVar5 = (float)(int)uVar3;
        }
        *(float *)(param_3 + 0x2abc) = fVar5;
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          FUN_1001e9eb9(param_3 + 0x2110);
          return;
        }
        goto LAB_100211346;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_100211346:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

