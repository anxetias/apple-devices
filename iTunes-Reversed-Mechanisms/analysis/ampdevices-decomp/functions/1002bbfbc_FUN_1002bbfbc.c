// name: FUN_1002bbfbc
// address: 1002bbfbc

void FUN_1002bbfbc(long param_1,char param_2,byte *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  undefined8 uVar13;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (byte *)0x0) {
    uVar13 = FUN_1001cc310();
    cVar12 = _os_log_type_enabled(uVar13,0x10);
    if (cVar12 != '\0') {
      local_3a = "inLibraryPrefs != nullptr";
LAB_1002bc2e3:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if ((*param_3 < 9) && ((0x116U >> (*param_3 & 0x1f) & 1) != 0)) {
      if (param_2 == '\x02') {
        uVar1 = *(undefined4 *)param_3;
        uVar2 = *(undefined4 *)(param_3 + 4);
        uVar3 = *(undefined4 *)(param_3 + 8);
        uVar4 = *(undefined4 *)(param_3 + 0xc);
        uVar5 = *(undefined4 *)(param_3 + 0x10);
        uVar6 = *(undefined4 *)(param_3 + 0x14);
        uVar7 = *(undefined4 *)(param_3 + 0x18);
        uVar8 = *(undefined4 *)(param_3 + 0x1c);
        uVar9 = *(undefined4 *)(param_3 + 0x24);
        uVar10 = *(undefined4 *)(param_3 + 0x28);
        uVar11 = *(undefined4 *)(param_3 + 0x2c);
        *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_3 + 0x20);
        *(undefined4 *)(param_1 + 0x194) = uVar9;
        *(undefined4 *)(param_1 + 0x198) = uVar10;
        *(undefined4 *)(param_1 + 0x19c) = uVar11;
        *(undefined4 *)(param_1 + 0x180) = uVar5;
        *(undefined4 *)(param_1 + 0x184) = uVar6;
        *(undefined4 *)(param_1 + 0x188) = uVar7;
        *(undefined4 *)(param_1 + 0x18c) = uVar8;
        *(undefined4 *)(param_1 + 0x170) = uVar1;
        *(undefined4 *)(param_1 + 0x174) = uVar2;
        *(undefined4 *)(param_1 + 0x178) = uVar3;
        *(undefined4 *)(param_1 + 0x17c) = uVar4;
        FUN_1001b8172(param_1 + 0x1a0,param_3 + 0x30);
        FUN_1001b8172(param_1 + 0x1b0,param_3 + 0x40);
        FUN_1001a7ad8(param_1 + 0x1c0,param_3 + 0x50);
        uVar1 = *(undefined4 *)(param_3 + 100);
        uVar2 = *(undefined4 *)(param_3 + 0x68);
        uVar3 = *(undefined4 *)(param_3 + 0x6c);
        *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_3 + 0x60);
        *(undefined4 *)(param_1 + 0x1d4) = uVar1;
        *(undefined4 *)(param_1 + 0x1d8) = uVar2;
        *(undefined4 *)(param_1 + 0x1dc) = uVar3;
        FUN_1001b8172(param_1 + 0x1e0,param_3 + 0x70);
        uVar1 = *(undefined4 *)(param_3 + 0x84);
        uVar2 = *(undefined4 *)(param_3 + 0x88);
        uVar3 = *(undefined4 *)(param_3 + 0x8c);
        *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_3 + 0x80);
        *(undefined4 *)(param_1 + 500) = uVar1;
        *(undefined4 *)(param_1 + 0x1f8) = uVar2;
        *(undefined4 *)(param_1 + 0x1fc) = uVar3;
        *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_3 + 0x90);
        FUN_1001b8172(param_1 + 0x208,param_3 + 0x98);
        uVar1 = *(undefined4 *)(param_3 + 0xac);
        uVar2 = *(undefined4 *)(param_3 + 0xb0);
        uVar3 = *(undefined4 *)(param_3 + 0xb4);
        uVar4 = *(undefined4 *)(param_3 + 0xb8);
        uVar5 = *(undefined4 *)(param_3 + 0xbc);
        uVar6 = *(undefined4 *)(param_3 + 0xc0);
        uVar7 = *(undefined4 *)(param_3 + 0xc4);
        *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_3 + 0xa8);
        *(undefined4 *)(param_1 + 0x21c) = uVar1;
        *(undefined4 *)(param_1 + 0x220) = uVar2;
        *(undefined4 *)(param_1 + 0x224) = uVar3;
        *(undefined4 *)(param_1 + 0x228) = uVar4;
        *(undefined4 *)(param_1 + 0x22c) = uVar5;
        *(undefined4 *)(param_1 + 0x230) = uVar6;
        *(undefined4 *)(param_1 + 0x234) = uVar7;
        *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_3 + 200);
        FUN_1001a7ad8(param_1 + 0x240,param_3 + 0xd0);
        FUN_1001b8172(param_1 + 0x250,param_3 + 0xe0);
        FUN_1001a7ad8(param_1 + 0x260,param_3 + 0xf0);
        *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_3 + 0x100);
      }
      else if (param_2 == '\x01') {
        uVar1 = *(undefined4 *)param_3;
        uVar2 = *(undefined4 *)(param_3 + 4);
        uVar3 = *(undefined4 *)(param_3 + 8);
        uVar4 = *(undefined4 *)(param_3 + 0xc);
        uVar5 = *(undefined4 *)(param_3 + 0x10);
        uVar6 = *(undefined4 *)(param_3 + 0x14);
        uVar7 = *(undefined4 *)(param_3 + 0x18);
        uVar8 = *(undefined4 *)(param_3 + 0x1c);
        uVar9 = *(undefined4 *)(param_3 + 0x24);
        uVar10 = *(undefined4 *)(param_3 + 0x28);
        uVar11 = *(undefined4 *)(param_3 + 0x2c);
        *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_3 + 0x20);
        *(undefined4 *)(param_1 + 0x8c) = uVar9;
        *(undefined4 *)(param_1 + 0x90) = uVar10;
        *(undefined4 *)(param_1 + 0x94) = uVar11;
        *(undefined4 *)(param_1 + 0x78) = uVar5;
        *(undefined4 *)(param_1 + 0x7c) = uVar6;
        *(undefined4 *)(param_1 + 0x80) = uVar7;
        *(undefined4 *)(param_1 + 0x84) = uVar8;
        *(undefined4 *)(param_1 + 0x68) = uVar1;
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
        *(undefined4 *)(param_1 + 0x70) = uVar3;
        *(undefined4 *)(param_1 + 0x74) = uVar4;
        FUN_1001b8172(param_1 + 0x98,param_3 + 0x30);
        FUN_1001b8172(param_1 + 0xa8,param_3 + 0x40);
        FUN_1001a7ad8(param_1 + 0xb8,param_3 + 0x50);
        uVar1 = *(undefined4 *)(param_3 + 100);
        uVar2 = *(undefined4 *)(param_3 + 0x68);
        uVar3 = *(undefined4 *)(param_3 + 0x6c);
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_3 + 0x60);
        *(undefined4 *)(param_1 + 0xcc) = uVar1;
        *(undefined4 *)(param_1 + 0xd0) = uVar2;
        *(undefined4 *)(param_1 + 0xd4) = uVar3;
        FUN_1001b8172(param_1 + 0xd8,param_3 + 0x70);
        uVar1 = *(undefined4 *)(param_3 + 0x84);
        uVar2 = *(undefined4 *)(param_3 + 0x88);
        uVar3 = *(undefined4 *)(param_3 + 0x8c);
        *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_3 + 0x80);
        *(undefined4 *)(param_1 + 0xec) = uVar1;
        *(undefined4 *)(param_1 + 0xf0) = uVar2;
        *(undefined4 *)(param_1 + 0xf4) = uVar3;
        *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_3 + 0x90);
        FUN_1001b8172(param_1 + 0x100,param_3 + 0x98);
        uVar1 = *(undefined4 *)(param_3 + 0xac);
        uVar2 = *(undefined4 *)(param_3 + 0xb0);
        uVar3 = *(undefined4 *)(param_3 + 0xb4);
        uVar4 = *(undefined4 *)(param_3 + 0xb8);
        uVar5 = *(undefined4 *)(param_3 + 0xbc);
        uVar6 = *(undefined4 *)(param_3 + 0xc0);
        uVar7 = *(undefined4 *)(param_3 + 0xc4);
        *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_3 + 0xa8);
        *(undefined4 *)(param_1 + 0x114) = uVar1;
        *(undefined4 *)(param_1 + 0x118) = uVar2;
        *(undefined4 *)(param_1 + 0x11c) = uVar3;
        *(undefined4 *)(param_1 + 0x120) = uVar4;
        *(undefined4 *)(param_1 + 0x124) = uVar5;
        *(undefined4 *)(param_1 + 0x128) = uVar6;
        *(undefined4 *)(param_1 + 300) = uVar7;
        *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_3 + 200);
        FUN_1001a7ad8(param_1 + 0x138,param_3 + 0xd0);
        FUN_1001b8172(param_1 + 0x148,param_3 + 0xe0);
        FUN_1001a7ad8(param_1 + 0x158,param_3 + 0xf0);
        *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_3 + 0x100);
      }
      goto LAB_1002bc2a4;
    }
    uVar13 = FUN_1001cc310();
    cVar12 = _os_log_type_enabled(uVar13,0x10);
    if (cVar12 != '\0') {
      local_3a = "IsDiscreteMediaDomain(inLibraryPrefs->mediaDomain)";
      goto LAB_1002bc2e3;
    }
  }
  FUN_1001782e9(0,0);
LAB_1002bc2a4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

