// name: FUN_1003cf9aa
// address: 1003cf9aa

undefined1 * FUN_1003cf9aa(long param_1,int param_2,long param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "ustrFile != nullptr";
LAB_1003cfad6:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_3 != 0) {
      FUN_1001e1c39(param_1,param_3);
      if (param_2 == 0x41494643) {
        pcVar4 = ".aifc";
      }
      else if (param_2 == 0x57415645) {
        pcVar4 = ".wav";
      }
      else {
        puVar2 = &DAT_ffffff30;
        if (param_2 != 0x41494646) goto LAB_1003cfa99;
        pcVar4 = ".aiff";
      }
      FUN_1001e26e1(pcVar4,param_3);
      puVar2 = (undefined1 *)0x0;
      goto LAB_1003cfa99;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "ustrOutputFile != nullptr";
      goto LAB_1003cfad6;
    }
  }
  FUN_1001782e9(0,0);
  puVar2 = (undefined1 *)0xffffffce;
LAB_1003cfa99:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

