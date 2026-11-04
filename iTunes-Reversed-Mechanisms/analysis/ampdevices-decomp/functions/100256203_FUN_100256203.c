// name: FUN_100256203
// address: 100256203

int FUN_100256203(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 auVar8 [16];
  undefined1 local_69f8 [16];
  undefined8 local_69e8;
  undefined4 local_69dc;
  undefined4 local_69d8;
  undefined4 local_69d4;
  undefined4 local_69d0;
  undefined1 local_69c9;
  undefined4 local_69c8;
  char *local_69c4;
  undefined2 local_69bc;
  int local_69ba;
  undefined4 local_69a8;
  undefined4 uStack_69a4;
  undefined4 uStack_69a0;
  undefined2 local_699c;
  char *local_699a;
  undefined1 local_6790 [556];
  undefined4 local_6564;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined1 local_124 [228];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x10025621b;
  auVar8 = FUN_100108310();
  lVar1 = -auVar8._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1002563c5;
    uVar5 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1002563d5;
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_69a8 = 0x8220202;
      uStack_69a4 = 0x7a0a90;
      uStack_69a0 = 1;
      local_699c = 0x822;
      local_699a = "outDeviceUpdaterFamilyInfo != nullptr";
      *(undefined8 *)((long)&local_38 + lVar1) = 0x10025657e;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_69a8,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1002563e6;
    FUN_1001782e9(0,0);
  }
  else {
    if (auVar8._8_8_ != 0) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100256250;
      lVar4 = FUN_1004de449();
      if (lVar4 == 0) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100256442;
        uVar5 = FUN_1005e9a2c();
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100256454;
        iVar3 = FUN_1005e7c6c(uVar5,param_1 & 0xffffffff,&local_69a8);
        if (iVar3 == -0x80) goto LAB_100256414;
        if (iVar3 == 0) {
          puVar7 = local_6790;
          local_69dc = local_69a8;
          local_69c9 = (undefined1)uStack_69a4;
          local_69d8 = local_6564;
          local_69e8 = local_600;
          local_69d4 = local_5f8;
          local_69d0 = local_5f4;
          goto LAB_1002562d4;
        }
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002564d0;
        uVar5 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002564e0;
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 == '\0') goto LAB_100256414;
        puVar6 = &local_69c8;
        local_69c8 = 0x8220202;
        local_69c4 = "Assertion failure";
        local_69bc = 0x400;
        local_69ba = iVar3;
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100256264;
        FUN_100255ad1(lVar4);
        local_69dc = *(undefined4 *)(lVar4 + 0x66b0);
        uVar5 = *(undefined8 *)(lVar4 + 0x66d8);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x10025627f;
        cVar2 = FUN_1002669ba(uVar5);
        local_69c9 = cVar2 != '\0';
        local_69d8 = *(undefined4 *)(lVar4 + 0x284);
        local_69e8 = *(undefined8 *)(lVar4 + 0x61e8);
        local_69d4 = *(undefined4 *)(lVar4 + 0x61f0);
        local_69d0 = *(undefined4 *)(lVar4 + 0x61f4);
        puVar7 = (undefined1 *)(lVar4 + 0x58);
LAB_1002562d4:
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002562d9;
        _memcpy(local_124,puVar7,0xec);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002562e1;
        uVar5 = FUN_100425f2b(param_1 & 0xffffffff);
        local_69a8 = (undefined4)uVar5;
        uStack_69a4 = (undefined4)((ulong)uVar5 >> 0x20);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002562f7;
        FUN_1001b7eb0(local_69f8,uVar5);
        *(undefined8 *)(&stack0xfffffffffffffff0 + lVar1) = param_4;
        *(long *)(&stack0xffffffffffffffe8 + lVar1) = auVar8._8_8_;
        *(long *)(&stack0xffffffffffffffe0 + lVar1) = param_2;
        *(undefined1 **)(&stack0xffffffffffffffd8 + lVar1) = local_124;
        *(undefined4 *)(&stack0xffffffffffffffd0 + lVar1) = local_69d0;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100256348;
        iVar3 = FUN_100255c63(local_69dc,local_69f8,local_69c9,local_69d8,local_69e8,local_69d4);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100256357;
        FUN_1001b7a50(local_69f8);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100256363;
        FUN_10016d588(&local_69a8);
        if (iVar3 == 0) {
          iVar3 = 0;
          goto LAB_100256414;
        }
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100256371;
        uVar5 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100256381;
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 == '\0') goto LAB_100256414;
        puVar6 = &local_69a8;
        local_69a8 = 0x8220202;
        uStack_69a4 = 0x7a0a90;
        uStack_69a0 = 1;
        local_699c = 0x400;
        local_699a = (char *)CONCAT44(local_699a._4_4_,iVar3);
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x10025652d;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",puVar6,0x12);
      goto LAB_100256414;
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1002563ed;
    uVar5 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1002563fd;
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_69a8 = 0x8220202;
      uStack_69a4 = 0x7a0a90;
      uStack_69a0 = 1;
      local_699c = 0x822;
      local_699a = "outSoftwareVersion != nullptr";
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1002565cf;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_69a8,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x10025640e;
    FUN_1001782e9(0,0);
  }
  iVar3 = -0x32;
LAB_100256414:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar1) = &UNK_1002565d9;
  ___stack_chk_fail();
}

