// name: FUN_1005caf87
// address: 1005caf87

void FUN_1005caf87(undefined8 param_1,long param_2,byte *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 uVar15;
  byte *pbVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  byte bVar21;
  undefined4 uVar22;
  bool bVar23;
  undefined1 local_4f0 [16];
  long local_4e0;
  long local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined1 local_4c8 [16];
  ulong local_4b8;
  undefined8 local_4b0;
  ulong local_4a8;
  undefined1 local_4a0 [16];
  undefined1 local_490 [16];
  undefined4 local_480 [2];
  undefined1 *local_478;
  long local_470;
  undefined1 *local_468;
  undefined4 *local_460;
  byte *local_458;
  undefined8 local_450 [2];
  long local_440;
  undefined1 local_438 [512];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined2 uStack_22c;
  undefined2 uStack_22a;
  undefined6 local_228;
  undefined2 uStack_222;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_458 = param_3;
  FUN_1001b7a44(local_490);
  FUN_1004f0e83(param_2,&local_238);
  FUN_1001b8dfc(local_480,&local_238);
  local_440 = param_2;
  FUN_1001b80b2(local_490,local_480);
  FUN_1001b7a50(local_480);
  FUN_1001bb41a(local_490,local_438);
  pbVar16 = local_458;
  if (local_458[2] == 1) {
    FUN_1005cd621(param_1,local_440,local_438,local_458 + 0x58,(uint)*local_458 << 6 | 0x10cc000d,
                  0x10cc000e,0x10cc000f,0x10cc002e);
  }
  local_4b0 = param_1;
  if (pbVar16[4] == 1) {
    bVar21 = *pbVar16;
    if (pbVar16[3] == 0) {
      pbVar11 = pbVar16 + 0x88;
      uVar17 = 0x10cc007f;
      if (bVar21 != 0) {
        uVar17 = 0x10cc004b;
      }
      uVar8 = 0x10cc0081;
      if (bVar21 != 0) {
        uVar8 = 0x10cc004c;
      }
      uVar15 = 0x10cc0033;
LAB_1005cb177:
      FUN_1005cd621(param_1,local_440,local_438,pbVar11,uVar17,uVar15,uVar8,0x10cc002e);
      pbVar16 = local_458;
    }
    else {
      uVar9 = 0x10cc0080;
      if (bVar21 != 0) {
        uVar9 = 0x10cc004b;
      }
      uVar22 = 0x10cc0082;
      if (bVar21 != 0) {
        uVar22 = 0x10cc004c;
      }
      FUN_1004c6512(local_450);
      lVar5 = local_440;
      uVar17 = local_450[0];
      lVar19 = *(long *)(pbVar16 + 0x70);
      lVar20 = *(long *)(pbVar16 + 0x78);
      lVar18 = *(long *)(pbVar16 + 0x90);
      lVar4 = *(long *)(pbVar16 + 0x88);
      if (lVar18 == lVar4 && lVar20 == lVar19) {
        local_238 = 1;
        local_230 = SUB84(local_438,0);
        uStack_22c = (undefined2)((ulong)local_438 >> 0x20);
        uStack_22a = (undefined2)((ulong)local_438 >> 0x30);
        FUN_1005cde7e(local_450[0],*(undefined4 *)(local_440 + 0x66b0),uVar9,&local_238,0);
      }
      else {
        local_4b8 = (lVar18 - lVar4 >> 2) * -0x7f01fc07f01fc07f;
        local_4a8 = (lVar20 - lVar19 >> 2) * -0x7f01fc07f01fc07f;
        if (99 < local_4a8) {
          local_4a8 = 100;
        }
        if (99 < local_4b8) {
          local_4b8 = 100;
        }
        local_4e0 = lVar19;
        local_4d8 = lVar20;
        local_4d0 = uVar9;
        local_4cc = uVar22;
        if (lVar18 != lVar4) {
          lVar19 = local_4b8 + (local_4b8 == 0);
          lVar20 = 0;
          do {
            lVar18 = *(long *)(local_458 + 0x88) + lVar20;
            local_238 = 2;
            local_230 = (undefined4)lVar18;
            uStack_22c = (undefined2)((ulong)lVar18 >> 0x20);
            uStack_22a = (undefined2)((ulong)lVar18 >> 0x30);
            local_228 = SUB86(local_438,0);
            uStack_222 = (undefined2)((ulong)local_438 >> 0x30);
            uVar9 = FUN_1005cdfec(lVar5,*(undefined4 *)
                                         (*(long *)(local_458 + 0x88) + 0x200 + lVar20),0x10cc002e);
            FUN_1005cde7e(uVar17,*(undefined4 *)(lVar5 + 0x66b0),uVar9,&local_238,0);
            lVar20 = lVar20 + 0x204;
          } while (lVar19 * 0x204 != lVar20);
        }
        lVar19 = local_440;
        uVar17 = local_450[0];
        if (local_4d8 != local_4e0) {
          lVar20 = local_4a8 + (local_4a8 == 0);
          lVar18 = 0;
          do {
            lVar4 = *(long *)(local_458 + 0x70) + lVar18;
            local_238 = 2;
            local_230 = (undefined4)lVar4;
            uStack_22c = (undefined2)((ulong)lVar4 >> 0x20);
            uStack_22a = (undefined2)((ulong)lVar4 >> 0x30);
            local_228 = SUB86(local_438,0);
            uStack_222 = (undefined2)((ulong)local_438 >> 0x30);
            uVar9 = FUN_1005cdfec(lVar19,*(undefined4 *)
                                          (*(long *)(local_458 + 0x70) + 0x200 + lVar18),0x10cc002e)
            ;
            FUN_1005cde7e(uVar17,*(undefined4 *)(lVar19 + 0x66b0),uVar9,&local_238,0);
            lVar18 = lVar18 + 0x204;
          } while (lVar20 * 0x204 != lVar18);
        }
        uVar17 = local_450[0];
        if (local_4b8 + local_4a8 < 2) {
          local_238 = 1;
          local_230 = SUB84(local_438,0);
          uStack_22c = (undefined2)((ulong)local_438 >> 0x20);
          uStack_22a = (undefined2)((ulong)local_438 >> 0x30);
          FUN_1005cde7e(local_450[0],*(undefined4 *)(local_440 + 0x66b0),local_4d0,&local_238,0);
          param_1 = local_4b0;
        }
        else {
          FUN_1005cde7e(local_450[0],*(undefined4 *)(local_440 + 0x66b0),local_4cc,&local_238,3);
          param_1 = local_4b0;
        }
      }
      FUN_1001b7a44(local_480);
      FUN_1005cd4e3(param_1,uVar17,local_480);
      FUN_1001b7a50(local_480);
      FUN_1004c6565(uVar17);
      pbVar16 = local_458;
    }
  }
  else if (pbVar16[3] != 0) {
    uVar17 = 0x10cc000a;
    if (*pbVar16 != 0) {
      uVar17 = 0x10cc004b;
    }
    pbVar11 = pbVar16 + 0x70;
    uVar8 = (uint)*pbVar16 << 6 | 0x10cc000c;
    uVar15 = 0x10cc000b;
    goto LAB_1005cb177;
  }
  if (pbVar16[5] == 1) {
    uVar17 = 0x10cc001f;
    if (*pbVar16 != 0) {
      uVar17 = 0x10cc004f;
    }
    uVar9 = 0x10cc0021;
    if (*pbVar16 != 0) {
      uVar9 = 0x10cc0050;
    }
    FUN_1005cd621(param_1,local_440,local_438,pbVar16 + 0xa0,uVar17,0x10cc0020,uVar9,0x10cc002e);
  }
  if (pbVar16[6] == 1) {
    uVar17 = 0x10cc0024;
    if (*pbVar16 != 0) {
      uVar17 = 0x10cc0051;
    }
    uVar9 = 0x10cc0026;
    if (*pbVar16 != 0) {
      uVar9 = 0x10cc0052;
    }
    FUN_1005cd621(param_1,local_440,local_438,pbVar16 + 0xb8,uVar17,0x10cc0025,uVar9,0x10cc003c);
  }
  if (pbVar16[7] == 1) {
    uVar17 = 0x10cc0027;
    if (*pbVar16 != 0) {
      uVar17 = 0x10cc0053;
    }
    uVar9 = 0x10cc0029;
    if (*pbVar16 != 0) {
      uVar9 = 0x10cc0054;
    }
    FUN_1005cd621(param_1,local_440,local_438,pbVar16 + 0xd0,uVar17,0x10cc0028,uVar9,0x10cc003d);
  }
  if (pbVar16[8] == 1) {
    uVar17 = 0x10cc002a;
    if (*pbVar16 != 0) {
      uVar17 = 0x10cc0055;
    }
    uVar9 = 0x10cc002c;
    if (*pbVar16 != 0) {
      uVar9 = 0x10cc0056;
    }
    FUN_1005cd621(param_1,local_440,local_438,pbVar16 + 0xe8,uVar17,0x10cc002b,uVar9,0x10cc002e);
  }
  lVar19 = local_440;
  if (pbVar16[0x2e] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(local_440 + 0x66b0),
                           0x10cc029c - (uint)(*(char *)(local_440 + 0x3ac) == '\0'));
    FUN_1001b7eb0(local_480,uVar17);
    FUN_1001bbec4(&local_238,local_480,local_490);
    FUN_1001b7a50(local_480);
    FUN_1001b7a44(local_480);
    FUN_1001b7a44(local_450);
    FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  bVar21 = local_458[0x2f];
  bVar2 = local_458[0x30];
  if (((bVar21 | bVar2) & 1) != 0) {
    FUN_1004c6512(local_450);
    lVar19 = local_440;
    uVar17 = local_450[0];
    bVar21 = bVar21 ^ 1;
    uVar12 = *(long *)(local_458 + 0x108) - *(long *)(local_458 + 0x100);
    if (uVar12 == 0) {
      local_238 = 1;
      local_230 = SUB84(local_438,0);
      uStack_22c = (undefined2)((ulong)local_438 >> 0x20);
      uStack_22a = (undefined2)((ulong)local_438 >> 0x30);
      iVar14 = (uint)bVar21 + (uint)bVar21 * 4 + 0x10cc02ac;
      uVar15 = 0;
    }
    else {
      local_4a8 = CONCAT71(local_4a8._1_7_,bVar21 | bVar2);
      uVar13 = ((long)uVar12 >> 2) * -0x7f01fc07f01fc07f;
      uVar10 = 100;
      if (uVar13 < 100) {
        uVar10 = uVar13;
      }
      puVar1 = (undefined4 *)(local_440 + 0x66b0);
      lVar20 = 0;
      local_4b8 = uVar12;
      do {
        lVar18 = *(long *)(local_458 + 0x100);
        iVar14 = *(int *)(lVar18 + 0x200 + lVar20);
        if (iVar14 == 0x2e) {
          uVar9 = 0x10cc02ad;
        }
        else if (iVar14 == 0x2f) {
          uVar9 = 0x10cc02b2;
        }
        else if (local_4b8 == 0x204) {
          uVar9 = FUN_1005cdef6(local_440,iVar14,0x10cc02b2);
        }
        else {
          uVar9 = FUN_1005cdfec(local_440,iVar14,0x10cc02b2);
        }
        lVar18 = lVar18 + lVar20;
        local_238 = 2;
        local_230 = (undefined4)lVar18;
        uStack_22c = (undefined2)((ulong)lVar18 >> 0x20);
        uStack_22a = (undefined2)((ulong)lVar18 >> 0x30);
        local_228 = SUB86(local_438,0);
        uStack_222 = (undefined2)((ulong)local_438 >> 0x30);
        FUN_1005cde7e(uVar17,*puVar1,uVar9,&local_238,0);
        lVar20 = lVar20 + 0x204;
      } while ((uVar10 + (uVar10 == 0)) * 0x204 != lVar20);
      if (local_4b8 == 0x204) {
        local_238 = 1;
        local_230 = SUB84(local_438,0);
        uStack_22c = (undefined2)((ulong)local_438 >> 0x20);
        uStack_22a = (undefined2)((ulong)local_438 >> 0x30);
        iVar14 = ((byte)local_4a8 & 1) * 5 + 0x10cc02ac;
        uVar15 = 0;
      }
      else {
        iVar14 = ((byte)local_4a8 & 1) * 5 + 0x10cc02ae;
        uVar15 = 3;
      }
    }
    FUN_1005cde7e(uVar17,*(undefined4 *)(lVar19 + 0x66b0),iVar14,&local_238,uVar15);
    param_1 = local_4b0;
    FUN_1001b7a44(local_480);
    FUN_1005cd4e3(param_1,uVar17,local_480);
    FUN_1001b7a50(local_480);
    FUN_1004c6565(uVar17);
    lVar19 = local_440;
  }
  if (local_458[0x1e] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc0209);
    FUN_1001b7eb0(local_480,uVar17);
    FUN_1001bbec4(&local_238,local_480,local_490);
    FUN_1001b7a50(local_480);
    FUN_1001b7a44(local_480);
    FUN_1001b7a44(local_450);
    FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[9] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc005c);
    FUN_1001b7eb0(local_480,uVar17);
    FUN_1001bbec4(&local_238,local_480,local_490);
    FUN_1001b7a50(local_480);
    FUN_1001b7a44(local_480);
    FUN_1001b7a44(local_450);
    FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[10] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc005e);
    FUN_1001b7eb0(local_480,uVar17);
    FUN_1001bbec4(&local_238,local_480,local_490);
    FUN_1001b7a50(local_480);
    FUN_1001b7a44(local_480);
    FUN_1001b7a44(local_450);
    FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[0xb] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc005d);
    FUN_1001b7eb0(local_480,uVar17);
    FUN_1001bbec4(&local_238,local_480,local_490);
    FUN_1001b7a50(local_480);
    FUN_1001b7a44(local_480);
    FUN_1001b7a44(local_450);
    FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[0xc] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc0062);
    FUN_1001b7eb0(local_480,uVar17);
    FUN_1001bbec4(&local_238,local_480,local_490);
    FUN_1001b7a50(local_480);
    FUN_1001b7a44(local_480);
    FUN_1001b7a44(local_450);
    FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[0xd] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),
                           0x10cc022d - (uint)(*(char *)(lVar19 + 0x346) == '\0'));
    FUN_1001b7eb0(&local_238,uVar17);
    FUN_1001b8e86(local_450,*(undefined4 *)(lVar19 + 0x410),1);
    FUN_1001bbf68(local_480,&local_238,local_490,local_450);
    FUN_1001b7a50(local_450);
    FUN_1001b7a44(local_450);
    FUN_1001b7a44(local_4a0);
    FUN_1005cd433(param_1,local_480,local_450,local_4a0,0xfffffff5);
    FUN_1001b7a50(local_4a0);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[0xe] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc022e);
    FUN_1001b7eb0(&local_238,uVar17);
    FUN_1001b8e86(local_450,*(undefined4 *)(lVar19 + 0x414),1);
    FUN_1001bbf68(local_480,&local_238,local_490,local_450);
    FUN_1001b7a50(local_450);
    FUN_1001b7a44(local_450);
    FUN_1001b7a44(local_4a0);
    FUN_1005cd433(param_1,local_480,local_450,local_4a0,0xfffffff5);
    FUN_1001b7a50(local_4a0);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[0xf] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc0231);
    FUN_1001b7eb0(&local_238,uVar17);
    FUN_1001b8e86(local_450,*(undefined4 *)(lVar19 + 0x418),1);
    FUN_1001bbf68(local_480,&local_238,local_490,local_450);
    FUN_1001b7a50(local_450);
    FUN_1001b7a44(local_450);
    FUN_1001b7a44(local_4a0);
    FUN_1005cd433(param_1,local_480,local_450,local_4a0,0xfffffff5);
    FUN_1001b7a50(local_4a0);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[0x10] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc004a);
    FUN_1001b7eb0(&local_238,uVar17);
    FUN_1001bbec4(local_480,&local_238,local_490);
    FUN_1001b7a44(local_450);
    FUN_1001b7a44(local_4a0);
    FUN_1005cd433(param_1,local_480,local_450,local_4a0,0xfffffff5);
    FUN_1001b7a50(local_4a0);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[0x11] == 1) {
    lVar19 = *(long *)(local_458 + 0x120);
    lVar20 = *(long *)(local_458 + 0x118);
    if (lVar19 == lVar20) {
      uVar17 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar17,0x10);
      if (cVar6 != '\0') {
        local_238 = 0x8220202;
        uStack_234 = 0x7a0a90;
        local_230 = 1;
        uStack_22c = 0x822;
        uStack_22a = 0x2e0;
        local_228 = 0x1007f;
        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      FUN_1004c6512(local_450);
      uVar17 = local_450[0];
      if (lVar19 - lVar20 != 0x204) {
        local_480[0] = 1;
        local_478 = local_438;
        FUN_1005cde7e(local_450[0],*(undefined4 *)(local_440 + 0x66b0),0x10cc026c,local_480,3);
      }
      lVar19 = (lVar19 - lVar20 >> 2) * -0x7f01fc07f01fc07f;
      lVar19 = lVar19 + (ulong)(lVar19 == 0);
      lVar20 = 0;
      do {
        lVar18 = *(long *)(local_458 + 0x118);
        local_470 = lVar18 + lVar20;
        local_480[0] = 4;
        local_478 = local_438;
        local_460 = &local_238;
        local_468 = local_478;
        FUN_1004c5ad0(*(undefined4 *)(lVar18 + 0x200 + lVar20));
        iVar14 = *(int *)(lVar18 + 0x200 + lVar20);
        uVar15 = 0x10cc0271;
        if (iVar14 < -0xd0) {
          switch(iVar14) {
          case -0x17ffbffc:
switchD_1005cc0a3_caseD_e8004004:
            uVar15 = 0x10cc026e;
            break;
          case -0x17ffbffb:
switchD_1005cc0a3_caseD_e8004005:
            uVar15 = 0x10cc026f;
            break;
          case -0x17ffbff8:
            break;
          case -0x17ffbff5:
switchD_1005cc0a3_caseD_e800400b:
            uVar15 = 0x10cc0275;
            break;
          case -0x17ffbff4:
switchD_1005cc0a3_caseD_e800400c:
            uVar15 = 0x10cc0276;
            break;
          case -0x17ffbfee:
switchD_1005cc07e_caseD_ffffffde:
            uVar15 = 0x10cc026d;
            break;
          default:
            if (iVar14 == -0x1b3c) goto switchD_1005cc0a3_caseD_e800400b;
            if (iVar14 == -0x1b3b) goto switchD_1005cc0a3_caseD_e800400c;
          case -0x17ffbffa:
          case -0x17ffbff9:
          case -0x17ffbff7:
          case -0x17ffbff6:
          case -0x17ffbff3:
          case -0x17ffbff2:
          case -0x17ffbff1:
          case -0x17ffbff0:
          case -0x17ffbfef:
switchD_1005cc07e_caseD_ffffffd6:
            uVar15 = 0x10cc0277;
          }
        }
        else if (iVar14 < -0x17) {
          switch(iVar14) {
          case -0x2b:
            break;
          case -0x2a:
          case -0x29:
          case -0x28:
          case -0x27:
          case -0x26:
          case -0x25:
            goto switchD_1005cc07e_caseD_ffffffd6;
          case -0x24:
            uVar15 = 0x10cc0270;
            break;
          case -0x23:
            uVar15 = 0x10cc0274;
            break;
          case -0x22:
            goto switchD_1005cc07e_caseD_ffffffde;
          default:
            if (iVar14 != -0xd0) goto switchD_1005cc07e_caseD_ffffffd6;
            uVar15 = 0x10cc0272;
          }
        }
        else if (iVar14 < -0x13) {
          if (iVar14 != -0x17) {
            if (iVar14 == -0x14) goto switchD_1005cc0a3_caseD_e8004005;
            goto switchD_1005cc07e_caseD_ffffffd6;
          }
        }
        else {
          if (iVar14 == -0x13) goto switchD_1005cc0a3_caseD_e8004004;
          if (iVar14 != 0x234b) goto switchD_1005cc07e_caseD_ffffffd6;
          uVar15 = 0x10cc0273;
        }
        FUN_1005cde7e(uVar17,*(undefined4 *)(local_440 + 0x66b0),uVar15,local_480,0);
        lVar20 = lVar20 + 0x204;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      FUN_1001b7a44(&local_238);
      param_1 = local_4b0;
      FUN_1005cd4e3(local_4b0,uVar17,&local_238);
      FUN_1001b7a50(&local_238);
      FUN_1004c6565(uVar17);
    }
  }
  pbVar16 = local_458;
  if (local_458[0x1b] == 1) {
    FUN_1005cd621(param_1,local_440,local_438,local_458 + 0x148,0x10cc0083,0x10cc0085,0x10cc0084,
                  0x10cc0034);
  }
  if (pbVar16[0x1c] == 1) {
    FUN_1005cd621(param_1,local_440,local_438,pbVar16 + 0x160,0x10cc0086,0x10cc0088,0x10cc0087,
                  0x10cc003b);
  }
  if (pbVar16[0x1d] == 1) {
    lVar19 = *(long *)(pbVar16 + 0x180);
    lVar20 = *(long *)(pbVar16 + 0x178);
    if (lVar19 - lVar20 == 0) {
      uVar17 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar17,0x10);
      if (cVar6 != '\0') {
        local_238 = 0x8220202;
        uStack_234 = 0x7a0a90;
        local_230 = 1;
        uStack_22c = 0x822;
        uStack_22a = 0x2e0;
        local_228 = 0x1007f;
        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      FUN_1001782e9(0,0);
      pbVar16 = local_458;
    }
    else {
      FUN_1004c6512(local_450);
      lVar20 = (lVar19 - lVar20 >> 2) * -0x7f01fc07f01fc07f;
      lVar20 = lVar20 + (ulong)(lVar20 == 0);
      lVar19 = 0;
      do {
        lVar18 = *(long *)(local_458 + 0x178);
        local_470 = lVar18 + lVar19;
        local_480[0] = 4;
        local_478 = local_438;
        local_460 = &local_238;
        local_468 = local_478;
        FUN_1004c5ad0(*(undefined4 *)(lVar18 + 0x200 + lVar19));
        iVar14 = *(int *)(lVar18 + 0x200 + lVar19);
        uVar17 = 0x10cc008b;
        if (iVar14 < -0x22) {
          if (iVar14 != -0x2b) {
            if (iVar14 == -0x24) goto LAB_1005cc305;
LAB_1005cc30c:
            uVar17 = 0x10cc008c;
          }
        }
        else if (iVar14 == -0x13) {
LAB_1005cc305:
          uVar17 = 0x10cc008a;
        }
        else if (iVar14 != -0x17) {
          if (iVar14 != -0x22) goto LAB_1005cc30c;
          uVar17 = 0x10cc0089;
        }
        FUN_1005cde7e(local_450[0],*(undefined4 *)(local_440 + 0x66b0),uVar17,local_480,0);
        lVar19 = lVar19 + 0x204;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      FUN_1001b7a44(&local_238);
      param_1 = local_4b0;
      FUN_1005cd4e3(local_4b0,local_450[0],&local_238);
      FUN_1001b7a50(&local_238);
      FUN_1004c6565(local_450[0]);
      pbVar16 = local_458;
    }
  }
  if (pbVar16[0x1f] == 1) {
    FUN_1005cd621(param_1,local_440,local_438,pbVar16 + 400,0x10cc01d4,0x10cc01d6,0x10cc01d5,
                  0x10cc0034);
  }
  if (pbVar16[0x20] == 1) {
    FUN_1005cd621(param_1,local_440,local_438,pbVar16 + 0x1a8,0x10cc01de,0x10cc01e0,0x10cc01df,
                  0x10cc003b);
  }
  if (pbVar16[0x21] == 1) {
    FUN_1005cd621(param_1,local_440,local_438,pbVar16 + 0x1c0,0x10cc01da,0x10cc01db,0x10cc01db,
                  0x10cc0038);
  }
  if (pbVar16[0x22] == 1) {
    FUN_1005cd830(param_1,local_440,local_438,0x10cc01f6,pbVar16 + 0x1d8);
  }
  if (pbVar16[0x23] == 1) {
    FUN_1005cd830(param_1,local_440,local_438,0x10cc01f9,pbVar16 + 0x1f0);
  }
  pbVar16 = local_458;
  if (*(char *)(local_440 + 0x37f) == '\0') {
    if (local_458[0x27] == 1) {
      uVar9 = *(undefined4 *)(local_440 + 0x66b0);
      uVar17 = FUN_100416f20(uVar9,(*(char *)(local_440 + 0x3a6) == '\0') + 0x10cc0269);
      FUN_1001b7eb0(local_480,uVar17);
      FUN_1001bbec4(&local_238,local_480,local_490);
      FUN_1001b7a50(local_480);
      uVar17 = FUN_100416f20(uVar9,0x10cc0264);
      FUN_1001b7eb0(local_480,uVar17);
      FUN_1001b7a44(local_450);
      FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
      FUN_1001b7a50(local_450);
      FUN_1001b7a50(local_480);
      FUN_1001b7a50(&local_238);
    }
    pbVar16 = local_458;
    if (local_458[0x28] == 1) {
      uVar9 = *(undefined4 *)(local_440 + 0x66b0);
      uVar17 = FUN_100416f20(uVar9,0x10cc026b);
      FUN_1001b7eb0(local_480,uVar17);
      FUN_1001bbec4(&local_238,local_480,local_490);
      FUN_1001b7a50(local_480);
      uVar17 = FUN_100416f20(uVar9,0x10cc0268);
      FUN_1001b7eb0(local_480,uVar17);
      FUN_1001b7a44(local_450);
      FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
      FUN_1001b7a50(local_450);
      FUN_1001b7a50(local_480);
      FUN_1001b7a50(&local_238);
      pbVar16 = local_458;
    }
  }
  else {
    if (local_458[0x29] == 1) {
      FUN_1005cdca8(param_1,*(undefined4 *)(local_440 + 0x66b0),local_490,0x10cc0251,0x10cc0252);
    }
    if (pbVar16[0x2a] == 1) {
      FUN_1005cdca8(param_1,*(undefined4 *)(local_440 + 0x66b0),local_490,0x10cc0253,0x10cc0254);
    }
    if (pbVar16[0x2b] == 1) {
      FUN_1005cdca8(param_1,*(undefined4 *)(local_440 + 0x66b0),local_490,0x10cc0255,0x10cc0256);
    }
    if (pbVar16[0x2c] == 1) {
      bVar23 = *(char *)(local_440 + 0x3a6) == '\0';
      FUN_1005cdca8(param_1,*(undefined4 *)(local_440 + 0x66b0),local_490,
                    bVar23 + 0x10cc0257 + (uint)bVar23,bVar23 + 0x10cc0258 + (uint)bVar23);
    }
    if (pbVar16[0x2d] == 1) {
      FUN_1005cdca8(param_1,*(undefined4 *)(local_440 + 0x66b0),local_490,0x10cc025b,0x10cc025c);
    }
    if (pbVar16[0x24] == 1) {
      FUN_1005cdca8(param_1,*(undefined4 *)(local_440 + 0x66b0),local_490,0x10cc025d,0x10cc025e);
    }
    if (pbVar16[0x25] == 1) {
      FUN_1005cdca8(param_1,*(undefined4 *)(local_440 + 0x66b0),local_490,0x10cc025f,0x10cc0260);
    }
    if (pbVar16[0x26] == 1) {
      FUN_1005cdca8(param_1,*(undefined4 *)(local_440 + 0x66b0),local_490,0x10cc0261,0x10cc0262);
    }
    if (pbVar16[0x27] == 1) {
      bVar23 = *(char *)(local_440 + 0x3a6) == '\0';
      FUN_1005cdca8(param_1,*(undefined4 *)(local_440 + 0x66b0),local_490,
                    bVar23 + 0x10cc0263 + (uint)bVar23,bVar23 + 0x10cc0264 + (uint)bVar23);
    }
    if (pbVar16[0x28] == 1) {
      FUN_1005cdca8(param_1,*(undefined4 *)(local_440 + 0x66b0),local_490,0x10cc0267,0x10cc0268);
    }
  }
  if (pbVar16[0x12] == 1) {
    FUN_1005cd621(param_1,local_440,local_438,pbVar16 + 0x208,0x10cc02ca,0x10cc02cc,0x10cc02cb,
                  0x10cc02cc);
  }
  lVar19 = local_440;
  if (pbVar16[0x13] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(local_440 + 0x66b0),0x10cc0067);
    FUN_1001b7eb0(local_480,uVar17);
    FUN_1001bbec4(&local_238,local_480,local_490);
    FUN_1001b7a50(local_480);
    FUN_1001b7a44(local_480);
    FUN_1001b7a44(local_450);
    FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[0x14] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc0068);
    FUN_1001b7eb0(local_480,uVar17);
    FUN_1001bbec4(&local_238,local_480,local_490);
    FUN_1001b7a50(local_480);
    FUN_1001b7a44(local_480);
    FUN_1001b7a44(local_450);
    FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[0x15] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc006a - (uint)local_458[0x18]);
    FUN_1001b7eb0(local_480,uVar17);
    FUN_1001bbec4(&local_238,local_480,local_490);
    FUN_1001b7a50(local_480);
    FUN_1001b7a44(local_480);
    FUN_1001b7a44(local_450);
    FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[0x16] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc0008);
    FUN_1001b7eb0(local_480,uVar17);
    FUN_1001bbec4(&local_238,local_480,local_490);
    FUN_1001b7a50(local_480);
    FUN_1001b7a44(local_480);
    FUN_1001b7a44(local_450);
    FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if (local_458[0x17] == 1) {
    uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc0009);
    FUN_1001b7eb0(local_480,uVar17);
    FUN_1001bbec4(&local_238,local_480,local_490);
    FUN_1001b7a50(local_480);
    FUN_1001b7a44(local_480);
    FUN_1001b7a44(local_450);
    FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  if ((((*(char *)(lVar19 + 0x35a) != '\0') && (iVar14 = *(int *)(local_458 + 0x44), iVar14 != 0))
      && (iVar14 != -0x15)) &&
     ((iVar14 != -0x26 || ((*(ulong *)(local_440 + 0x6b30) & 0xfffffffffffffffc) == 0x1000000)))) {
    iVar3 = *(int *)(local_440 + 0x66b0);
    if (iVar3 == 0x69506164) {
      uVar7 = 0x10fa;
    }
    else if (iVar3 == 0x69506f74) {
      uVar7 = 0x10f8;
    }
    else {
      if (iVar3 != 0x6950686e) {
        uVar17 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar17,0x10);
        if (cVar6 != '\0') {
          local_238 = 0x8220202;
          uStack_234 = 0x7a0a90;
          local_230 = 1;
          uStack_22c = 0x822;
          uStack_22a = 0x2a1;
          local_228 = 0x1007f;
          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1005cccf4;
      }
      uVar7 = 0x10f9;
    }
    FUN_1005ce214(param_1,local_440,0,uVar7,iVar14,0);
  }
