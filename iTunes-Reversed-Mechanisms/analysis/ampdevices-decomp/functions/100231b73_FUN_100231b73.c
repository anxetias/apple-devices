// name: FUN_100231b73
// address: 100231b73

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100231b73(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint *param_5)

{
  ulong uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 local_270;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar10 = (*(ulong *)(param_1 + 0x6b28) | *(ulong *)(param_1 + 0x6b20)) & 0xffffffffebfffff0;
  if (param_2 < 0x6d656d6f) {
    if ((param_2 != 0x636f7079) && (param_2 != 0x696d7074)) goto LAB_100231f3d;
LAB_100231c03:
    bVar12 = *(long *)(param_1 + 0x16688) == 0;
    iVar5 = 0x110e0015;
LAB_100231c15:
    iVar4 = 0x110e0001;
    if (bVar12) {
      iVar4 = iVar5;
    }
  }
  else if (param_2 == 0x6d656d6f) {
    iVar4 = (uint)(*(char *)(param_1 + 0x396) == '\0') * 2 + 0x110e004d;
  }
  else {
    if ((param_2 == 0x72647068) || (param_2 == 0x6f707470)) goto LAB_100231c03;
LAB_100231f3d:
    if (uVar10 == 0x40000000) {
      iVar4 = 0x110e004d;
    }
    else if (uVar10 == 0x1000000) {
      iVar4 = 0x110e0046;
    }
    else if (uVar10 == 0x80000) {
      iVar4 = 0x110e001e;
    }
    else {
      iVar4 = 0x110e0001;
      if ((*(char *)(param_1 + 0x151d0) == '\0') && (*(char *)(param_1 + 0x6acf) == '\0')) {
        bVar12 = *(int *)(param_1 + 0x6b0c) == 0;
        iVar5 = 0x8f0003;
        goto LAB_100231c15;
      }
    }
  }
  local_278 = param_4;
  local_270 = param_3;
  FUN_1001c334a(local_268,iVar4);
  FUN_1004f0e83(param_1,local_238);
  FUN_1001b8dfc(local_258,local_238);
  FUN_1001bbec4(local_248,local_268,local_258);
  FUN_1001b80b2(local_270,local_248);
  FUN_1001b7a50(local_248);
  FUN_1001b7a50(local_258);
  uVar3 = FUN_1001b7a50(local_268);
  auVar13._0_4_ = -(uint)(param_2 == _DAT_100718f30);
  auVar13._4_4_ = -(uint)(*(int *)(param_1 + 0x69c0) == _UNK_100718f34);
  auVar13._8_4_ = -(uint)(param_2 == s_nterratsNSt3__110__function6__fu_100718f38._0_4_);
  auVar13._12_4_ = -(uint)(param_2 == s_nterratsNSt3__110__function6__fu_100718f38._4_4_);
  iVar4 = movmskps(uVar3,auVar13);
  if (((((iVar4 == 0) && (param_2 != 0x66696e69)) && (param_2 != 0x63616e63)) &&
      ((param_2 != 0x72657374 && (uVar10 != 0x80000)))) &&
     ((uVar10 != 0x40000000 && (uVar10 != 0x1000000)))) {
    FUN_1001c334a(local_248,0x110e001d);
    FUN_1001b8e86(local_268,*(undefined4 *)(param_1 + 0x69bc),1);
    FUN_1001b8e86(local_258,*(undefined4 *)(param_1 + 0x69c0),1);
    uVar7 = local_270;
    FUN_1001bc048(local_238,local_248,local_270,local_268,local_258);
    FUN_1001b80b2(uVar7,local_238);
    FUN_1001b7a50(local_238);
    FUN_1001b7a50(local_258);
    FUN_1001b7a50(local_268);
    FUN_1001b7a50(local_248);
  }
  uVar11 = *(ulong *)(param_1 + 0x6b28);
  uVar1 = *(ulong *)(param_1 + 0x6b20);
  FUN_1001b7a44(local_258);
  uVar11 = (uVar11 | uVar1) & 0xffffffffebfffff0;
  if (param_2 < 0x70616972) {
    if (param_2 < 0x64656c61) {
      if (param_2 < 0x63616e75) {
        if (param_2 < 0x626d726b) {
          if (param_2 != 0x616e7074) {
            if (param_2 == 0x626b7570) {
              iVar4 = 0x110e0046;
LAB_100232227:
              if (uVar11 != 0x1000000) goto LAB_100232347;
            }
            goto LAB_100232372;
          }
          iVar4 = 0x110e0033;
        }
        else if (param_2 == 0x626d726b) {
          iVar4 = 0x110e0040;
        }
        else {
          if (param_2 != 0x63616c6e) {
            if (param_2 == 0x63616e63) {
              iVar4 = 0x110e002a;
              goto LAB_100232227;
            }
            goto LAB_100232372;
          }
          iVar4 = 0x110e003e;
        }
      }
      else if (param_2 < 0x636f7079) {
        if (param_2 == 0x63616e75) {
          iVar4 = 0x110e0059;
        }
        else {
          if (param_2 != 0x636f6e74) goto LAB_100232372;
          iVar4 = 0x110e003d;
        }
      }
      else if (param_2 == 0x636f7079) {
        bVar12 = *(int *)(param_1 + 0x67b0) == 0;
        iVar4 = 0x110e003b;
LAB_10023221a:
        iVar4 = iVar4 - (uint)bVar12;
      }
      else if (param_2 == 0x6370636c) {
        iVar4 = 0x110e0048;
      }
      else {
        if (param_2 != 0x6374636c) goto LAB_100232372;
        iVar4 = 0x110e003f;
      }
    }
    else if (param_2 < 0x66707572) {
      if (param_2 < 0x646c6376) {
        if (param_2 == 0x64656c61) {
          iVar4 = 0x110e0035;
        }
        else {
          if (param_2 != 0x64656c70) goto LAB_100232372;
          iVar4 = 0x110e0034;
        }
      }
      else {
        if (param_2 != 0x646c6376) {
          if (param_2 == 0x66696e69) {
            if ((uVar11 != 0x80000) && (uVar11 != 0x1000000)) {
              iVar4 = 0x110e0029;
              goto LAB_100232330;
            }
          }
          else if (param_2 == 0x66696e75) {
            iVar4 = 0x110e0058;
            goto LAB_100232347;
          }
          goto LAB_100232372;
        }
        iVar4 = 0x110e0037;
      }
    }
    else if (param_2 < 0x6e6f7465) {
      if (param_2 == 0x66707572) {
        iVar4 = 0x110e004c;
      }
      else {
        if (param_2 != 0x6d656d6f) goto LAB_100232372;
        iVar4 = (*(char *)(param_1 + 0x396) == '\0') + 0x110e003b;
      }
    }
    else if (param_2 == 0x6e6f7465) {
      iVar4 = 0x110e0041;
    }
    else if (param_2 == 0x6f707461) {
      iVar4 = 0x110e0038;
    }
    else {
      if (param_2 != 0x6f707470) goto LAB_100232372;
      iVar4 = (uint)(*(int *)(param_1 + 0x67b0) != 0) * 3 + 0x110e0036;
    }
LAB_100232347:
    FUN_1001c334a(local_238,iVar4);
    FUN_1001b80b2(local_258,local_238);
    FUN_1001b7a50(local_238);
  }
  else {
    if (param_2 < 0x7362636c) {
      if (param_2 < 0x72636f6e) {
        if (param_2 < 0x70727075) {
          uVar7 = 0x10cc02a1;
          if (param_2 == 0x70616972) {
LAB_1002322fd:
            uVar7 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),uVar7);
            FUN_1001b81f2(local_258,uVar7);
            goto LAB_100232372;
          }
          iVar4 = 0x110e002b;
          if (param_2 != 0x70726570) goto LAB_100232372;
        }
        else if (param_2 == 0x70727075) {
          iVar4 = 0x110e0057;
        }
        else if (param_2 == 0x72626d6b) {
          iVar4 = 0x110e0044;
        }
        else {
          if (param_2 != 0x7263616c) goto LAB_100232372;
          iVar4 = 0x110e0043;
        }
      }
      else if (param_2 < 0x72657374) {
        if (param_2 == 0x72636f6e) {
          iVar4 = 0x110e0042;
        }
        else {
          if (param_2 != 0x72647068) goto LAB_100232372;
          iVar4 = 0x110e0032;
        }
      }
      else {
        if (param_2 == 0x72657374) {
          iVar4 = 0x110e002c;
          goto LAB_100232227;
        }
        if (param_2 == 0x7265746e) {
          cVar2 = FUN_100266cae(*(undefined8 *)(param_1 + 0x66d8));
          uVar7 = 0x10cc029f;
          if (uVar11 == 0x1000000 || cVar2 == '\0') goto LAB_100232319;
          goto LAB_1002322fd;
        }
        if (param_2 != 0x726e6f74) goto LAB_100232372;
        iVar4 = 0x110e0045;
      }
      goto LAB_100232347;
    }
    if (0x7766616c < param_2) {
      if (param_2 < 0x77666d64) {
        if (param_2 == 0x7766616d) {
          iVar4 = 0x110e005d;
        }
        else {
          if (param_2 != 0x7766696e) goto LAB_100232372;
          iVar4 = 0x110e005b;
        }
      }
      else if (param_2 == 0x77666d64) {
        iVar4 = 0x110e005c;
      }
      else if (param_2 == 0x77737461) {
        iVar4 = 0x110e005a;
      }
      else {
        if (param_2 != 0x78666572) goto LAB_100232372;
        iVar4 = 0x110e005e;
      }
      goto LAB_100232347;
    }
    if (param_2 < 0x73746172) {
      if (param_2 == 0x7362636c) {
        iVar4 = 0x110e0049;
        goto LAB_100232347;
      }
      if (param_2 == 0x73706b6d) {
        bVar12 = *(char *)(param_1 + 0x38c) == '\0';
        iVar4 = 0x110e004b;
        goto LAB_10023221a;
      }
    }
    else {
      if (param_2 != 0x73746172) {
        if (param_2 == 0x7472616b) {
          iVar4 = 0x110e002d;
        }
        else {
          if (param_2 != 0x766f6963) goto LAB_100232372;
          iVar4 = 0x110e004b;
        }
        goto LAB_100232347;
      }
LAB_100232319:
      if ((uVar11 != 0x80000) && (uVar11 != 0x1000000)) {
        iVar4 = 0x110e0028;
LAB_100232330:
        if (uVar11 != 0x40000000) goto LAB_100232347;
      }
    }
  }
