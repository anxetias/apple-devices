// name: FUN_10038eb50
// address: 10038eb50

void FUN_10038eb50(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_100;
  undefined4 local_f8;
  char *local_f4;
  undefined2 local_ec;
  int local_ea;
  undefined1 local_e0 [4];
  undefined4 local_dc;
  undefined1 local_d8 [32];
  uint local_b8;
  char *local_b4;
  undefined2 local_ac;
  int local_aa;
  undefined1 local_98 [112];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_e0[0] = 0;
  local_dc = 0;
  iVar2 = FUN_100179732(1,&local_100);
  if (iVar2 == 0) {
    _memcpy(&local_b8,param_1,0x84);
    FUN_1001c62d9(local_98,0x10);
    local_b8 = ~local_b8;
    FUN_10017983e(local_100,&DAT_100745d70,8);
    FUN_10017983e(local_100,&local_b8,0x68);
    FUN_10017983e(local_100,&DAT_100745d71,6);
    FUN_1001799f1(local_100,local_e0);
    FUN_100179a7b(local_100);
    FUN_1001c631b(local_d8,&local_f8,0x10);
  }
  else {
    if (iVar2 == -0x80) goto LAB_10038ecf6;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_f8 = 0x8220202;
      local_f4 = "Assertion failure";
      local_ec = 0x400;
      local_ea = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_f8,0x12);
    }
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_b8 = 0x8220202;
        local_b4 = "Assertion failure";
        local_ac = 0x400;
        local_aa = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_b8,0x12);
      }
      goto LAB_10038ecf6;
    }
  }
  FUN_1001c631b(&local_f8,(long)param_1 + 0x20,0x10);
LAB_10038ecf6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

