// name: FUN_10031f90b
// address: 10031f90b

void FUN_10031f90b(long param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0 && param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "desiredMediaKind != 0 || desiredUserMediaKind != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 != 0) {
      *(int *)(param_1 + 0x1c) = param_2;
    }
    if (param_3 == 0) {
      uVar2 = *(uint *)(param_1 + 0x1c);
      param_3 = *(uint *)(param_1 + 0x20);
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x1c);
      if ((param_3 & 4) == 0) {
        if ((param_3 >> 0x15 & 1) == 0) {
          if (uVar2 == 0x10 || (uVar2 >> 0x17 & 1) != 0) {
            if (param_3 == 0x400000) {
              param_3 = 0x800000;
            }
            else if (param_3 == 1) {
              param_3 = 0x10;
            }
          }
        }
        else {
          if ((uVar2 & 0xc62) == 0) {
            uVar4 = uVar2 | 0x800000;
            if ((uVar2 & 0x800010) == 0) {
              uVar4 = uVar2;
            }
          }
          else {
            uVar4 = uVar2 | 2;
          }
          param_3 = uVar4 & 0x800002 | 0x200000;
        }
      }
      else {
        if ((uVar2 & 0xc62) == 0) {
          uVar4 = uVar2 | 0x800000;
          if ((uVar2 & 0x800010) == 0) {
            uVar4 = uVar2;
          }
        }
        else {
          uVar4 = uVar2 | 2;
        }
        param_3 = uVar4 & 0x800002 | 4;
      }
      param_3 = uVar2 & 0x10000 | param_3;
      *(uint *)(param_1 + 0x20) = param_3;
    }
    if (param_3 == uVar2) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

