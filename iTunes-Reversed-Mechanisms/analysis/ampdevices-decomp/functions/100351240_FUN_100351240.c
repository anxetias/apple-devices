// name: FUN_100351240
// address: 100351240

undefined8 FUN_100351240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_100242590();
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x26f2;
      uStack_38 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 1;
  }
  else {
    lVar4 = FUN_100242590(param_2);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x2707;
        uStack_38 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      uVar5 = 0xffffffff;
    }
    else {
      lVar1 = *(long *)(lVar3 + 0x40);
      if (lVar1 != *(long *)(lVar4 + 0x40)) {
        uVar5 = FUN_100351018(lVar1,*(long *)(lVar4 + 0x40),param_3,lVar3,lVar4);
        if ((int)uVar5 != 0) goto LAB_10035132e;
      }
      FUN_1001c62d9(&local_48,0x18);
      local_48 = 0x61736370;
      local_40 = (undefined4)lVar1;
      uStack_3c = (undefined2)((ulong)lVar1 >> 0x20);
      uStack_3a = (undefined2)((ulong)lVar1 >> 0x30);
      uVar5 = FUN_10055f58b(lVar3,lVar4);
    }
  }
LAB_10035132e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

