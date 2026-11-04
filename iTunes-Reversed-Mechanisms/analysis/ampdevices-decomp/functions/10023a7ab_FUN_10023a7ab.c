// name: FUN_10023a7ab
// address: 10023a7ab

void FUN_10023a7ab(undefined4 *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined1 in_stack_00000018 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((_uStack0000000000000008 != 0.0) || (NAN(_uStack0000000000000008))) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "rect.origin.x == 0";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if ((_uStack0000000000000010 != 0.0) || (NAN(_uStack0000000000000010))) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "rect.origin.y == 0";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if ((byte)(param_2 - 5U) < 4) {
    uVar2 = in_stack_00000018._8_8_;
    uVar3 = in_stack_00000018._4_4_;
    in_stack_00000018._8_4_ = in_stack_00000018._0_4_;
    in_stack_00000018._0_8_ = uVar2;
    in_stack_00000018._12_4_ = uVar3;
  }
  param_1[4] = in_stack_00000018._0_4_;
  param_1[5] = in_stack_00000018._4_4_;
  param_1[6] = in_stack_00000018._8_4_;
  param_1[7] = in_stack_00000018._12_4_;
  *param_1 = uStack0000000000000008;
  param_1[1] = uStack000000000000000c;
  param_1[2] = uStack0000000000000010;
  param_1[3] = uStack0000000000000014;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

