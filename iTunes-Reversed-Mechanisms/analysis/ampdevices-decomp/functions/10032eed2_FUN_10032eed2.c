// name: FUN_10032eed2
// address: 10032eed2

ulong FUN_10032eed2(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (ushort *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "fileName != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else if (*param_1 < 0xf) {
LAB_10032eef4:
    uVar4 = 0;
  }
  else {
    lVar3 = 0;
    do {
      if (lVar3 == 8) {
        if (param_1[9] != 0x20) goto LAB_10032eef4;
      }
      else if ((ushort)(param_1[lVar3 + 1] - 0x3a) < 0xfff6) goto LAB_10032eef4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0xf);
    uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4 & 0xffffffff;
}

