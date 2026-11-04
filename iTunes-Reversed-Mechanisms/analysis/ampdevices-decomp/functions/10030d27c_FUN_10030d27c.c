// name: FUN_10030d27c
// address: 10030d27c

int FUN_10030d27c(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_68;
  undefined8 uStack_64;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = (undefined4 *)FUN_1001c6429(0x458);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = "Assertion failure";
      uStack_5c = 0x822;
      uStack_5a = 0xefd1;
      uStack_58 = 0x1007b;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x6c;
  }
  else {
    _memcpy(puVar3 + 0xc,*(void **)(param_1 + 0x80),0x420);
    FUN_10031bcb7(&local_68,param_1);
    puVar3[7] = uStack_4c;
    puVar3[8] = uStack_48;
    puVar3[9] = uStack_44;
    puVar3[10] = uStack_40;
    puVar3[4] = uStack_58;
    puVar3[5] = CONCAT22(uStack_52,uStack_54);
    puVar3[6] = uStack_50;
    puVar3[7] = uStack_4c;
    *puVar3 = local_68;
    puVar3[1] = (undefined4)uStack_64;
    puVar3[2] = uStack_64._4_4_;
    puVar3[3] = CONCAT22(uStack_5a,uStack_5c);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0x20;
    if (*(long *)(param_1 + 8) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
    }
    iVar2 = FUN_10030c87e(uVar4,FUN_100322544,puVar3,0);
    iVar5 = 0;
    if (iVar2 != 0) {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xdf;
      FUN_1001c64c1(puVar3);
      iVar5 = iVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

