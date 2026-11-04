// name: FUN_10045b480
// address: 10045b480

int FUN_10045b480(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_10017d186(param_1,param_2,8,0,0);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      uVar1 = *param_2;
      *param_2 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                 (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                 (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 |
                 uVar1 << 0x38;
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

