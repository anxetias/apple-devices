// name: FUN_100357f30
// address: 100357f30

void FUN_100357f30(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 local_1190;
  undefined8 local_118c;
  short *local_1180;
  undefined1 local_1158 [16];
  undefined1 local_1148 [16];
  undefined1 local_1138 [16];
  undefined4 local_1128;
  char *local_1124;
  undefined2 local_111c;
  int local_111a;
  undefined2 local_1108 [256];
  short local_f08 [260];
  undefined1 local_d00 [8];
  undefined1 local_cf8 [88];
  undefined8 local_ca0;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100357f48;
  lVar7 = FUN_100108310();
  lVar7 = -lVar7;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(long *)(param_1 + 0x2c60) == 0) ||
     ((*(uint *)(param_1 + 0x2be0) & 0x60000) == 0 || (*(uint *)(param_1 + 0x2be0) & 0x20) == 0))
  goto LAB_1003581b7;
  *(undefined8 *)((long)&local_38 + lVar7) = 0x100357f92;
  FUN_1001b7a44(local_1158);
  uVar1 = *(undefined4 *)(param_1 + 0x2c50);
  *(undefined8 *)((long)&local_38 + lVar7) = 0x100357fab;
  cVar4 = FUN_10015b1df(param_1 + 0x2c20,uVar1,local_d00);
  if (cVar4 == '\0') {
LAB_100357fd6:
    lVar12 = 0;
    lVar8 = 0;
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100357fbb;
    lVar8 = FUN_10030252b(local_cf8);
    if (lVar8 == 0) goto LAB_100357fd6;
    if (*(long *)(lVar8 + 8) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar8 + 8) + 0x10);
    }
  }
  local_f08[0] = 0;
  local_1108[0] = 0;
  if (*(int *)(param_1 + 0x84) == 0x646f5069) {
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100358009;
    FUN_1001c62d9(&local_1190,0x38);
    if (lVar12 == 0) {
      local_1190 = 0;
    }
    else {
      local_1190 = *(undefined4 *)(lVar12 + 0x84);
    }
    local_118c = local_ca0;
    local_1180 = local_f08;
    *(undefined8 *)((long)&local_38 + lVar7) = 0x1003580e5;
    iVar5 = FUN_1002fc1ae(param_1,0x74647072);
    if ((iVar5 == -0x80) || (iVar5 == 0)) {
      if ((iVar5 != 0) || (local_f08[0] == 0)) goto LAB_100358131;
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100358108;
      uVar9 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100358110;
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100358120;
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_1128 = 0x8220202;
        local_1124 = "Assertion failure";
        local_111c = 0x400;
        *(undefined8 *)((long)&local_38 + lVar7) = 0x1003583e1;
        local_111a = iVar5;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_1128,0x12);
      }
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100358131;
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
LAB_100358131:
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100358142;
      FUN_1001c34b7(0x8f0003,local_f08);
    }
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100358155;
    FUN_1001bb41a(param_1 + 0x2c78,local_1108);
    uVar9 = *(undefined8 *)(param_1 + 0x2c60);
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100358174;
    FUN_100529281(uVar9,local_f08,local_1108,0,0);
  }
  else if ((lVar12 == 0) || (lVar8 == 0 || *(int *)(lVar12 + 0x84) != 0x646f5069)) {
LAB_10035803f:
    uVar9 = *(undefined8 *)(param_1 + 0x2c60);
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100358052;
    FUN_1001b7a44(&local_1128);
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10035805e;
    FUN_1001b7a44(local_1148);
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10035806a;
    FUN_1001b7a44(local_1138);
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10035808e;
    FUN_10052918c(uVar9,param_1 + 0x2c78,&local_1128,local_1148,local_1138);
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10035809a;
    FUN_1001b7a50(local_1138);
    *(undefined8 *)((long)&local_38 + lVar7) = 0x1003580a6;
    FUN_1001b7a50(local_1148);
    *(undefined8 *)((long)&local_38 + lVar7) = 0x1003580b2;
    FUN_1001b7a50(&local_1128);
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar7) = 0x1003581e5;
    lVar10 = FUN_1002b5390(lVar8);
    if (lVar10 == 0) {
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003581f4;
      uVar11 = FUN_1002b1255(lVar8,0);
      if ((uVar11 & 0x300004) == 0) goto LAB_10035803f;
    }
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100358210;
    FUN_1001c62d9(&local_1190,0x38);
    local_1190 = *(undefined4 *)(lVar12 + 0x84);
    local_118c = local_ca0;
    local_1180 = local_f08;
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100358243;
    iVar5 = FUN_1002fc1ae(lVar12,0x74647072);
    if ((iVar5 == -0x80) || (iVar5 == 0)) {
      if ((iVar5 != 0) || (local_f08[0] == 0)) goto LAB_10035829b;
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100358272;
      uVar9 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10035827a;
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10035828a;
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_1128 = 0x8220202;
        local_1124 = "Assertion failure";
        local_111c = 0x400;
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10035842b;
        local_111a = iVar5;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_1128,0x12);
      }
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10035829b;
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
LAB_10035829b:
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003582ac;
      FUN_1001c334a(local_1148,0x8f000e);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003582bb;
      FUN_10031b262(local_1138,lVar12);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003582d5;
      FUN_1001bbec4(&local_1128,local_1148,local_1138);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003582e8;
      FUN_1001bb41a(&local_1128,local_f08);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003582f4;
      FUN_1001b7a50(&local_1128);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100358300;
      FUN_1001b7a50(local_1138);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10035830c;
      FUN_1001b7a50(local_1148);
    }
    uVar2 = *(uint *)(*(long *)(param_1 + 0x2c60) + 0x828);
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100358324;
    uVar6 = FUN_1002b1255(lVar8,0);
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10035833a;
    FUN_1001bb41a(param_1 + 0x2c78,local_1108);
    uVar3 = *(undefined8 *)(param_1 + 0x2c60);
    uVar9 = *(undefined8 *)(param_1 + 0x2c70);
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100358371;
    FUN_1005293c1(uVar9,uVar3,local_f08,local_1108,uVar6 >> 0x12 & 4 | uVar2 & 0xfffffffb,0);
    if (((*(byte *)(param_1 + 0x2be2) & 2) != 0) && (*(int *)(param_1 + 0x2c50) == 1)) {
      uVar9 = *(undefined8 *)(param_1 + 0x2c60);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100358397;
      FUN_100528e75(uVar9);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x2c60);
  uVar9 = *(undefined8 *)(param_1 + 0x2c70);
  *(undefined8 *)((long)&local_38 + lVar7) = 0x100358188;
  FUN_100528f93(uVar9,uVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x2c60);
  iVar5 = *(int *)(param_1 + 0x84);
  *(undefined8 *)((long)&local_38 + lVar7) = 0x1003581a4;
  FUN_100528074(uVar9,iVar5 != 0x646f5069);
  *(byte *)(param_1 + 0x2be2) = *(byte *)(param_1 + 0x2be2) & 0xf9;
  *(undefined8 *)((long)&local_38 + lVar7) = 0x1003581b7;
  FUN_1001b7a50(local_1158);
LAB_1003581b7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar7) = &UNK_100358435;
    ___stack_chk_fail();
  }
  return;
}

