// name: FUN_10051de77
// address: 10051de77

bool FUN_10051de77(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7ab58c;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "DulcimerHandlerDataIsValid(handlerData)";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      bVar3 = false;
      FUN_1001782e9(0,0);
      goto LAB_10051df63;
    }
  }
  cVar1 = FUN_1002669ba(*(undefined8 *)(param_1 + 0x66d8));
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    local_48 = 0;
    uStack_44 = 0;
    bVar3 = false;
    cVar1 = FUN_1001cdcc9(param_2,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_1001cd899(param_2,&local_48);
      if (cVar1 == '\0') {
        bVar3 = false;
      }
      else {
        cVar1 = FUN_1001dfa62(param_1 + 0x244,CONCAT44(uStack_44,local_48),1);
        bVar3 = cVar1 != '\0';
      }
      FUN_10017060f(CONCAT44(uStack_44,local_48));
    }
  }
LAB_10051df63:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

