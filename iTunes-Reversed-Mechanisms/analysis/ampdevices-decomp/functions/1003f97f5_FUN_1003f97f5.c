// name: FUN_1003f97f5
// address: 1003f97f5

int FUN_1003f97f5(void *param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined4 local_14c;
  undefined1 local_147 [31];
  uint local_128;
  char *local_124;
  undefined2 local_11c;
  int local_11a;
  undefined1 local_110 [224];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_150[0] = 0;
  local_14c = 0;
  iVar2 = FUN_100179732(1,&local_158);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      _memcpy(&local_128,param_1,0xf4);
      FUN_1001c62d9(local_110,8);
      local_128 = ~local_128;
      if (param_2 == '\0') {
        puVar4 = &DAT_100747e80;
      }
      else {
        puVar4 = &DAT_100747e60;
      }
      FUN_10017983e(local_158,puVar4,0x20);
      FUN_10017983e(local_158,&local_128,0x68);
      FUN_10017983e(local_158,puVar4,0x1e);
      FUN_1001799f1(local_158,local_150);
      FUN_100179a7b(local_158);
      FUN_1001c631b(local_147,param_3,8);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_128 = 0x8220202;
        local_124 = "Assertion failure";
        local_11c = 0x400;
        local_11a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_128,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

