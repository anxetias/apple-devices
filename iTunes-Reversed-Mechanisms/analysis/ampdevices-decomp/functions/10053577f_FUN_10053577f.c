// name: FUN_10053577f
// address: 10053577f

void FUN_10053577f(ushort param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined4 *)0x0 || param_3 == (int *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "(codecType != nullptr) && (codecSubType != nullptr)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10053583a;
  }
  iVar3 = 1;
  uVar5 = 0x6d706567;
  if (((2 < (ushort)(param_1 - 0x65)) && (iVar3 = 2, 2 < (ushort)(param_1 - 0xc9))) &&
     (iVar3 = 3, 2 < (ushort)(param_1 - 0x12d))) {
    uVar2 = (uint)param_1;
    if ((ushort)(param_1 - 0x191) < 6) {
      iVar3 = uVar2 - 400;
      uVar5 = 0x61756462;
    }
    else if ((ushort)(param_1 - 0x1f5) < 10) {
      iVar3 = uVar2 - 500;
      uVar5 = 0x6d703461;
    }
    else if (uVar2 < 0x2bd) {
      if (uVar2 == 0x259) {
        uVar5 = 0x616c6163;
        iVar3 = 1;
      }
      else if (uVar2 == 0x25a) {
        iVar3 = 0;
        uVar5 = 0x666c6163;
      }
      else {
LAB_1005358de:
        iVar3 = 0;
        uVar5 = 1;
      }
    }
    else if (uVar2 == 0x3e9) {
      iVar3 = 0;
      uVar5 = 0x75736163;
    }
    else {
      if (uVar2 != 0x2bd) goto LAB_1005358de;
      iVar3 = 0;
      uVar5 = 0x6c70636d;
    }
  }
  *param_2 = uVar5;
  *param_3 = iVar3;
LAB_10053583a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

