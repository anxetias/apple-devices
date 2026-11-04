// name: FUN_100639af4
// address: 100639af4

void FUN_100639af4(undefined4 *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined6 uStack_58;
  undefined2 uStack_52;
  undefined4 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = 0x7050;
      uStack_58 = 0x1007f;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_10048bc57(*param_1);
    if (lVar2 != 0) {
      FUN_1001b7a44(&local_68);
      local_48 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_52 = 0;
      puStack_50 = (undefined4 *)0x0;
      if (*(long *)(lVar2 + 0x250) == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "playlist->handlerProc != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
        FUN_1001b7a50(&local_68);
        goto LAB_100639bfd;
      }
      FUN_100314020(lVar2);
      uStack_58 = (undefined6)*(undefined8 *)(param_1 + 2);
      uStack_52 = (undefined2)((ulong)*(undefined8 *)(param_1 + 2) >> 0x30);
      puStack_50 = param_1 + 4;
      local_48 = CONCAT44(local_48._4_4_,param_1[8]);
      FUN_100483f95(lVar2,0x706c6964);
      FUN_1003142ca(lVar2);
      *(undefined4 *)(DAT_1008c76a0 + 0x160c) = 0;
      FUN_1001b7a50(&local_68);
    }
    FUN_100595344(*(undefined8 *)(param_1 + 2));
    FUN_1001c64c1(param_1);
  }
LAB_100639bfd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

