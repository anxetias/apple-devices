// name: FUN_1005f69eb
// address: 1005f69eb

ulong FUN_1005f69eb(int param_1,uint param_2,ulong param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = (uint)param_3 & 0xfffffffe;
  uVar3 = param_3 & 0xffffffff;
  if (param_2 == 0x80) {
    uVar3 = (ulong)uVar7;
  }
  uVar9 = 0xffffffce;
  if (9 < param_1 - 1000U) goto switchD_1005f6a4c_caseD_3e9;
  param_3 = param_3 & 0xffffffff;
  switch(param_1) {
  case 1000:
    param_2 = param_2 & 0xff;
    cVar1 = FUN_10053315f(param_2);
    if (cVar1 == '\0') {
      puVar4 = local_458;
      if (param_4 != (undefined1 *)0x0) {
        puVar4 = param_4;
      }
      uVar7 = FUN_100387b5c(0x3e9,param_2,uVar3,puVar4);
    }
    else {
      puVar4 = local_458;
      if (param_4 != (undefined1 *)0x0) {
        puVar4 = param_4;
      }
      uVar7 = FUN_100387b5c(0x3ea,param_2,uVar3,puVar4);
    }
    goto LAB_1005f6bf8;
  case 0x3ea:
    FUN_1001b7a44(local_458);
    uVar7 = FUN_1005331ae(param_2 & 0xff,(byte)(uVar3 >> 1) & 1,param_4,local_458);
    uVar9 = (ulong)uVar7;
    FUN_1001b7a50(local_458);
    break;
  case 0x3ed:
    param_2 = param_2 & 0xff;
    cVar1 = FUN_1003207e0(param_2);
    if (cVar1 == '\0') {
      puVar4 = local_458;
      if (param_4 != (undefined1 *)0x0) {
        puVar4 = param_4;
      }
      uVar7 = FUN_100387b5c(0x3ee,param_2,uVar3,puVar4);
    }
    else {
      puVar4 = local_458;
      if (param_4 != (undefined1 *)0x0) {
        puVar4 = param_4;
      }
      uVar7 = FUN_100387b5c(0x3ef,param_2,uVar3,puVar4);
    }
LAB_1005f6bf8:
    uVar9 = (ulong)uVar7;
    break;
  case 0x3ee:
    uVar8 = param_2 & 0xff;
    uVar9 = 16000;
    if (uVar8 < 8) {
      if (uVar8 - 1 < 2) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          uVar6 = 8;
          uVar5 = 7;
          goto LAB_1005f6b5f;
        }
        goto LAB_1005f6c76;
      }
      if (uVar8 == 4) goto LAB_1005f6c26;
    }
    else if ((uVar8 == 8) || (uVar8 == 0x80)) {
LAB_1005f6c26:
      iVar2 = FUN_1005f6551(1,uVar8,uVar7,param_4);
      if (iVar2 != 0) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          uVar3 = FUN_1005f6551(2,uVar8,uVar7,param_4);
          return uVar3;
        }
        goto LAB_1005f6c76;
      }
      uVar9 = 0;
    }
    break;
  case 0x3ef:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar3 = FUN_10031a150(param_2 & 0xff,param_4,
                            (long)&switchD_1005f6a4c::switchdataD_1005f6c98 +
                            (long)(int)(&switchD_1005f6a4c::switchdataD_1005f6c98)[param_1 - 1000U],
                            param_3);
      return uVar3;
    }
    goto LAB_1005f6c76;
  case 0x3f1:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar6 = 0x10;
      uVar5 = 0xf;
      param_3 = uVar3;
LAB_1005f6b5f:
      uVar3 = FUN_1005f6960(uVar6,uVar5,param_2 & 0xff,param_3,param_4);
      return uVar3;
    }
    goto LAB_1005f6c76;
  }
switchD_1005f6a4c_caseD_3e9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar9;
  }
LAB_1005f6c76:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

