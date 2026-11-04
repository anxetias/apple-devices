// name: FUN_10043107c
// address: 10043107c

void FUN_10043107c(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = (int *)0x0;
  if (*param_1 == 0x706c7374) {
LAB_1004310db:
    iVar2 = FUN_100594adc(&local_60,0);
    if ((iVar2 == 0) && (iVar2 = FUN_100484ae5(param_1,FUN_100439e4f,local_60), iVar2 == 0)) {
      iVar2 = 0;
      if ((local_60 != (int *)0x0) && ((iVar2 = 0, *local_60 == 0x4f4c5354 && (local_60[1] != 0))))
      {
        iVar2 = (int)((ulong)(*(long *)(local_60 + 4) - *(long *)(local_60 + 2)) >> 3) * -0x49249249
        ;
      }
      if ((*(byte *)(param_1 + 0x90) & 4) != 0) {
        FUN_10048ae3c(param_1);
      }
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          lVar4 = FUN_1005968bf(local_60,iVar5,0);
          if (lVar4 == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "playlistItem != nullptr";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            if ((*(byte *)(lVar4 + 0x60) & 2) == 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "playlistItem->markedForDelete";
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            FUN_1003a6ecc(lVar4);
            FUN_1001b1464();
          }
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      FUN_100595344(local_60);
      goto LAB_100431154;
    }
    if (iVar2 == -0x80) goto LAB_100431154;
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 != '\0') goto LAB_1004310db;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x400;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_100431154:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

