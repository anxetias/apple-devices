// name: FUN_10061e800
// address: 10061e800

undefined8 FUN_10061e800(undefined8 *param_1,long *param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int *)*param_1 != (int *)0x0) {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_10061e8e5;
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar8 = *(uint *)(param_1[1] + 8);
      lVar7 = *(long *)(param_3 + 8);
      if (lVar7 != 0) {
        param_3 = param_3 + 8;
        lVar4 = param_3;
        lVar6 = lVar7;
        uVar1 = uVar8;
        do {
          do {
            uVar8 = uVar1;
            bVar9 = *(uint *)(lVar6 + 0x1c) < uVar8;
            lVar5 = lVar4;
            if (!bVar9) {
              lVar5 = lVar6;
            }
            lVar6 = *(long *)(lVar6 + (ulong)bVar9 * 8);
            lVar4 = lVar5;
            uVar1 = uVar8;
          } while (lVar6 != 0);
          if ((lVar5 == param_3) || (uVar8 < *(uint *)(lVar5 + 0x1c))) goto LAB_10061e930;
          lVar4 = param_3;
          lVar6 = lVar7;
          uVar1 = *(uint *)(lVar5 + 0x20);
        } while (uVar8 != *(uint *)(lVar5 + 0x20));
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "trackID != sourceDuplicateTrackIDIter->second";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
LAB_10061e930:
      uVar3 = 0;
      for (lVar7 = *param_2; lVar7 != param_2[1]; lVar7 = lVar7 + 0x70) {
        if ((*(uint *)(lVar7 + 4) == uVar8) && (*(int *)(lVar7 + 0x40) != 0)) {
          uVar3 = FUN_100490af0(lVar7 + 0x30);
          break;
        }
      }
      goto LAB_10061e909;
    }
  }
LAB_10061e8e5:
  uVar3 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar3,0x10);
  if (cVar2 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "PlaylistItemIsValid(sourcePlaylistItem)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_10061e909:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

