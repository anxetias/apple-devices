// name: FUN_10030dbe1
// address: 10030dbe1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10030dbe1(long param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined4 local_b8;
  undefined8 uStack_b4;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  code *local_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
LAB_10030dd63:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_b8 = 0x8220202;
      uStack_b4 = "Assertion failure";
      uStack_ac = 0x822;
      uStack_aa = 0xe894;
      uStack_a8 = 0x1007a;
      uStack_a4 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_b8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_b8 = 0x8220202;
        uStack_b4 = "Assertion failure (expected to be true)";
        uStack_ac = 0x822;
        uStack_aa = 0xec03;
        uStack_a8 = 0x1007a;
        uStack_a4 = 0;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_b8,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_10030dd63;
    }
    *(undefined1 *)(param_1 + 0xcb) = 0;
    if ((param_2 & 4) == 0) {
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    local_90 = 0;
    local_70 = 0;
    local_80 = 0;
    lStack_78 = 0;
    local_30 = 0;
    local_a0 = FUN_1002fa778;
    lStack_88 = param_1 + 0xbb;
    local_68 = *(undefined4 *)(param_1 + 0x1ac);
    local_b8 = _DAT_100743990;
    uStack_b4 = (char *)CONCAT44(_UNK_100743998,_UNK_100743994);
    uStack_ac = (undefined2)_UNK_10074399c;
    uStack_aa = (undefined2)((uint)_UNK_10074399c >> 0x10);
    uStack_a8 = 0x1f;
    local_60 = 0x400000000000;
    local_58 = 0;
    local_50 = 0x10000000000000;
    local_48 = 0;
    local_40 = 8;
    local_38 = 0;
    if (lVar1 != 0) {
      local_90 = param_1 + 0xcb;
      local_70 = lVar1 + 0x2480;
      local_80 = lVar1 + 0x1c60;
      lStack_78 = param_1 + 0xe4;
    }
    local_98 = param_1;
    FUN_1002fa9ac(&local_b8,param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_100474865(param_1);
    cVar2 = FUN_100276fe0(uVar4,uVar3);
    if (cVar2 != '\0') {
      FUN_10027666e(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

