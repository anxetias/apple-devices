// name: FUN_10017ef94
// address: 10017ef94

int FUN_10017ef94(long param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ushort local_228 [260];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_100686bac(uVar4);
    }
    iVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001e1c39(param_1,local_228);
    iVar6 = 0;
    FUN_1001e3e43(local_228,0);
    uVar3 = (uint)local_228[0];
    if (local_228[0] != 0) {
      iVar6 = 0;
      iVar5 = 1;
      do {
        uVar1 = local_228[uVar3];
        if (9 < (ushort)(uVar1 - 0x30)) {
          if ((uVar1 == 0x20) || (uVar1 == 0x5f)) goto LAB_10017f034;
          break;
        }
        iVar6 = iVar6 + (uVar1 - 0x30) * iVar5;
        iVar5 = iVar5 * 10;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      iVar6 = 0;
    }
  }
LAB_10017f034:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

