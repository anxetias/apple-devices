// name: FUN_10048533f
// address: 10048533f

void FUN_10048533f(long *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 != (long *)0x0) && ((int *)*param_1 != (int *)0x0)) {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10048544a;
    }
    if ((int)param_1[8] != 0) {
      lVar1 = *param_1;
      FUN_1001c6987(lVar1 + 200,0x61706c69,param_1,0,0);
      if ((*(byte *)(lVar1 + 0x240) & 4) != 0) {
        plVar2 = *(long **)(lVar1 + 8);
        (**(code **)(*plVar2 + 0x10))(plVar2,0x6d747070,plVar2,param_1,0);
      }
      if (*(short *)(lVar1 + 0x10) == 7) {
        FUN_10044b064(*(undefined8 *)(lVar1 + 8));
      }
      if (((*(byte *)(lVar1 + 0x241) & 2) != 0) && (*(int *)(*(long *)(lVar1 + 0x78) + 0x18) == 1))
      {
        FUN_1001c6987(lVar1 + 200,0x63706864,lVar1,0,0);
        plVar2 = *(long **)(lVar1 + 8);
        (**(code **)(*plVar2 + 0x10))(plVar2,0x74647068,plVar2,lVar1,0);
      }
      goto LAB_10048546c;
    }
  }
LAB_10048544a:
  uVar4 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar4,0x10);
  if (cVar3 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "PlaylistItemIsValid(playlistItem)";
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
LAB_10048546c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

