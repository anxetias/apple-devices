// name: FUN_10052bd74
// address: 10052bd74

int FUN_10052bd74(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_98;
  char *local_94;
  undefined2 local_8c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar7 = -0x32;
  if ((*(long *)(param_1 + 0x5a0) != 0) || (iVar7 = *(int *)(param_1 + 0x5a8), iVar7 != 0))
  goto LAB_10052bebe;
  iVar7 = *(int *)(param_1 + 0x80);
  if (iVar7 == 0x44574e4c) {
    lVar3 = FUN_1004aa9fa(param_1 + 0xb0);
    if (lVar3 == 0) goto LAB_10052be6c;
LAB_10052bdf4:
    iVar7 = 0;
    iVar2 = FUN_10017d477(lVar3,&local_98,0);
    if ((iVar2 == 0) && ((char)local_98 != '\0')) goto LAB_10052bebe;
    iVar7 = FUN_10017cc65(lVar3,0x64617461,*(undefined4 *)(param_1 + 0x598),
                          (long *)(param_1 + 0x5a0));
    if (iVar7 != -0x80) {
      if (iVar7 == 0) {
        lVar3 = *(long *)(param_1 + 0x5a0);
        if (lVar3 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            puVar6 = &local_48;
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            pcVar5 = "mFileRefNum != ((JRFileRefNum) 0)";
            goto LAB_10052bf48;
          }
          goto LAB_10052be89;
        }
        FUN_10017ce92(lVar3,param_1 + 0x5b0);
        *(undefined8 *)(param_1 + 0x510) = 0;
        iVar7 = 0;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = iVar7;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
  }
  else {
    if ((iVar7 == 0x4d46494c) || (iVar7 == 0x46494c45)) {
      lVar3 = param_1 + 0xb0;
      goto LAB_10052bdf4;
    }
LAB_10052be6c:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      puVar6 = &local_98;
      local_98 = 0x8220202;
      local_94 = "Assertion failure";
      local_8c = 0x822;
      pcVar5 = "fileLocation != __null";
LAB_10052bf48:
      *(char **)((long)puVar6 + 0xe) = pcVar5;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",puVar6,0x16);
    }
LAB_10052be89:
    FUN_1001782e9(0,0);
    iVar7 = -0x32;
  }
  *(int *)(param_1 + 0x5a8) = iVar7;
LAB_10052bebe:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

