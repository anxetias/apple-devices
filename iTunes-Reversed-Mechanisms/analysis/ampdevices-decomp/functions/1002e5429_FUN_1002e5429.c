// name: FUN_1002e5429
// address: 1002e5429

ulong FUN_1002e5429(long param_1,char param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  undefined2 uStack_32;
  undefined8 uStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0xcfad;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,1);
  }
  else if (*(char *)(param_1 + 0x13e) == param_2) {
    uVar3 = 0;
  }
  else {
    *(char *)(param_1 + 0x13e) = param_2;
    uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (param_3 != '\0') {
      FUN_100314161(param_1);
      uStack_38 = 0;
      uStack_32 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_3a = 0;
      FUN_1005389ba(&local_48,0xaf);
      FUN_1004755ef(param_1,0,&local_48);
      FUN_100314411(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

