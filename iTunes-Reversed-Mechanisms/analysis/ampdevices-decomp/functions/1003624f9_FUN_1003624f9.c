// name: FUN_1003624f9
// address: 1003624f9

undefined8 FUN_1003624f9(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_4a = "TrackInfoIsValid(dbTrackInfo)";
LAB_1003627a8:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      FUN_1001c62d9(&local_58,0x20);
      lVar1 = *(long *)(param_1 + 0x28);
      lVar2 = *(long *)(param_2 + 0x28);
      if (*(int *)(param_1 + 0x144) != *(int *)(param_2 + 0x144)) {
        *(int *)(param_1 + 0x144) = *(int *)(param_2 + 0x144);
        *(undefined4 *)(param_1 + 0x148) = 0;
        *(undefined4 *)(param_2 + 0x148) = 0;
        FUN_1005389ba(&local_58,0x16);
      }
      if (*(uint *)(param_1 + 0x14c) < *(uint *)(param_2 + 0x14c)) {
        *(uint *)(param_1 + 0x14c) = *(uint *)(param_2 + 0x14c);
        FUN_1005389ba(&local_58,0x17);
      }
      if (*(int *)(param_1 + 0x150) != *(int *)(param_2 + 0x150)) {
        *(int *)(param_1 + 0x150) = *(int *)(param_2 + 0x150);
        *(undefined4 *)(param_1 + 0x154) = 0;
        *(undefined4 *)(param_2 + 0x154) = 0;
        FUN_1005389ba(&local_58,0x44);
      }
      if (*(uint *)(param_1 + 0x158) < *(uint *)(param_2 + 0x158)) {
        *(uint *)(param_1 + 0x158) = *(uint *)(param_2 + 0x158);
        FUN_1005389ba(&local_58,0x45);
      }
      cVar3 = FUN_10047f358(param_1);
      if (cVar3 != '\0') {
        uVar4 = FUN_10047f424(param_2);
        FUN_10047f4fd(param_1,uVar4);
      }
      FUN_10047f8d8(param_1,*(uint *)(param_2 + 0xc2) >> 0x1d & 1,&local_58);
      if (*(char *)(param_1 + 300) != *(char *)(param_2 + 300)) {
        FUN_100320aca(param_1,(int)*(char *)(param_2 + 300),0);
        FUN_1005389ba(&local_58,0x19);
      }
      if (*(char *)(param_1 + 0x134) != *(char *)(param_2 + 0x134)) {
        *(char *)(param_1 + 0x134) = *(char *)(param_2 + 0x134);
        FUN_1005389ba(&local_58,0x9a);
        iVar5 = *(int *)(param_2 + 0x130);
        if (iVar5 == 0) {
          iVar5 = FUN_100177d5c(0);
        }
        *(int *)(param_1 + 0x130) = iVar5;
        FUN_1005389ba(&local_58,0xb7);
      }
      cVar3 = *(char *)(lVar2 + 0xe6);
      if (*(char *)(lVar1 + 0xe6) != cVar3) {
        FUN_1003a2e74(lVar1,cVar3,0);
        FUN_1005389ba(&local_58,0x9c);
      }
      cVar3 = FUN_100539270(&local_58);
      if (cVar3 == '\0') {
        uVar6 = 0;
      }
      else {
        FUN_1004755ef(param_1,0,&local_58);
        uVar6 = 1;
      }
      goto LAB_100362760;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_4a = "TrackInfoIsValid(iPodTrackInfo)";
      goto LAB_1003627a8;
    }
  }
  uVar6 = 0;
  FUN_1001782e9(0,0);
LAB_100362760:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

