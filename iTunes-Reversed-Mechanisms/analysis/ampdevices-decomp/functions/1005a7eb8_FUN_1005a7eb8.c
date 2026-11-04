// name: FUN_1005a7eb8
// address: 1005a7eb8

int FUN_1005a7eb8(long *param_1,undefined1 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100230408(param_1[0x2cd]);
  param_1[0x2cc] = (long)(param_1 + 0x2cd);
  param_1[0x2cd] = 0;
  param_1[0x2ce] = 0;
  for (lVar4 = FUN_100315ede(*(undefined8 *)(*param_1 + 0x30)); lVar4 != 0;
      lVar4 = FUN_100316031(lVar4)) {
    iVar3 = FUN_1005a833a(param_1,lVar4,param_2);
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 == '\0') goto LAB_1005a822c;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      goto LAB_1005a8219;
    }
  }
  lVar4 = FUN_10048604a(*(undefined8 *)(*param_1 + 0x30));
  if ((lVar4 != 0) && (iVar1 = *(int *)(*(long *)(lVar4 + 0x78) + 0x18), iVar1 != 0)) {
    iVar7 = 0;
    do {
      uVar5 = FUN_100380761(lVar4,0x79,0,iVar7);
      iVar3 = FUN_1005a8516(param_1,uVar5,param_2);
      if (iVar3 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 == '\0') goto LAB_1005a822c;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_1005a8219;
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  if ((*(char *)(*param_1 + 0x392) == '\0') ||
     (piVar6 = (int *)FUN_10048bbac(*(undefined8 *)(*param_1 + 0x30),0xb,0), piVar6 == (int *)0x0))
  {
LAB_1005a8069:
    iVar3 = FUN_1005a8a98(param_1,param_3);
    if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_1005a822c;
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 == '\0') goto LAB_1005a822c;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
  }
  else {
    if (*piVar6 == 0x706c7374) {
LAB_1005a8009:
      if (((*(uint *)((long)param_1 + 0x15b4) & *(uint *)(param_1 + 0x2b7) & 8) != 0) &&
         (iVar1 = *(int *)(*(long *)(piVar6 + 0x1e) + 0x18), iVar1 != 0)) {
        iVar7 = 0;
        do {
          uVar5 = FUN_10037ddf6(*(undefined8 *)(piVar6 + 0xf0),0x79,0,iVar7);
          iVar3 = FUN_1005ad230(param_1,uVar5,param_2);
          if (iVar3 != 0) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            goto LAB_1005a81d1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar1 != iVar7);
      }
      goto LAB_1005a8069;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 != '\0') goto LAB_1005a8009;
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
LAB_1005a81d1:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 == '\0') goto LAB_1005a822c;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
  }
LAB_1005a8219:
  local_4c = 0x400;
  local_54 = "Assertion failure";
  local_58 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
LAB_1005a822c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

