// name: FUN_100585431
// address: 100585431

void FUN_100585431(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100585526:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "PlaylistIsValid(playlist)";
LAB_100585700:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100585526;
    }
    if (param_2 == (int *)0x0) {
LAB_100585568:
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_3a = "PlaylistIsValid(smartFolderPlaylist)";
        goto LAB_100585700;
      }
    }
    else {
      if (*param_2 != 0x706c7374) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure (expected to be true)";
          local_3c = 0x822;
          local_3a = "playlist->magic == \'plst\'";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_100585568;
      }
      if (*(int **)(param_1 + 10) == param_2) {
        if ((*(byte *)(param_2 + 0xa6) & 2) != 0) {
          FUN_100314020(param_2);
          iVar2 = FUN_1001d17e2(*(undefined8 *)(param_2 + 0xaa),1,0x28,
                                *(undefined8 *)(param_1 + 0x18),&local_48);
          if (iVar2 == 0) {
            FUN_1001d0942(*(undefined8 *)(param_2 + 0xaa),local_48);
            FUN_1002899cf(*(undefined8 *)(param_2 + 0xaa),param_2 + 0xb2);
            piVar4 = param_2;
            do {
              FUN_1005821b3(piVar4,1);
              piVar4 = *(int **)(piVar4 + 10);
            } while (piVar4 != (int *)0x0);
            if (*(int *)(*(long *)(param_1 + 2) + 0x2cc4) == 0) {
              FUN_100584aa2(*(long *)(param_1 + 2),1);
            }
            FUN_1004874fd(param_2,0x20000);
          }
          FUN_1003142ca(param_2);
          goto LAB_10058558e;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_3a = "smartFolderPlaylist->isSmartFolderPlaylist";
          goto LAB_100585700;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_3a = "playlist->parent == smartFolderPlaylist";
          goto LAB_100585700;
        }
      }
    }
  }
  FUN_1001782e9(0,0);
LAB_10058558e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

