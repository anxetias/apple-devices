// name: FUN_100622ed0
// address: 100622ed0

uint FUN_100622ed0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ulong *)(lVar1 + 0x28);
  }
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ulong *)(lVar2 + 0x28);
  }
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(trackInfo1)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(trackInfo2)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  bVar8 = uVar6 < uVar7;
  if (uVar6 == uVar7) {
    bVar8 = *(ushort *)(lVar1 + 0x13a) < *(ushort *)(lVar2 + 0x13a);
    if (*(ushort *)(lVar1 + 0x13a) == *(ushort *)(lVar2 + 0x13a)) {
      bVar8 = *(ushort *)(lVar1 + 0x136) < *(ushort *)(lVar2 + 0x136);
      if (*(ushort *)(lVar1 + 0x136) == *(ushort *)(lVar2 + 0x136)) {
        uVar4 = FUN_1002de174(lVar1,lVar2,2,0);
        uVar4 = uVar4 >> 0x1f;
        goto LAB_100622fb8;
      }
    }
  }
  uVar4 = (uint)bVar8;
LAB_100622fb8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

