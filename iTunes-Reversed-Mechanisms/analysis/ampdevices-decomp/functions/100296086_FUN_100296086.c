// name: FUN_100296086
// address: 100296086

undefined8 FUN_100296086(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = (**(code **)(**(long **)(param_1 + 0xca8) + 0xa8))();
  if ((int)uVar2 != 0x2351) goto LAB_100296184;
  if (*(char *)(param_1 + 0x6068) == '\0') {
    if (*(long **)(param_1 + 0xca8) != (long *)0x0) {
      *(undefined1 *)(param_1 + 0x6068) = 1;
      iVar1 = (**(code **)(**(long **)(param_1 + 0xca8) + 0x10))();
      cVar3 = iVar1 != 0x7374726d;
      *(char *)(param_1 + 0x6069) = cVar3;
      goto LAB_1002960fe;
    }
    uVar2 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar2,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "connectionData->dataHandler != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar3 = *(char *)(param_1 + 0x6069);
LAB_1002960fe:
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x606a) = 1;
      do {
        FUN_1001ee7b6(100);
        uVar2 = (**(code **)(**(long **)(param_1 + 0xca8) + 0x1a8))();
        if ((int)uVar2 != 0) break;
        if (*(char *)(param_1 + 0x606b) != '\0') {
          uVar2 = 0x2351;
          break;
        }
        uVar2 = (**(code **)(**(long **)(param_1 + 0xca8) + 0xa8))
                          (*(long **)(param_1 + 0xca8),param_2,param_3);
      } while ((int)uVar2 == 0x2351);
      *(undefined1 *)(param_1 + 0x606a) = 0;
      goto LAB_100296184;
    }
  }
  uVar2 = 0x2351;
LAB_100296184:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

