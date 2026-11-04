// name: FUN_1004744bf
// address: 1004744bf

int FUN_1004744bf(long param_1,char param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "TrackInfoIsValid(trackInfo)";
LAB_10047463c:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if ((*(byte *)(param_1 + 0xc2) & 1) != 0) {
      iVar3 = *(int *)(*(long *)(param_1 + 0x70) + 0xc);
      if ((param_2 != '\0' || iVar3 == 0) && (iVar3 = *(int *)(param_1 + 0xd4), iVar3 == 0)) {
        iVar3 = FUN_10047fd52(param_1);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          lVar1 = *(long *)(param_1 + 0x10);
          if (lVar1 == 0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure (expected to be not NULL)";
              local_3c = 0x822;
              local_3a = "trackData";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            cVar2 = FUN_1001782e9(0,0);
            if (cVar2 == '\0') goto LAB_100474563;
          }
          if (*(int *)(lVar1 + 0x94) != 0) {
            *(int *)(param_1 + 0xd4) = iVar3;
            FUN_1004729c1(param_1,0x3c);
          }
        }
      }
      goto LAB_100474563;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "trackInfo->valid";
      goto LAB_10047463c;
    }
  }
  iVar3 = 0;
  FUN_1001782e9(0,0);
LAB_100474563:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

