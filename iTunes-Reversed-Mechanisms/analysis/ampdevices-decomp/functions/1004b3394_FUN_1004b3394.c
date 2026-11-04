// name: FUN_1004b3394
// address: 1004b3394

int FUN_1004b3394(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  cVar2 = FUN_1004aa626(lVar1);
  if ((cVar2 == '\0') || (*(char *)(lVar1 + 0x778) != '\0')) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = 0x1f49;
  }
  else {
    if (param_2 == 0x7570726d) {
      *(undefined8 *)(lVar1 + 0x200) = param_3;
      *(undefined8 *)(lVar1 + 0x208) = param_4;
    }
    iVar4 = *(int *)(lVar1 + 0x170);
    if (iVar4 == 0) {
      iVar4 = 0x1f41;
      cVar2 = FUN_1001c19cd();
      if (((cVar2 == '\0') &&
          (((*(long *)(lVar1 + 0x28) == 0 || (*(char *)(*(long *)(lVar1 + 0x28) + 0x144) == '\0'))
           && (*(char *)(lVar1 + 0x1ca) == '\0')))) && (iVar4 = *(int *)(lVar1 + 0x170), iVar4 == 0)
         ) {
        cVar2 = FUN_1001c19cd();
        if (((cVar2 == '\0') &&
            ((*(long *)(lVar1 + 0x28) == 0 || (*(char *)(*(long *)(lVar1 + 0x28) + 0x144) == '\0')))
            ) && (*(char *)(lVar1 + 0x1ca) == '\0')) {
          iVar4 = 0;
        }
        else {
          iVar4 = -0x80;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

