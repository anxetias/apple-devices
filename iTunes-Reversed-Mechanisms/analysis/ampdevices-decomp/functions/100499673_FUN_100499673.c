// name: FUN_100499673
// address: 100499673

long FUN_100499673(long param_1,int param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100495380();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    lVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    for (puVar2 = (undefined8 *)FUN_100495ce0(param_1); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      if (*(int *)(puVar2 + 2) == param_2) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "FindITImageFormatInfo(imageLibrary, formatID) == nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        break;
      }
    }
    lVar4 = FUN_1001c58d5(*(undefined8 *)(param_1 + 0x60));
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      *(int *)(lVar4 + 0x10) = param_2;
      *(long *)(lVar4 + 8) = param_1;
      FUN_1001dcbb8(lVar4 + 0x18,1);
      FUN_1001c2470(param_1 + 0x38,lVar4);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

