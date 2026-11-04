// name: FUN_1003b6828
// address: 1003b6828

undefined8 FUN_1003b6828(long param_1,uint param_2,uint *param_3,long param_4,short *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined1 local_b8;
  undefined7 uStack_b7;
  int local_ac;
  char local_a8;
  undefined7 uStack_a7;
  long local_a0;
  short *local_98;
  long local_90;
  uint *local_88;
  char local_7a;
  char local_79;
  char local_78 [4];
  char *local_74;
  undefined2 local_6c;
  char *local_6a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      builtin_strncpy(local_78,"\x02\x02\"\b",4);
      local_74 = "Assertion failure";
      local_6c = 0x822;
      local_6a = "inMetaData != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_78,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
    goto LAB_1003b6efb;
  }
  uVar8 = *param_3;
  uVar9 = (ulong)uVar8;
  psVar6 = (short *)(param_4 + uVar9 * 0x404 + 0x204);
  local_a0 = param_1;
  local_98 = param_5;
  local_88 = param_3;
  iVar2 = FUN_1001cb213(param_1,0xa9746f6f,psVar6);
  local_90 = CONCAT44(local_90._4_4_,param_2);
  if ((iVar2 == 0) && (*psVar6 != 0)) {
    puVar10 = (undefined4 *)(uVar9 * 0x404 + param_4);
    FUN_1001c34b7(0x138a0003,puVar10 + 1);
    *puVar10 = 0x656e6377;
    uVar8 = uVar8 + 1;
    if (uVar8 < param_2) {
      uVar9 = (ulong)uVar8;
      goto LAB_1003b68a6;
    }
LAB_1003b6ed0:
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      builtin_strncpy(local_78,"\x02\x02\"\b",4);
      local_74 = "Assertion failure";
      local_6c = 0x822;
      local_6a = "curNumDetails < inMaxDetails";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_78,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
LAB_1003b68a6:
    psVar6 = (short *)(param_4 + uVar9 * 0x404 + 0x204);
    iVar2 = FUN_1001cb213(local_a0,0xa9656e63,psVar6);
    if ((iVar2 == 0) && (*psVar6 != 0)) {
      puVar10 = (undefined4 *)(uVar9 * 0x404 + param_4);
      FUN_1001c34b7(0x138a0004,puVar10 + 1);
      *puVar10 = 0x656e6362;
      uVar8 = (int)uVar9 + 1;
      if ((uint)local_90 <= uVar8) goto LAB_1003b6ed0;
      uVar9 = (ulong)uVar8;
      uVar7 = (uint)local_90;
    }
    else {
      uVar7 = (uint)local_90;
    }
    psVar6 = (short *)(param_4 + uVar9 * 0x404 + 0x204);
    iVar2 = FUN_1001cb213(local_a0,0x63707274,psVar6);
    if ((iVar2 == 0) && (*psVar6 != 0)) {
      puVar10 = (undefined4 *)(uVar9 * 0x404 + param_4);
      FUN_1001c34b7(0x138a0005,puVar10 + 1);
      *puVar10 = 0x636f7079;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar8;
      if (uVar7 <= uVar8) goto LAB_1003b6ed0;
    }
    if (local_98 != (short *)0x0) {
      psVar6 = (short *)(param_4 + uVar9 * 0x404 + 0x204);
      *psVar6 = 0;
      FUN_1001e1c39(local_98 + 0x140,psVar6);
      if (*psVar6 != 0) {
        puVar10 = (undefined4 *)(uVar9 * 0x404 + param_4);
        FUN_1001c34b7(0x138a0006,puVar10 + 1);
        *puVar10 = 0x70757262;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar8;
        if (uVar7 <= uVar8) goto LAB_1003b6ed0;
      }
    }
    psVar6 = (short *)(param_4 + uVar9 * 0x404 + 0x204);
    *psVar6 = 0;
    lVar4 = FUN_100156d72();
    if (*(char *)(lVar4 + 0x78) == '\x01') {
      lVar4 = FUN_100156d72();
      FUN_1001bb41a(lVar4 + 0x80,psVar6);
    }
    else {
      FUN_1001cb213(local_a0,0x61704944,psVar6);
    }
    if (*psVar6 != 0) {
      puVar10 = (undefined4 *)(uVar9 * 0x404 + param_4);
      FUN_1001c34b7(0x138a0007,puVar10 + 1);
      *puVar10 = 0x61704944;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar8;
      if (uVar7 <= uVar8) goto LAB_1003b6ed0;
    }
    if (local_98 != (short *)0x0) {
      psVar6 = (short *)(param_4 + uVar9 * 0x404 + 0x204);
      *psVar6 = 0;
      FUN_1001e1c39(local_98 + 0x340,psVar6);
      if (*psVar6 != 0) {
        puVar10 = (undefined4 *)(uVar9 * 0x404 + param_4);
        FUN_1001c34b7(0x138a0008,puVar10 + 1);
        *puVar10 = 0x64776e62;
        uVar8 = (int)uVar9 + 1;
        if ((uint)local_90 <= uVar8) goto LAB_1003b6ed0;
        uVar9 = (ulong)uVar8;
      }
      psVar6 = (short *)(param_4 + uVar9 * 0x404 + 0x204);
      *psVar6 = 0;
      FUN_1001e1c39(local_98 + 0x240,psVar6);
      uVar7 = (uint)local_90;
      if (*psVar6 != 0) {
        puVar10 = (undefined4 *)(uVar9 * 0x404 + param_4);
        FUN_1001c34b7(0x138a0007,puVar10 + 1);
        *puVar10 = 0x64774944;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar8;
        if (uVar7 <= uVar8) goto LAB_1003b6ed0;
      }
      if (*(long *)(local_98 + 6) != 0) {
        if (((*(int *)(local_98 + 0x14) < 0) || (0xff < *(uint *)(local_98 + 0x12))) ||
           (*(long *)(local_98 + 10) != 0)) {
          lVar4 = 3;
          if (-1 < *(int *)(local_98 + 0x14)) {
            lVar4 = 2 - (ulong)(*(uint *)(local_98 + 0x12) < 0x100);
          }
          puVar10 = (undefined4 *)(param_4 + uVar9 * 0x404);
          FUN_1001c34b7(0x138a001a,puVar10 + 1);
          uVar7 = (uint)local_90;
          FUN_1001e1b6d(lVar4,param_4 + uVar9 * 0x404 + 0x204);
          *puVar10 = 0x66707672;
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar8;
          if (uVar7 <= uVar8) goto LAB_1003b6ed0;
        }
      }
    }
    local_90 = uVar9 * 0x404;
    local_98 = (short *)(local_90 + param_4 + 0x204);
    *local_98 = 0;
    iVar2 = FUN_1001c955b(local_a0,0x70757264,0,0,&local_b8);
    if (((CONCAT71(uStack_b7,local_b8) != 0 && iVar2 == 0) &&
        (iVar2 = FUN_1001ca7a7(CONCAT71(uStack_b7,local_b8),1,&local_7a,&local_ac), iVar2 == 0)) &&
       (local_ac != 0)) {
      if (local_7a == '\x15') {
        iVar2 = FUN_1001cb82c(local_a0,0x70757264,&local_a8,8,&local_79);
        if ((iVar2 == 0) && (local_79 == '\x01')) {
          _snprintf(local_78,0x40,"%lld",CONCAT71(uStack_a7,local_a8));
          FUN_1001e04f5(local_78,local_98);
        }
      }
      else {
        iVar2 = FUN_1001cb213(local_a0,0x70757264,local_98);
      }
    }
    psVar6 = local_98;
    if ((iVar2 == 0) && (*local_98 != 0)) {
      puVar10 = (undefined4 *)(local_90 + param_4);
      uVar3 = FUN_1001e6b97(local_98);
      FUN_1001e24eb(uVar3,0x12,psVar6);
      FUN_1001c34b7(0x138a001c,puVar10 + 1);
      *puVar10 = 0x70757264;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar8;
      if (uVar7 <= uVar8) goto LAB_1003b6ed0;
    }
    uVar8 = (uint)uVar9;
    iVar2 = FUN_1001cb82c(local_a0,0x68647664,&local_b8,1,&local_a8);
    if ((iVar2 == 0) && (local_a8 != '\0')) {
      lVar4 = uVar9 * 0x404;
      switch(local_b8) {
      case 0:
        uVar5 = 0x138a0023;
        break;
      case 1:
        uVar5 = 0x138a0024;
        break;
      case 2:
        uVar5 = 0x138a0025;
        break;
      case 3:
        uVar5 = 0x138a0026;
        break;
      default:
        *(undefined2 *)(param_4 + lVar4 + 0x204) = 0;
        goto LAB_1003b6ea4;
      }
      FUN_1001c34b7(uVar5);
LAB_1003b6ea4:
      if (*(short *)(param_4 + 0x204 + lVar4) != 0) {
        FUN_1001c34b7(0x138a0022,(undefined4 *)(param_4 + lVar4) + 1);
        *(undefined4 *)(param_4 + lVar4) = 0x7671616c;
        uVar8 = uVar8 + 1;
        if (uVar7 <= uVar8) goto LAB_1003b6ed0;
      }
    }
  }
  *local_88 = uVar8;
  uVar5 = 0;
LAB_1003b6efb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

