// name: FUN_10050d4a6
// address: 10050d4a6

undefined8 FUN_10050d4a6(int param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004de449(param_3);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    FUN_1004e17a4(lVar2);
    if (param_1 == 0x636c7220) {
      *(undefined8 *)(lVar2 + 0x30) = 0;
      uVar3 = 0;
      FUN_1004fa8e8(lVar2,0);
      FUN_1004e3ed9(lVar2);
      FUN_1004e1e68(lVar2);
    }
    else if (param_1 == 0x6e756c6c) {
      uVar3 = 0;
      if ((*(char *)(lVar2 + 0x6ad9) != '\0') && (*(long *)(lVar2 + 0x30) != 0)) {
        FUN_100232adb(lVar2);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xfffffffc;
      if (param_1 == 0x696e6974) {
        *(undefined8 *)(lVar2 + 0x10) = *param_2;
        *(undefined8 *)(lVar2 + 0x18) = param_2[1];
        *(undefined8 *)(lVar2 + 0x30) = param_2[2];
        param_2[3] = (ulong)*(uint *)(lVar2 + 0x28);
        uVar3 = 0;
      }
    }
    FUN_1004e1e68(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

