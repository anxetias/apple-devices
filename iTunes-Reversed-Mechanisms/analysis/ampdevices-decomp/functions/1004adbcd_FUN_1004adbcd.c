// name: FUN_1004adbcd
// address: 1004adbcd

undefined1 FUN_1004adbcd(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001e9de0(param_1 + 0x18);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x68);
      while( true ) {
        cVar1 = FUN_1004aa626(puVar5);
        if (cVar1 == '\0') break;
        if (((param_2 == 0) || (*(int *)(puVar5 + 0x24) == param_2)) &&
           (*(int *)(puVar5 + 0x23) - 1U < 4)) {
          uVar4 = 1;
          goto LAB_1004adc60;
        }
        puVar5 = (undefined8 *)*puVar5;
      }
      uVar4 = 0;
LAB_1004adc60:
      FUN_1001e9eb9(param_1 + 0x18);
      goto LAB_1004adc68;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  uVar4 = 0;
LAB_1004adc68:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

