// name: FUN_1002e80a4
// address: 1002e80a4

void FUN_1002e80a4(long param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = param_1;
  piVar4 = (int *)FUN_100490ab3();
  if (piVar4 == (int *)0x0) goto LAB_1002e8231;
  iVar1 = *(int *)(param_1 + 0x88);
  FUN_100314020(piVar4);
  if ((iVar1 == 0) && (*(long *)(param_1 + 0x90) != 0)) {
    lVar2 = *(long *)(param_1 + 0x98);
    if (*piVar4 == 0x706c7374) {
LAB_1002e813f:
      param_1 = param_1 + 0x90;
      lVar6 = FUN_1001ab132(param_1);
      if (lVar6 == 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_3a = "inUUID.GetLength() > 0";
LAB_1002e82cd:
          local_3c = 0x822;
          local_44 = "Assertion failure";
          local_48 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        goto LAB_1002e8210;
      }
      cVar3 = FUN_1001a85de(param_1,piVar4 + 0x136);
      if ((cVar3 == '\0') || (*(long *)(piVar4 + 0x138) != lVar2)) {
        FUN_100314020(piVar4);
        FUN_1001a8c4a(piVar4 + 0x136,param_1);
        *(long *)(piVar4 + 0x138) = lVar2;
        *(byte *)((long)piVar4 + 0x333) = *(byte *)((long)piVar4 + 0x333) & 0xfe;
        FUN_1004874fd(piVar4,8);
        FUN_1003142ca(piVar4);
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 != '\0') goto LAB_1002e813f;
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_3a = "PlaylistIsValid( inPlaylist )";
        goto LAB_1002e82cd;
      }
LAB_1002e8210:
      FUN_1001782e9(0,1);
    }
    FUN_1002e69b9(piVar4,5);
  }
  FUN_1003142ca(piVar4);
LAB_1002e8231:
  FUN_1002e7582(&local_50);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

