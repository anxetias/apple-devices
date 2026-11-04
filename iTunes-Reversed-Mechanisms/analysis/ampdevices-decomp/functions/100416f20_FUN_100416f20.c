// name: FUN_100416f20
// address: 100416f20

void FUN_100416f20(int param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 & 0xffff0000) != 0x10cc0000) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "(stringID >> 16) == kIPodHandlerIPodDeviceStringsID";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar3 = param_2;
  if (param_1 < 0x69427269) {
    if (param_1 == 0x48506f64) {
      uVar3 = param_2 & 0xffff | 0x112e0000;
    }
    else if (param_1 == 0x4d616320) {
      uVar3 = param_2 & 0xffff | 0x11300000;
    }
    else if (param_1 == 0x57617463) {
      uVar3 = param_2 & 0xffff | 0x112d0000;
    }
  }
  else if (param_1 < 0x6950686e) {
    if (param_1 == 0x69427269) {
      uVar3 = param_2 & 0xffff | 0x11330000;
    }
    else if (param_1 == 0x69506164) {
      uVar3 = param_2 & 0xffff | 0x111c0000;
    }
  }
  else if (param_1 == 0x69545620) {
    uVar3 = param_2 & 0xffff | 0x10d50000;
  }
  else if (param_1 == 0x6950686e) {
    uVar3 = param_2 & 0xffff | 0x10e00000;
  }
  FUN_1001c3444(uVar3,param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

