// name: FUN_1002052ee
// address: 1002052ee

void FUN_1002052ee(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [1056];
  long local_78 [4];
  long *local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_100416f20(param_2,0x10cc0228);
  FUN_1001b7eb0(local_4d8,uVar3);
  uVar3 = FUN_100416f20(param_2,0x10cc0229);
  FUN_1001b7eb0(local_4c8,uVar3);
  FUN_1004fda52(local_4b8,param_1);
  FUN_1001c334a(local_4a8,0x10cf002b);
  FUN_1001c334a(local_498,0x5db30004);
  local_58 = (long *)0x0;
  sVar2 = FUN_10044fcd7(local_4d8,local_4c8,local_4a8,local_498,local_4b8,local_78);
  if (local_58 == local_78) {
    lVar4 = 0x20;
LAB_1002053d1:
    (**(code **)(*local_58 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_58 != (long *)0x0) goto LAB_1002053d1;
  }
  FUN_1001b7a50(local_498);
  if (sVar2 != 1) goto LAB_1002054b7;
  lVar4 = FUN_100166c1b(param_3,&cf_BackupPath);
  if (lVar4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "backupPath != nullptr";
LAB_100205531:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar4 = FUN_10017454a(DAT_1008c4d90,lVar4,0,1);
    if (lVar4 != 0) {
      cVar1 = FUN_10016ffd2(lVar4,local_498,0);
      if (cVar1 != '\0') {
        FUN_100182d59(local_498,1);
      }
      FUN_10017060f(lVar4);
      goto LAB_1002054b7;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "backupURL != nullptr";
      goto LAB_100205531;
    }
  }
  FUN_1001782e9(0,0);
LAB_1002054b7:
  FUN_10017060f(param_3);
  FUN_1001b7a50(local_4a8);
  FUN_1001b7a50(local_4b8);
  FUN_1001b7a50(local_4c8);
  FUN_1001b7a50(local_4d8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

