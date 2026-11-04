// name: FUN_10047478a
// address: 10047478a

ulong FUN_10047478a(long param_1)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  ulong uVar6;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar6 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if ((*(byte *)(lVar2 + 0x1bb3) & 0x20) == 0) {
      bVar1 = *(byte *)(lVar2 + 0x1b52);
      if (bVar1 != 0) {
        bVar3 = FUN_100474865();
        if ((bVar3 & bVar1) != 0) goto LAB_1004747fa;
      }
      uVar6 = 0;
    }
  }
LAB_1004747fa:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