LAB_100232372:
  cVar2 = FUN_1001b8428(local_258);
  uVar7 = local_278;
  if (cVar2 == '\0') {
    if (((param_2 == 0x636f7079) || (param_2 == 0x6f707470)) || (param_2 == 0x6d656d6f)) {
      if (*(int *)(param_1 + 0x67b0) == 0) goto LAB_1002324a3;
      FUN_1001b8e86(local_248,*(undefined4 *)(param_1 + 0x67ac),1);
      FUN_1001b8e86(local_268,*(undefined4 *)(param_1 + 0x67b0),1);
      FUN_1001bbf68(local_238,local_258,local_248);
      FUN_1001b80b2(local_258,local_238);
      FUN_1001b7a50(local_238);
      FUN_1001b7a50(local_268);
      puVar9 = local_248;
    }
    else {
      FUN_1004f0e83(param_1,local_238);
      FUN_1001b8dfc(local_268,local_238);
      FUN_1001bbec4(local_248,local_258,local_268);
      FUN_1001b80b2(local_258,local_248);
      FUN_1001b7a50(local_248);
      puVar9 = local_268;
    }
    FUN_1001b7a50(puVar9);
  }
LAB_1002324a3:
  FUN_1001b80b2(uVar7,local_258);
  FUN_1001b7a50(local_258);
  if (param_5 == (uint *)0x0) goto LAB_1002327b3;
  *param_5 = 0;
  uVar6 = 0x80;
  uVar8 = 0;
  if (param_2 < 0x6f707470) {
    if (param_2 < 0x64656c61) {
      if (0x63616e74 < param_2) {
        if (param_2 < 0x636f7079) {
          if ((param_2 == 0x63616e75) || (param_2 == 0x636f6e74)) goto LAB_10023279d;
        }
        else if ((param_2 == 0x636f7079) || ((param_2 == 0x6370636c || (param_2 == 0x6374636c))))
        goto LAB_10023279d;
        goto LAB_1002327a3;
      }
      if (param_2 < 0x63616c6e) {
        if (param_2 == 0x626b7570) {
          uVar6 = (uint)(uVar10 != 0x1000000) << 10 | 0x80;
        }
        else if (param_2 != 0x626d726b) goto LAB_1002327a3;
      }
      else if (param_2 != 0x63616c6e) {
        if (param_2 == 0x63616e63) goto LAB_100232717;
        goto LAB_1002327a3;
      }
    }
    else if (param_2 < 0x66707572) {
      if (param_2 < 0x66696e69) {
        if ((param_2 != 0x64656c61) && (param_2 != 0x64656c70)) goto LAB_1002327a3;
      }
      else if (param_2 == 0x66696e69) {
LAB_100232717:
        uVar6 = 0x84;
      }
      else if (param_2 != 0x66696e75) goto LAB_1002327a3;
    }
    else if (param_2 < 0x6d656d6f) {
      if ((param_2 != 0x66707572) && (param_2 != 0x696d7074)) goto LAB_1002327a3;
    }
    else if (param_2 == 0x6d656d6f) {
      uVar6 = 4;
    }
    else if ((param_2 != 0x6e6f7465) && (param_2 != 0x6f707461)) goto LAB_1002327a3;
    goto LAB_10023279d;
  }
  if (param_2 < 0x7265746e) {
    if (param_2 < 0x72626d6b) {
      if (param_2 < 0x70726570) {
        if ((param_2 == 0x6f707470) || (param_2 == 0x70616972)) goto LAB_10023279d;
      }
      else if ((param_2 == 0x70726570) || (param_2 == 0x70727075)) goto LAB_10023279d;
    }
    else if (param_2 < 0x72636f6e) {
      if ((param_2 == 0x72626d6b) || (param_2 == 0x7263616c)) goto LAB_10023279d;
    }
    else {
      if ((param_2 == 0x72636f6e) || (param_2 == 0x72647068)) goto LAB_10023279d;
      if (param_2 == 0x72657374) goto LAB_100232717;
    }
    goto LAB_1002327a3;
  }
  if (param_2 < 0x7766616d) {
    if (param_2 < 0x7362636c) {
      if ((param_2 == 0x7265746e) || (param_2 == 0x726e6f74)) goto LAB_10023279d;
    }
    else if ((param_2 == 0x7362636c) || ((param_2 == 0x73746172 || (param_2 == 0x7472616b)))) {
LAB_10023279d:
      *param_5 = uVar6;
      uVar8 = uVar6;
    }
  }
  else if (param_2 < 0x77666d64) {
    if ((param_2 == 0x7766616d) || (param_2 == 0x7766696e)) goto LAB_10023279d;
  }
  else if ((param_2 == 0x77666d64) || ((param_2 == 0x77737461 || (param_2 == 0x78666572))))
  goto LAB_10023279d;
