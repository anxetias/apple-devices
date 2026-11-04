// name: FUN_1004baff2
// address: 1004baff2

int FUN_1004baff2(int param_1,long *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626(param_3);
  if ((cVar1 == '\0') || (*(char *)(param_3 + 0x778) != '\0')) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "( DownloadItem_IsValid(downloadItem) && ((downloadItem)->isContainer == false) )";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = 0x1faa;
  }
  else {
    if (param_1 == 0x64617461) {
      iVar3 = 0;
      FUN_1004b7959(param_3 + 0x7b8,*param_2,(int)param_2[1],0);
    }
    else {
      iVar3 = 0;
      if (param_1 != 0x73746f70) {
        if (param_1 == 0x73747274) {
          if (*param_2 != 0) {
            FUN_1004a9316(param_3);
          }
          if (param_2[1] != 0) {
            *(long *)(param_3 + 0x1b60) = param_2[1];
          }
          uVar2 = FUN_1001ebd46();
          *(undefined8 *)(param_3 + 0x680) = uVar2;
          *(undefined2 *)(param_3 + 0x690) = 1;
          FUN_1004b3311(param_3);
        }
        else {
          iVar3 = FUN_100182c9b(param_1,param_2);
        }
      }
    }
    cVar1 = FUN_1004b3506(param_3);
    if ((cVar1 != '\0') && (iVar3 = *(int *)(param_3 + 0x170), iVar3 == 0)) {
      iVar3 = (uint)(*(char *)(param_3 + 0x178) != '\0') * 0x80 + -0x80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