LAB_1005cccf4:
  pbVar16 = local_458;
  if ((*(char *)(local_440 + 0x359) != '\0') && (*(char *)(local_440 + 0x15218) != '\0')) {
    FUN_1005cdd92(param_1,local_440,local_438,0x11090020,*(undefined4 *)(local_458 + 0x4c));
    FUN_1005cdd92(param_1,local_440,local_438,0x11090001,*(undefined4 *)(pbVar16 + 0x34));
    FUN_1005cdd92(param_1,local_440,local_438,0x11090002,*(undefined4 *)(pbVar16 + 0x38));
    FUN_1005cdd92(param_1,local_440,local_438,0x11090004,*(undefined4 *)(pbVar16 + 0x3c));
    FUN_1005cdd92(param_1,local_440,local_438,0x11090010,*(undefined4 *)(pbVar16 + 0x40));
  }
  if (pbVar16[0x1a] == 1) {
    FUN_1005cd621(param_1,local_440,local_438,pbVar16 + 0x130,0x10cc0091,0x10cc0092,0x10cc0093,
                  0x10cc0094);
  }
  if ((*(int *)(pbVar16 + 0x50) + 0x80U & 0xffffff7f) != 0) {
    if (*(int *)(pbVar16 + 0x50) == 0x46d) {
      FUN_1001c334a(local_480,0x10cf0060);
      lVar19 = local_440;
      FUN_10053877e(local_450);
      FUN_1001bbec4(&local_238,local_480,local_450);
      FUN_1001b7a50(local_450);
      FUN_1001b7a50(local_480);
      uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc0222);
      FUN_1001b7eb0(local_480,uVar17);
      FUN_1001b7a44(local_450);
      FUN_1005cd433(param_1,&local_238,local_480,local_450,0xfffffff5);
    }
    else {
      FUN_1001b7a44(&local_238);
      lVar19 = local_440;
      FUN_1001b7a44(local_480);
      FUN_1001b7a44(local_450);
      uVar17 = FUN_100416f20(*(undefined4 *)(lVar19 + 0x66b0),0x10cc0225);
      FUN_1001b7eb0(local_4a0,uVar17);
      FUN_1004c69e6(0,*(undefined4 *)(local_458 + 0x50),0,0,local_480,local_450);
      FUN_1001bbec4(local_4f0,local_4a0,local_490);
      FUN_1001b7a5c(local_4c8,local_4f0);
      FUN_1001bbcfe(local_4c8,local_480);
      FUN_1001b80b2(&local_238,local_4c8);
      FUN_1001b7a50(local_4c8);
      FUN_1001b7a50(local_4f0);
      FUN_1001b7a44(local_4c8);
      FUN_1005cd433(param_1,&local_238,local_450,local_4c8,0xfffffff5);
      FUN_1001b7a50(local_4c8);
      FUN_1001b7a50(local_4a0);
    }
    FUN_1001b7a50(local_450);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(&local_238);
  }
  FUN_1001b7a50(local_490);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