LAB_1002327a3:
  if (*(char *)(param_1 + 0x6ac9) != '\0') {
    *param_5 = uVar8 | 2;
  }
LAB_1002327b3:
  if (0x5ff < *(ushort *)(param_1 + 100)) {
    FUN_1001b7a44(local_238);
    cVar2 = FUN_1001b8428(uVar7);
    if (cVar2 == '\0') {
      FUN_1001c334a(local_248,0x110e0001);
      FUN_1001b80b2(local_238,local_248);
      FUN_1001b7a50(local_248);
    }
    else {
      FUN_1001b8172(local_238,local_270);
    }
    if (*(int *)(param_1 + 0x69c0) != 0) {
      FUN_1001c334a(local_268,0x110e001d);
      FUN_1001b8e86(local_258,*(undefined4 *)(param_1 + 0x69bc),1);
      FUN_1001b8e86(local_288,*(undefined4 *)(param_1 + 0x69c0),1);
      FUN_1001bc048(local_248,local_268,local_238,local_258,local_288);
      FUN_1001b80b2(local_238,local_248);
      FUN_1001b7a50(local_248);
      FUN_1001b7a50(local_288);
      FUN_1001b7a50(local_258);
      FUN_1001b7a50(local_268);
    }
    cVar2 = FUN_1001b8428(uVar7);
    if (cVar2 == '\0') {
      FUN_1001b7b04(local_248,"\n");
      FUN_1001bbcfe(local_238,local_248);
      FUN_1001b7a50(local_248);
      FUN_1001bbcfe(local_238,uVar7);
    }
    FUN_10017060f(*(undefined8 *)(param_1 + 0x16838));
    uVar7 = FUN_1001b8d0c(local_238);
    *(undefined8 *)(param_1 + 0x16838) = uVar7;
    FUN_1001b7a50(local_238);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

