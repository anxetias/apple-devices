// name: FUN_1005e405e
// address: 1005e405e

undefined8 FUN_1005e405e(long param_1,char param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_3 + 0x20) == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "inCallbackFunction != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    if (param_2 == '\0') {
      lVar3 = *(long *)(param_1 + 200);
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else if ((*(byte *)(lVar3 + 0xc5) & 0x10) != 0) {
        lVar3 = FUN_1005e3e6c(param_1,lVar3);
      }
    }
    else {
      lVar3 = FUN_1005e401a();
    }
    do {
      if (lVar3 == 0) {
        uVar5 = 0;
        break;
      }
      lVar4 = FUN_1005e3e6c();
      local_48 = (undefined4)lVar3;
      uStack_44 = (undefined4)((ulong)lVar3 >> 0x20);
      plVar1 = *(long **)(param_3 + 0x20);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
      uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_48);
      lVar3 = lVar4;
    } while ((int)uVar5 == 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

