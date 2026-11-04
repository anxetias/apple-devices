// name: FUN_100392b84
// address: 100392b84

void FUN_100392b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_858 [16];
  ushort local_848 [1024];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44();
  iVar2 = FUN_10017dbac(param_2,local_848);
  if (iVar2 == -0x80) goto LAB_100392d67;
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    goto LAB_100392d67;
  }
  if ((ulong)local_848[0] == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "folderPath[0] != 0";
      goto LAB_100392da9;
    }
  }
  else {
    if (local_848[local_848[0]] == 0x2f) {
      local_848[0] = local_848[0] - 1;
    }
    FUN_10032fde1(local_848);
    FUN_1001b8dfc(&local_48,local_848);
    FUN_1001b80b2(param_1,&local_48);
    FUN_1001b7a50(&local_48);
    cVar1 = FUN_1001b8428(param_1);
    if (cVar1 == '\0') {
      FUN_1001b7b04(local_858,"/");
      FUN_1001b7a5c(&local_48,local_858);
      FUN_1001bbcfe(&local_48,param_3);
      FUN_1001bbcfe(param_1,&local_48);
      FUN_1001b7a50(&local_48);
      FUN_1001b7a50(local_858);
      cVar1 = FUN_1001b8428(param_1);
      if (cVar1 == '\0') goto LAB_100392d67;
      uVar3 = FUN_1001cc310();
    }
    else {
      uVar3 = FUN_1001cc310();
    }
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "assetPath.IsEmpty() == false";
LAB_100392da9:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_100392d67:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

