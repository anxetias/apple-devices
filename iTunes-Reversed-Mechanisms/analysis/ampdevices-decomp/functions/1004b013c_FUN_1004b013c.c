// name: FUN_1004b013c
// address: 1004b013c

undefined8 FUN_1004b013c(long param_1,undefined1 param_2,void *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1004aa626();
  if (cVar2 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DownloadItem_IsValid(inItem)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0x1f49;
  }
  else {
    if (*(char *)(param_1 + 0x640) == '\0') {
      if (*(char *)(param_1 + 0x778) == '\0') {
        uVar1 = *(undefined4 *)(param_1 + 0xe28);
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x790);
      }
      uVar3 = FUN_1004b0271(param_1,param_2,uVar1,param_3);
      if ((int)uVar3 != 0) goto LAB_1004b01e4;
      *(undefined1 *)(param_1 + 0x640) = 1;
      pvVar5 = (void *)(param_1 + 0x220);
      pvVar4 = param_3;
    }
    else {
      pvVar4 = (void *)(param_1 + 0x220);
      pvVar5 = param_3;
    }
    _memcpy(pvVar5,pvVar4,0x420);
    uVar3 = 0;
  }
LAB_1004b01e4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

