// name: FUN_10028935c
// address: 10028935c

uint FUN_10028935c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (undefined8 *)0x0) || ((int *)*param_1 == (int *)0x0)) {
LAB_10028941e:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "PlaylistItemIsValid(playlistItem)";
LAB_1002894c9:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*(int *)*param_1 != 0x706c7374) {
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
      if (cVar1 == '\0') goto LAB_10028941e;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_10028941e;
    if (param_3 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') goto LAB_100289437;
      local_3a = "context != nullptr";
      goto LAB_1002894c9;
    }
    cVar1 = FUN_100286e80(param_3,param_2);
    if (cVar1 != '\0') {
      iVar2 = FUN_1001d0bd4(param_2,param_1,0x68,FUN_100287355,param_3,&local_48);
      uVar4 = local_48 & 0xff;
      if (iVar2 != 0) {
        uVar4 = 0;
      }
      goto LAB_100289442;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "context->SetSearchCriteriaList(criteriaList)";
      goto LAB_1002894c9;
    }
  }
LAB_100289437:
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_100289442:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

