// name: FUN_1003a0178
// address: 1003a0178

undefined8 FUN_1003a0178(long param_1,char param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_3 + 0x20) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "inCallbackFunction != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    if ((param_2 != '\0') && ((*(byte *)(param_1 + 0xf8) & 2) == 0)) {
      FUN_10055ea6a(param_1);
    }
    lVar5 = *(long *)(param_1 + 0x60);
    do {
      if (lVar5 == 0) {
        uVar4 = 0;
        break;
      }
      lVar3 = FUN_1003a095a();
      local_48 = (undefined4)lVar5;
      uStack_44 = (undefined4)((ulong)lVar5 >> 0x20);
      plVar1 = *(long **)(param_3 + 0x20);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
      uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_48);
      lVar5 = lVar3;
    } while ((int)uVar4 == 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

