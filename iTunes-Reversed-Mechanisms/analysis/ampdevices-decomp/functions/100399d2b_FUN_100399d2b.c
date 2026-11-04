// name: FUN_100399d2b
// address: 100399d2b

int FUN_100399d2b(ulong param_1,int *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 local_6c28 [16];
  int *local_6c18;
  long local_6c10;
  long local_6c08;
  undefined4 local_6bfc;
  undefined4 local_6bf8;
  char *local_6bf4;
  undefined2 local_6bec;
  undefined4 local_6bea;
  undefined4 local_6910;
  undefined4 local_67b4;
  undefined1 local_6730;
  long local_6650;
  long local_850;
  undefined1 local_378 [32];
  undefined1 local_358 [256];
  undefined1 local_258 [32];
  undefined2 local_238 [252];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100399d43;
  auVar12 = FUN_100108310();
  lVar3 = -auVar12._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar3) = 0x100399d6d;
  local_6c18 = param_2;
  FUN_1001b7a44(local_6c28);
  local_238[0] = 0;
  local_258[0] = 0;
  local_358[0] = 0;
  local_378[0] = 0;
  local_6bfc = (undefined4)param_1;
  *(undefined8 *)((long)&local_38 + lVar3) = 0x100399d97;
  lVar6 = FUN_1004de449(param_1 & 0xffffffff);
  if (lVar6 == 0) {
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100399e12;
    uVar7 = FUN_1005e9a2c();
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100399e27;
    iVar5 = FUN_1005e7c6c(uVar7,local_6bfc,&local_6bf8);
    uVar11 = local_6bf8;
    if (iVar5 == 0) {
      if (auVar12._8_8_ != (undefined4 *)0x0) {
        *auVar12._8_8_ = local_6910;
      }
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100399ef8;
      FUN_1001e1c39((long)&local_6bea + 2,local_238);
      local_6c10 = local_850;
      local_6c08 = local_6650;
      uVar9 = local_67b4;
    }
    else {
      local_6c08 = 0;
      local_6c10 = 0;
      local_6910 = 0;
      local_6730 = 0;
      uVar11 = 0;
      uVar9 = 0;
    }
    lVar10 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(lVar6 + 0x284);
    uVar11 = *(undefined4 *)(lVar6 + 0x66b0);
    uVar1 = *(undefined1 *)(lVar6 + 0x308);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100399dc6;
    FUN_1005022bb(&local_6bf8,local_6bfc);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100399dd9;
    FUN_1001b80b2(local_6c28,&local_6bf8);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100399de5;
    FUN_1001b7a50(&local_6bf8);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100399df8;
    FUN_1001bb41a(local_6c28,local_238);
    if ((ulong)*(uint *)(lVar6 + 0x61d0) == 0) {
      lVar10 = *(long *)(lVar6 + 0x153a0);
    }
    else {
      lVar10 = (ulong)*(uint *)(lVar6 + 0x61d0) * 1000000;
    }
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100399e71;
    FUN_1001dfbb3(lVar6 + 0x66,local_258,0x20);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100399e89;
    FUN_1001dfbb3(lVar6 + 0x144,local_358,0x100);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100399ea4;
    FUN_1001dfbb3(lVar6 + 0x6230,local_378,0x20);
    local_6c10 = *(long *)(lVar6 + 0x61e8);
    local_6c08 = *(long *)(lVar6 + 1000);
    local_6910 = 0;
    local_6730 = uVar1;
  }
  *(undefined8 *)((long)&local_38 + lVar3) = 0x100399f1c;
  uVar7 = FUN_1005e9a2c();
  *(int **)(&stack0xfffffffffffffff0 + lVar3) = local_6c18;
  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar3) = local_6910;
  *(undefined1 **)(&stack0xffffffffffffffe0 + lVar3) = local_378;
  *(undefined1 **)(&stack0xffffffffffffffd8 + lVar3) = local_358;
  *(undefined1 **)(&stack0xffffffffffffffd0 + lVar3) = local_258;
  *(undefined8 *)((long)&local_38 + lVar3) = 0x100399f6b;
  iVar5 = FUN_1005e943c(uVar7,uVar9,uVar11,local_6730,local_238,lVar10);
  if (iVar5 == -0x80) goto LAB_10039a038;
  if (iVar5 == 0) {
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100399f85;
    lVar6 = FUN_1005e9a2c();
    lVar6 = *(long *)(lVar6 + 0x60);
    if (lVar6 != 0 && *local_6c18 != 0) {
      do {
        if (*(int *)(lVar6 + 0x6884) == *local_6c18) {
          *(undefined4 *)(lVar6 + 0x6888) = local_6bfc;
          if (local_6c10 == 0) goto LAB_10039a16f;
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a086;
          lVar6 = FUN_1005e9a2c();
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 == 0 || *local_6c18 == 0) goto LAB_10039a0bc;
          goto LAB_10039a0a4;
        }
        lVar6 = *(long *)(lVar6 + 0x6878);
      } while (lVar6 != 0);
    }
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100399fc6;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100399fd6;
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    iVar5 = 0x4e35;
    if (cVar4 == '\0') goto LAB_10039a038;
    local_6bea = 0x4e35;
    iVar5 = local_6bea;
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a020;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a030;
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 == '\0') goto LAB_10039a038;
  }
