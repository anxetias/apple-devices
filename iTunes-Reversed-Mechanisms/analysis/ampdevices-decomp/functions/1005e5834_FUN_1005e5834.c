// name: FUN_1005e5834
// address: 1005e5834

void FUN_1005e5834(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 *local_70;
  undefined4 *local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = *(long *)(param_1 + 200);
  uVar4 = 0;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if ((*(byte *)(lVar2 + 0xc5) & 0x10) != 0) {
    lVar2 = FUN_1005e3e6c(param_1,lVar2);
  }
  local_a0 = &local_98;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = &local_80;
  local_80 = 0;
  uStack_78 = 0;
  if (lVar2 == 0) {
    uStack_90._0_4_ = 0;
  }
  else {
    local_70 = param_3;
    local_68 = param_2;
    do {
      local_60 = *(long *)(lVar2 + 0x28);
      if (local_60 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be not NULL)";
          local_4c = 0x822;
          local_4a = "albumInfo";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = FUN_1001782e9(0,0);
        if (cVar1 != '\0') goto LAB_1005e58f0;
      }
      else {
LAB_1005e58f0:
        FUN_1002b7e7c(&local_a0,&local_60,&local_60);
        cVar1 = FUN_1003a30de(local_60);
        if (cVar1 == '\0') {
          FUN_1002b7e7c(&local_88,&local_60,&local_60);
        }
      }
      lVar2 = FUN_1005e3e6c();
    } while (lVar2 != 0);
    param_2 = local_68;
    param_3 = local_70;
    uVar4 = (undefined4)uStack_78;
  }
  *param_2 = (undefined4)uStack_90;
  *param_3 = uVar4;
  FUN_1002a41f4(&local_88,local_80);
  FUN_1002a41f4(&local_a0,local_98);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

