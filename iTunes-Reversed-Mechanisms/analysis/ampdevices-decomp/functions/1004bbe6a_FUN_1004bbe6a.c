// name: FUN_1004bbe6a
// address: 1004bbe6a

void FUN_1004bbe6a(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_4c8 [80];
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar1 = (uint *)(*(long *)(param_2 + 8) + 0xc2);
  *puVar1 = *puVar1 & 0xff7fffff;
  puVar1 = (uint *)(*(long *)(param_2 + 8) + 0xc2);
  *puVar1 = *puVar1 & 0xfffffffd;
  if (*(int *)(param_2 + 0x3c) == 0x44574e4c) {
    FUN_1002ae6f7(param_2);
    iVar2 = *(int *)(param_2 + 0x3c);
    uVar5 = *(undefined8 *)(param_2 + 0x80);
    cVar3 = FUN_1004aa626(param_1);
    if (cVar3 == '\0') {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "DownloadItem_IsValid(inItem)";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if ((*(char *)(param_1 + 0x778) == '\0') &&
            ((((*(int *)(param_1 + 0x140) != 0x66696c65 ||
               (*(int *)(param_1 + 0x1304) == 0x636f7079)) || (-1 < *(int *)(param_1 + 0x7d8))) ||
             (*(char *)(param_1 + 0x1250) == '\x01')))) {
      FUN_1004aa912(param_1,&local_458);
      iVar4 = FUN_10017d477(&local_458,local_4c8,0);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          if (iVar2 == 0x46494c45) {
            FUN_10053672c(&local_458,local_4c8,uVar5);
            goto LAB_1004bbf8c;
          }
          if (iVar2 == 0x44574e4c) {
            FUN_1004ab1cc(param_1,uVar5);
            goto LAB_1004bbf8c;
          }
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 == '\0') goto LAB_1004bbf8c;
          local_46a = -0x32;
          iVar4 = local_46a;
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 == '\0') goto LAB_1004bbf8c;
        }
        local_46a = iVar4;
        local_46c = 0x400;
        local_474 = "Assertion failure";
        local_478 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
    }
  }
LAB_1004bbf8c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

