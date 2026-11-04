// name: FUN_10048ae3c
// address: 10048ae3c

undefined8 FUN_10048ae3c(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10048b0b1:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10048b0b1;
    }
    uVar2 = *(undefined8 *)(param_1 + 2);
    FUN_100313e0b(uVar2);
    for (puVar3 = (undefined8 *)FUN_100485529(param_1); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[3]) {
      if ((int *)*puVar3 == (int *)0x0) {
LAB_10048af26:
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "PlaylistItemIsValid(playlistItem)";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (*(int *)*puVar3 != 0x706c7374) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure (expected to be true)";
            local_4c = 0x822;
            local_4a = "playlist->magic == \'plst\'";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          cVar1 = FUN_1001782e9(0,1);
          if (cVar1 == '\0') goto LAB_10048af26;
        }
        if (*(int *)(puVar3 + 8) == 0) goto LAB_10048af26;
        if ((*(ushort *)(puVar3 + 0xc) & 2) != 0) {
          if (*(char *)(puVar3[1] + 0xc1) == '\0') {
            for (puVar6 = *(undefined8 **)(puVar3[1] + 0x68); puVar6 != (undefined8 *)0x0;
                puVar6 = (undefined8 *)puVar6[10]) {
              piVar5 = (int *)*puVar6;
              if (piVar5 != (int *)0x0 && piVar5 != param_1) {
                if (*piVar5 != 0x706c7374) {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure (expected to be true)";
                    local_4c = 0x822;
                    local_4a = "playlist->magic == \'plst\'";
                    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  cVar1 = FUN_1001782e9(0,1);
                  if (cVar1 == '\0') goto LAB_10048afc6;
                  piVar5 = (int *)*puVar6;
                }
                if ((*(byte *)(piVar5 + 0x90) & 4) == 0) {
                  *(byte *)(puVar6 + 0xc) = *(byte *)(puVar6 + 0xc) | 2;
                  piVar5[0x1b] = 1;
                }
              }
LAB_10048afc6:
            }
          }
          else {
            *(ushort *)(puVar3 + 0xc) = *(ushort *)(puVar3 + 0xc) & 0xfffd;
          }
        }
      }
    }
    for (piVar5 = (int *)FUN_100315ede(*(undefined8 *)(param_1 + 2)); piVar5 != (int *)0x0;
        piVar5 = (int *)FUN_100316031(piVar5)) {
      if ((piVar5 != param_1) && (piVar5[0x1b] != 0)) {
        piVar5[0x1b] = 0;
        FUN_10048aa9c(piVar5,0);
      }
    }
    FUN_1002fbbfc(uVar2);
    uVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

