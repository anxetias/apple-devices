// name: FUN_10022a968
// address: 10022a968

int FUN_10022a968(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  if (param_2 == 0x7570726d) {
    iVar3 = FUN_1001e9de0(lVar1 + 0x10);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    *(undefined8 *)(lVar1 + 0x58) = param_3;
    *(undefined8 *)(lVar1 + 0x60) = param_4;
    iVar3 = FUN_1001e9eb9(lVar1 + 0x10);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (*(byte *)(lVar1 + 0x69) ^ 1) * 0x80 + -0x80;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

