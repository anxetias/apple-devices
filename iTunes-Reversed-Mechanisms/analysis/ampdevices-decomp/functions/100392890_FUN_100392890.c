// name: FUN_100392890
// address: 100392890

int FUN_100392890(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  short local_448 [256];
  undefined1 local_248 [512];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10017d489(param_2,local_248);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      FUN_1001e222d(local_248,local_448);
      if (local_448[0] == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "extension[0] != 0";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        if (local_448[0] == 0) goto LAB_1003929b5;
      }
      FUN_1001b7b04(local_468,".");
      FUN_1001b8dfc(local_458,local_448);
      FUN_1001b7a5c(&local_48,local_468);
      FUN_1001bbcfe(&local_48,local_458);
      FUN_1001bbcfe(param_1,&local_48);
      FUN_1001b7a50(&local_48);
      FUN_1001b7a50(local_458);
      FUN_1001b7a50(local_468);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
LAB_1003929b5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

