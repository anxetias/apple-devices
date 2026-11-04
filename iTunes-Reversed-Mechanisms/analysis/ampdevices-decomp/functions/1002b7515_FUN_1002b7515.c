// name: FUN_1002b7515
// address: 1002b7515

ulong FUN_1002b7515(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(inTrackInstance)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar7 = 0;
    FUN_1001782e9(0,0);
  }
  else if (*(int *)(param_1 + 0x3c) == 0x46494c45) {
    iVar3 = *(int *)(param_1 + 0x40);
    if (iVar3 == 0) {
      iVar3 = FUN_1002b3f68(param_1,&local_38,&local_3c);
      if (iVar3 == 0) {
        lVar1 = CONCAT44(uStack_34,local_38);
        if ((local_3c != 0 && lVar1 != 0) &&
           ((uVar4 = local_3c - 1, *(char *)(lVar1 + (ulong)uVar4) != '/' ||
            (local_3c = uVar4, uVar4 != 0)))) {
          uVar4 = FUN_1001e2019(lVar1,local_3c);
          if (0 < (int)uVar4) {
            uVar5 = FUN_1001e2095((ulong)uVar4 + CONCAT44(uStack_34,local_38),local_3c - uVar4);
            *(undefined4 *)(param_1 + 0x40) = uVar5;
          }
        }
      }
      iVar3 = *(int *)(param_1 + 0x40);
    }
    uVar7 = CONCAT71((int7)((ulong)param_1 >> 8),iVar3 == 0x4d4f5650);
  }
  else {
    uVar7 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