LAB_10039a149:
  local_6bea = iVar5;
  iVar5 = local_6bea;
  local_6bec = 0x400;
  local_6bf4 = "Assertion failure";
  local_6bf8 = 0x8220202;
  *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a15c;
  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_6bf8,0x12);
LAB_10039a038:
  *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a044;
  FUN_1001b7a50(local_6c28);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar3) = &UNK_10039a253;
    ___stack_chk_fail();
  }
  return iVar5;
LAB_10039a0a4:
  if (*(int *)(lVar6 + 0x6884) != *local_6c18) goto code_r0x00010039a0b0;
  *(long *)(lVar6 + 0x63a8) = local_6c10;
LAB_10039a16f:
  if (local_6c08 == 0) {
LAB_10039a220:
    *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a225;
    plVar8 = (long *)FUN_10039a28c();
    pcVar2 = *(code **)(*plVar8 + 0x58);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a22e;
    uVar7 = (*pcVar2)(plVar8);
    iVar5 = 0;
    *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a249;
    FUN_1001c6987(uVar7,0x73757063,local_6bfc,0,0);
    goto LAB_10039a038;
  }
  *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a182;
  lVar6 = FUN_1005e9a2c();
  lVar6 = *(long *)(lVar6 + 0x60);
  if (lVar6 != 0 && *local_6c18 != 0) {
    do {
      if (*(int *)(lVar6 + 0x6884) == *local_6c18) {
        *(long *)(lVar6 + 0x5a8) = local_6c08;
        goto LAB_10039a220;
      }
      lVar6 = *(long *)(lVar6 + 0x6878);
    } while (lVar6 != 0);
  }
  *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a1b9;
  uVar7 = FUN_1001cc310();
  *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a1c9;
  cVar4 = _os_log_type_enabled(uVar7,0x10);
  iVar5 = 0x4e34;
  if (cVar4 == '\0') goto LAB_10039a038;
  local_6bea = 0x4e34;
  iVar5 = local_6bea;
  goto LAB_10039a149;
code_r0x00010039a0b0:
  lVar6 = *(long *)(lVar6 + 0x6878);
  if (lVar6 == 0) goto LAB_10039a0bc;
  goto LAB_10039a0a4;
LAB_10039a0bc:
  *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a0c1;
  uVar7 = FUN_1001cc310();
  *(undefined8 *)((long)&local_38 + lVar3) = 0x10039a0d1;
  cVar4 = _os_log_type_enabled(uVar7,0x10);
  iVar5 = 0x4e33;
  if (cVar4 == '\0') goto LAB_10039a038;
  local_6bea = 0x4e33;
  iVar5 = local_6bea;
  goto LAB_10039a149;
}

