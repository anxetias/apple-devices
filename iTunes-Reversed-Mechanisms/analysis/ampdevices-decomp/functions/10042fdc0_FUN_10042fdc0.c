// name: FUN_10042fdc0
// address: 10042fdc0

long FUN_10042fdc0(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (0 < (int)param_3) {
    uVar4 = 0xb;
    if (*param_2 == '\0') {
      uVar4 = 5;
    }
    if (*param_2 == '\x03') {
      uVar4 = 5;
    }
    if (uVar4 < param_3) {
      param_3 = uVar4;
    }
  }
  lVar2 = FUN_1001c6429((long)(int)param_3 + 0x18);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "tag != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(uint *)(lVar2 + 0xc) = param_3;
    if (0 < (int)param_3) {
      FUN_1001c631b(param_2,lVar2 + 0x12,(long)(int)param_3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

