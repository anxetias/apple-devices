// name: FUN_10031baf6
// address: 10031baf6

void FUN_10031baf6(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  undefined8 uStack_54;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = "Assertion failure";
      uStack_4c = 0x822;
      uStack_4a = 0xeb3f;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10031ba20(&local_58,param_1);
    *(ulong *)(param_2 + 7) = CONCAT44(uStack_38,uStack_3c);
    *(undefined8 *)(param_2 + 9) = uStack_34;
    *(ulong *)(param_2 + 4) = CONCAT26(uStack_42,uStack_48);
    *(ulong *)(param_2 + 6) = CONCAT44(uStack_3c,uStack_40);
    *param_2 = local_58;
    param_2[1] = (undefined4)uStack_54;
    param_2[2] = uStack_54._4_4_;
    param_2[3] = CONCAT22(uStack_4a,uStack_4c);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

