// name: FUN_1003739c5
// address: 1003739c5

undefined8 FUN_1003739c5(void *param_1,void *param_2)

{
  char cVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_10036d859();
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffdd;
    goto LAB_100373abf;
  }
  cVar1 = FUN_100373904(param_1,lVar2 + 0x10,0);
  uVar4 = 0xffffff88;
  if (cVar1 == '\0') {
    for (sVar3 = _strlen((char *)((long)param_1 + 0x1c)); sVar3 != 0; sVar3 = sVar3 - 1) {
      if (*(char *)((long)param_1 + sVar3 + 0x1b) != '/') goto LAB_100373a6d;
    }
    goto LAB_100373a32;
  }
  goto LAB_100373a5e;
  while (sVar3 = sVar3 - 1, sVar3 != 0) {
LAB_100373a6d:
    if (*(char *)((long)param_1 + sVar3 + 0x1b) == '/') {
      _memcpy(param_2,param_1,0x420);
      *(undefined1 *)((long)param_2 + sVar3 + 0x1c) = 0;
      *(undefined2 *)((long)param_2 + 4) = 0;
      uVar4 = 0;
      goto LAB_100373a5e;
    }
  }
LAB_100373a32:
  uVar4 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar4,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "pathLength != 0";
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_100373a5e:
  FUN_10036d4d2(lVar2);
LAB_100373abf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

