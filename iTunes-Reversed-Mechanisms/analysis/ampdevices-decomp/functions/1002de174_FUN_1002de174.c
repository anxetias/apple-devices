// name: FUN_1002de174
// address: 1002de174

ulong FUN_1002de174(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined *puVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 local_478 [16];
  undefined1 local_468 [20];
  uint local_454;
  long local_450;
  long local_448;
  uint local_440;
  uint local_43c;
  undefined4 local_438;
  undefined4 local_238;
  long local_38;
  
  puVar6 = PTR_cf_podcast_feed_url_100844b30;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_450 = 0;
  local_448 = 0;
  uVar16 = 0xffffffff;
  switch((int)param_3) {
  case 2:
  case 0x4e:
    uVar10 = *(uint *)(param_1 + 0x108);
    if (((uVar10 != 0) && (uVar11 = *(uint *)(param_2 + 0x108), uVar11 != 0)) &&
       (((param_4 & 0x24) == 0 && (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10))))) {
LAB_1002deb72:
      bVar17 = uVar10 < uVar11;
      bVar18 = uVar10 == uVar11;
      goto LAB_1002ded3c;
    }
    if ((param_4 & 4) == 0) {
      FUN_100477006(param_1,&local_450,&local_440);
      FUN_100477006(param_2,&local_448,&local_43c);
    }
    else {
      FUN_100476b40(param_1,&local_450,&local_440);
      FUN_100476b40(param_2,&local_448,&local_43c);
    }
    cVar9 = FUN_1002df7cc(param_1);
    if ((cVar9 == '\0') || (cVar9 = FUN_1002df7cc(param_2), cVar9 == '\0')) {
      uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    }
    else {
      uVar10 = FUN_1002df8d2(local_450,local_440,local_448,local_43c);
    }
    break;
  case 3:
  case 0x4f:
    uVar10 = *(uint *)(param_1 + 0x10c);
    if (((uVar10 == 0) || (uVar11 = *(uint *)(param_2 + 0x10c), uVar11 == 0)) ||
       (((param_4 & 0x24) != 0 || (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10))))) {
      if ((param_4 & 4) == 0) {
        FUN_1004778bb(param_1,&local_450,&local_440);
        FUN_1004778bb(param_2,&local_448,&local_43c);
      }
      else {
        FUN_10047750f(param_1,&local_450,&local_440);
        FUN_10047750f(param_2,&local_448,&local_43c);
      }
      cVar9 = FUN_1002dfa70(param_1);
      if ((cVar9 == '\0') || (cVar9 = FUN_1002dfa70(param_2), cVar9 == '\0')) {
        uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
      }
      else {
        uVar10 = FUN_1002df8d2(local_450,local_440,local_448,local_43c);
      }
      uVar16 = (ulong)uVar10;
    }
    else {
      if (uVar10 < uVar11) goto switchD_1002de1d1_caseD_f;
      uVar16 = (ulong)(uVar10 >= uVar11 && uVar10 != uVar11);
    }
    if ((((int)uVar16 == 0) && (uVar16 = 0, (param_4 >> 8 & 1) == 0)) &&
       (cVar9 = FUN_1002dfb79(), cVar9 != '\0')) {
      if ((*(byte *)(param_1 + 0xc3) & 4) == 0) {
        uVar16 = 0xffffffff;
        if ((*(uint *)(param_2 + 0xc2) >> 10 & 1) == 0) {
          uVar10 = FUN_1002de174(param_1,param_2,4,param_4);
          break;
        }
      }
      else {
        uVar16 = (ulong)((*(uint *)(param_2 + 0xc2) >> 10 & 1) == 0);
      }
    }
    goto switchD_1002de1d1_caseD_f;
  case 4:
  case 0x50:
    uVar10 = *(uint *)(param_1 + 0x110);
    if ((((uVar10 != 0) && (uVar11 = *(uint *)(param_2 + 0x110), uVar11 != 0)) &&
        ((param_4 & 0x24) == 0)) && (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)))
    goto LAB_1002deb72;
    if ((param_4 & 4) == 0) {
      FUN_100477ed1(param_1,&local_450,&local_440);
      FUN_100477ed1(param_2,&local_448,&local_43c);
    }
    else {
      FUN_100477ba5(param_1,&local_450,&local_440);
      FUN_100477ba5(param_2,&local_448,&local_43c);
    }
    cVar9 = FUN_1002dd350(param_1);
    if ((cVar9 == '\0') || (cVar9 = FUN_1002dd350(param_2), cVar9 == '\0')) {
      uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    }
    else {
      uVar10 = FUN_1002df8d2(local_450,local_440,local_448,local_43c);
    }
    break;
  case 5:
  case 6:
  case 10:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x14:
  case 0x20:
  case 0x22:
  case 0x29:
  case 0x3a:
  case 0x77:
  case 0x81:
  case 0x84:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0xa9:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar16 = FUN_1002ddb0d(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58),param_3
                             ,param_4);
      return uVar16;
    }
    goto LAB_1002df490;
  case 7:
    uVar2 = *(ushort *)(param_1 + 0x142);
    uVar3 = *(ushort *)(param_2 + 0x142);
    if ((param_4 & 8) == 0) {
      bVar17 = uVar2 < uVar3;
      bVar18 = uVar2 == uVar3;
      goto LAB_1002ded3c;
    }
    if (uVar2 == uVar3) goto switchD_1002de1d1_caseD_5a;
    if (uVar2 == 0) {
LAB_1002df381:
      uVar16 = 1;
    }
    else if ((ushort)(uVar3 - 1) < uVar2) {
      uVar16 = (ulong)(uVar3 < uVar2);
    }
    goto switchD_1002de1d1_caseD_f;
  case 8:
    uVar10 = *(uint *)(param_1 + 0x114);
    if (((uVar10 != 0) && (uVar11 = *(uint *)(param_2 + 0x114), uVar11 != 0)) &&
       (((param_4 & 0x24) == 0 && (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)))))
    goto LAB_1002deb72;
    FUN_10047a94e(param_1,&local_450,&local_440);
    FUN_10047a94e(param_2,&local_448,&local_43c);
    cVar9 = FUN_1002dfbb5(param_1);
    if ((cVar9 == '\0') || (cVar9 = FUN_1002dfbb5(param_2), cVar9 == '\0')) {
      uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    }
    else {
      uVar10 = FUN_1002df8d2(local_450,local_440,local_448,local_43c);
    }
    break;
  case 9:
    FUN_10047ae3c(param_1,&local_450,&local_440);
    FUN_10047ae3c(param_2,&local_448,&local_43c);
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0xb:
    uVar14 = *(undefined2 *)(param_1 + 0x136);
    uVar4 = *(undefined2 *)(param_2 + 0x136);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar15 = 0;
LAB_1002dea13:
      uVar16 = FUN_1002df995(param_1,param_2,uVar14,uVar4,uVar15);
      return uVar16;
    }
    goto LAB_1002df490;
  case 0xe:
    FUN_10047b7f3(param_1,&local_450,&local_440);
    FUN_10047b7f3(param_2,&local_448,&local_43c);
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0xf:
  case 0x13:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x24:
  case 0x25:
  case 0x28:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x3d:
  case 0x42:
  case 0x43:
  case 0x46:
  case 0x48:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x54:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x82:
  case 0x83:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x9b:
  case 0xa4:
  case 0xa8:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
    goto switchD_1002de1d1_caseD_f;
  case 0x11:
    FUN_10047b4a0(param_1,&local_450,&local_440);
    FUN_10047b4a0(param_2,&local_448,&local_43c);
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0x12:
  case 0x52:
    uVar10 = *(uint *)(param_1 + 0x118);
    if ((((uVar10 != 0) && (uVar11 = *(uint *)(param_2 + 0x118), uVar11 != 0)) &&
        ((param_4 & 0x24) == 0)) && (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)))
    goto LAB_1002deb72;
    if ((param_4 & 4) == 0) {
      FUN_10047a5cd(param_1,&local_450,&local_440);
      FUN_10047a5cd(param_2,&local_448,&local_43c);
    }
    else {
      FUN_10047a26b(param_1,&local_450,&local_440);
      FUN_10047a26b(param_2,&local_448,&local_43c);
    }
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0x15:
    FUN_10047da3f(param_1,&local_450,&local_440);
    FUN_10047da3f(param_2,&local_448,&local_43c);
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0x16:
    bVar17 = *(uint *)(param_1 + 0x144) < *(uint *)(param_2 + 0x144);
    bVar18 = *(uint *)(param_1 + 0x144) == *(uint *)(param_2 + 0x144);
    goto LAB_1002dedd5;
  case 0x17:
    bVar17 = *(uint *)(param_1 + 0x14c) < *(uint *)(param_2 + 0x14c);
    bVar18 = *(uint *)(param_1 + 0x14c) == *(uint *)(param_2 + 0x14c);
    goto LAB_1002dedd5;
  case 0x18:
    uVar14 = *(undefined2 *)(param_1 + 0x13a);
    uVar4 = *(undefined2 *)(param_2 + 0x13a);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar15 = 1;
      goto LAB_1002dea13;
    }
    goto LAB_1002df490;
  case 0x19:
    cVar9 = *(char *)(param_1 + 300);
    cVar1 = *(char *)(param_2 + 300);
    if ((param_4 & 8) == 0) {
      uVar16 = 0xffffffff;
      if (cVar1 <= cVar9) {
        uVar16 = (ulong)(cVar1 < cVar9);
      }
    }
    else {
      if (cVar9 == cVar1) goto switchD_1002de1d1_caseD_5a;
      if (cVar9 == '\0') goto LAB_1002df381;
      if (cVar1 <= cVar9 && cVar1 != '\0') {
        uVar16 = (ulong)(cVar1 < cVar9);
      }
    }
    goto switchD_1002de1d1_caseD_f;
  case 0x1b:
  case 0x49:
    bVar17 = *(uint *)(param_1 + 8) < *(uint *)(param_2 + 8);
    bVar18 = *(uint *)(param_1 + 8) == *(uint *)(param_2 + 8);
    goto LAB_1002dedd5;
  case 0x1f:
    local_238 = local_238 & 0xffff0000;
    if ((*(byte *)(param_1 + 0xc3) & 4) == 0) {
      FUN_100477ed1(param_1,&local_450,&local_440);
    }
    else {
      FUN_1001c34b7(0x800001,&local_238);
      local_450 = (long)&local_238 + 2;
      local_440 = local_238 & 0xffff;
    }
    if ((*(byte *)(param_2 + 0xc3) & 4) == 0) {
      FUN_100477ed1(param_2,&local_448,&local_43c);
    }
    else {
      if ((ushort)local_238 == 0) {
        FUN_1001c34b7(0x800001,&local_238);
      }
      local_448 = (long)&local_238 + 2;
      local_43c = (uint)(ushort)local_238;
    }
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0x21:
    fVar19 = *(float *)(*(long *)(param_1 + 0x70) + 4);
    fVar20 = *(float *)(*(long *)(param_2 + 0x70) + 4);
    goto LAB_1002dec69;
  case 0x23:
    bVar17 = *(ushort *)(param_1 + 0x15c) < *(ushort *)(param_2 + 0x15c);
    bVar18 = *(ushort *)(param_1 + 0x15c) == *(ushort *)(param_2 + 0x15c);
    goto LAB_1002dedd5;
  case 0x26:
    fVar19 = *(float *)(*(long *)(param_1 + 0x70) + 8);
    fVar20 = *(float *)(*(long *)(param_2 + 0x70) + 8);
LAB_1002dec69:
    bVar5 = fVar20 < fVar19;
    bVar17 = fVar20 == fVar19;
    bVar18 = fVar20 < fVar19;
LAB_1002dedab:
    uVar16 = 0xffffffff;
    if (bVar18 || bVar17) {
      uVar16 = (ulong)bVar5;
    }
    goto switchD_1002de1d1_caseD_f;
  case 0x27:
    FUN_100478ba2(param_1,&local_450,&local_440);
    FUN_100478ba2(param_2,&local_448,&local_43c);
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0x36:
    FUN_10047c370(param_1,&local_450,&local_440);
    FUN_10047c370(param_2,&local_448,&local_43c);
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0x37:
    FUN_10047d071(param_1,&local_450,&local_440);
    FUN_10047d071(param_2,&local_448,&local_43c);
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0x3c:
    uVar12 = FUN_100474dd0(param_1,0);
    uVar13 = FUN_100474dd0(param_2,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar16 = FUN_1002dfc7d(uVar12,uVar13,param_4);
      return uVar16;
    }
    goto LAB_1002df490;
  case 0x3e:
  case 0x53:
    if ((param_4 & 4) == 0) {
      FUN_10047e244(param_1,&local_450,&local_440);
      FUN_10047e244(param_2,&local_448,&local_43c);
    }
    else {
      FUN_10047de81(param_1,&local_450,&local_440);
      FUN_10047de81(param_2,&local_448,&local_43c);
    }
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0x3f:
    uVar11 = *(uint *)(*(long *)(param_1 + 0x78) + 0xc);
    uVar10 = *(uint *)(*(long *)(param_2 + 0x78) + 0xc);
    bVar17 = uVar11 < uVar10;
    bVar18 = uVar11 == uVar10;
    goto LAB_1002ded3c;
  case 0x40:
    FUN_10047e91c(param_1,&local_450,&local_440);
    FUN_10047e91c(param_2,&local_448,&local_43c);
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0x41:
    fVar19 = *(float *)(*(long *)(param_1 + 0x78) + 8);
    if ((fVar19 == 0.0) && (!NAN(fVar19))) {
      fVar19 = (float)*(uint *)(*(long *)(param_1 + 0x78) + 4);
    }
    fVar20 = *(float *)(*(long *)(param_2 + 0x78) + 8);
    if ((fVar20 == 0.0) && (!NAN(fVar20))) {
      fVar20 = (float)*(uint *)(*(long *)(param_2 + 0x78) + 4);
    }
    bVar5 = fVar20 < fVar19;
    bVar17 = fVar20 == fVar19;
    bVar18 = fVar20 < fVar19;
    goto LAB_1002dedab;
  case 0x44:
    bVar17 = *(uint *)(param_1 + 0x150) < *(uint *)(param_2 + 0x150);
    bVar18 = *(uint *)(param_1 + 0x150) == *(uint *)(param_2 + 0x150);
    goto LAB_1002dedd5;
  case 0x45:
    bVar17 = *(uint *)(param_1 + 0x158) < *(uint *)(param_2 + 0x158);
    bVar18 = *(uint *)(param_1 + 0x158) == *(uint *)(param_2 + 0x158);
    goto LAB_1002dedd5;
  case 0x47:
  case 0x51:
    uVar10 = *(uint *)(param_1 + 0x11c);
    if (((uVar10 != 0) && (uVar11 = *(uint *)(param_2 + 0x11c), uVar11 != 0)) &&
       (((param_4 & 0x24) == 0 && (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)))))
    goto LAB_1002deb72;
    if ((param_4 & 4) == 0) {
      FUN_10047857c(param_1,&local_450,&local_440);
      FUN_10047857c(param_2,&local_448,&local_43c);
    }
    else {
      FUN_1004781bb(param_1,&local_450,&local_440);
      FUN_1004781bb(param_2,&local_448,&local_43c);
    }
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0x55:
    FUN_10047d1cb(local_478,param_1,PTR_cf_podcast_feed_url_100844b30);
    FUN_10047d1cb(local_468,param_2,puVar6);
    uVar10 = FUN_1002dfc47(local_478,local_468);
    FUN_1001b7a50(local_468);
    FUN_1001b7a50(local_478);
    uVar16 = (ulong)uVar10;
    goto switchD_1002de1d1_caseD_f;
  case 0x59:
    FUN_100475454(param_1,&local_238);
    FUN_100475454(param_2,&local_438);
    uVar10 = FUN_10057b50a(&local_238);
    uVar11 = FUN_10057b50a(&local_438);
    bVar17 = uVar10 < uVar11;
    bVar18 = uVar10 == uVar11;
    goto LAB_1002dedd5;
  case 0x5a:
switchD_1002de1d1_caseD_5a:
    uVar16 = 0;
    goto switchD_1002de1d1_caseD_f;
  case 0x5b:
    uVar10 = FUN_1003186de(param_1);
    uVar11 = FUN_1003186de(param_2);
    bVar17 = uVar10 < uVar11;
    bVar18 = uVar10 == uVar11;
    goto LAB_1002dedd5;
  case 0x68:
    FUN_10047c16c(param_1,&local_238);
    FUN_10047c16c(param_2,&local_438);
    uVar10 = FUN_1002dd449((long)&local_238 + 2,(ushort)local_238,(long)&local_438 + 2,
                           (undefined2)local_438);
    break;
  case 0x6f:
    bVar17 = *(ulong *)(param_1 + 400) < *(ulong *)(param_2 + 400);
    bVar18 = *(ulong *)(param_1 + 400) == *(ulong *)(param_2 + 400);
    goto LAB_1002dedd5;
  case 0x72:
    bVar17 = *(ulong *)(param_1 + 0x178) < *(ulong *)(param_2 + 0x178);
    bVar18 = *(ulong *)(param_1 + 0x178) == *(ulong *)(param_2 + 0x178);
    goto LAB_1002dedd5;
  case 0x7c:
    FUN_10047bb47(param_1,&local_450,&local_440);
    FUN_10047bb47(param_2,&local_448,&local_43c);
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0x7d:
    if ((*(byte *)(param_1 + 0xc2) & 4) == 0) {
      uVar10 = (int)(*(uint *)(param_2 + 0xc2) << 0x1d) >> 0x1f;
      break;
    }
    uVar16 = (ulong)((*(uint *)(param_2 + 0xc2) & 4) == 0);
    goto switchD_1002de1d1_caseD_f;
  case 0x99:
    bVar7 = *(byte *)(param_1 + 0xc6) >> 7;
    bVar8 = *(byte *)(param_2 + 0xc6) >> 7;
    bVar17 = bVar7 < bVar8;
    bVar18 = bVar7 == bVar8;
    goto LAB_1002ded3c;
  case 0x9a:
    bVar7 = FUN_1004817dc(param_1,0);
    bVar8 = FUN_1004817dc(param_2,0);
    goto LAB_1002de84b;
  case 0x9c:
    bVar7 = FUN_10030c70d(param_1,0);
    bVar8 = FUN_10030c70d(param_2,0);
LAB_1002de84b:
    bVar17 = bVar7 < bVar8;
    bVar18 = bVar7 == bVar8;
    goto LAB_1002dedd5;
  case 0x9d:
    bVar7 = FUN_100481b0e(param_1);
    bVar8 = FUN_100481b0e(param_2);
    goto LAB_1002deca2;
  case 0x9e:
    bVar7 = FUN_100481c96(param_1);
    bVar8 = FUN_100481c96(param_2);
LAB_1002deca2:
    uVar11 = (uint)((bVar8 ^ 1) & bVar7);
    uVar10 = 0xffffffff;
    if (bVar7 != 0) {
      uVar10 = uVar11;
    }
    if (bVar8 == 0) {
      uVar10 = uVar11;
    }
    uVar16 = (ulong)uVar10;
    goto switchD_1002de1d1_caseD_f;
  case 0x9f:
    FUN_10047906c(param_1,&local_450,&local_440);
    FUN_10047906c(param_2,&local_448,&local_43c);
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0xa0:
    FUN_10047954d(param_1,&local_450,&local_440);
    FUN_10047954d(param_2,&local_448,&local_43c);
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0xa1:
    uVar2 = *(ushort *)(*(long *)(param_1 + 0x70) + 0x10);
    uVar3 = *(ushort *)(*(long *)(param_2 + 0x70) + 0x10);
    bVar17 = uVar2 < uVar3;
    bVar18 = uVar2 == uVar3;
    goto LAB_1002ded3c;
  case 0xa2:
    uVar2 = *(ushort *)(*(long *)(param_1 + 0x70) + 0x12);
    uVar3 = *(ushort *)(*(long *)(param_2 + 0x70) + 0x12);
    bVar17 = uVar2 < uVar3;
    bVar18 = uVar2 == uVar3;
    goto LAB_1002ded3c;
  case 0xa3:
    bVar17 = (bool)(**(byte **)(param_1 + 0x70) >> 2 & 1);
    bVar18 = (**(uint **)(param_2 + 0x70) >> 2 & 1) != 0;
    uVar16 = 0xffffffff;
    if (bVar18 <= bVar17) {
      uVar16 = (ulong)(bVar18 < bVar17);
    }
    goto switchD_1002de1d1_caseD_f;
  case 0xa5:
    bVar7 = *(byte *)(*(long *)(param_1 + 0x78) + 0x20);
    bVar8 = *(byte *)(*(long *)(param_2 + 0x78) + 0x20);
    bVar17 = bVar7 < bVar8;
    bVar18 = bVar7 == bVar8;
    goto LAB_1002ded3c;
  case 0xa6:
    bVar7 = *(byte *)(*(long *)(param_1 + 0x78) + 0x21);
    bVar8 = *(byte *)(*(long *)(param_2 + 0x78) + 0x21);
    bVar17 = bVar7 < bVar8;
    bVar18 = bVar7 == bVar8;
    goto LAB_1002ded3c;
  case 0xa7:
    bVar7 = *(byte *)(*(long *)(param_1 + 0x78) + 0x22);
    bVar8 = *(byte *)(*(long *)(param_2 + 0x78) + 0x22);
    bVar17 = bVar7 < bVar8;
    bVar18 = bVar7 == bVar8;
LAB_1002ded3c:
    uVar16 = 0xffffffff;
    if (!bVar17) {
      uVar16 = (ulong)(!bVar17 && !bVar18);
    }
    goto switchD_1002de1d1_caseD_f;
  case 0xb7:
    FUN_1004817dc(param_1,&local_238);
    FUN_1004817dc(param_2,&local_438);
    bVar17 = local_238 < local_438;
    bVar18 = local_238 == local_438;
    goto LAB_1002dedd5;
  case 0xb8:
    bVar17 = *(ushort *)(param_1 + 0x140) < *(ushort *)(param_2 + 0x140);
    bVar18 = *(ushort *)(param_1 + 0x140) == *(ushort *)(param_2 + 0x140);
LAB_1002dedd5:
    uVar16 = 0xffffffff;
    if (!bVar17) {
      uVar16 = (ulong)(!bVar17 && !bVar18);
    }
    goto switchD_1002de1d1_caseD_f;
  case 0xbc:
    FUN_10047e5c7(param_1,&local_450,&local_440);
    FUN_10047e5c7(param_2,&local_448,&local_43c);
    uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    break;
  case 0xc2:
  case 0xc3:
    uVar10 = *(uint *)(param_1 + 0x120);
    if ((((uVar10 != 0) && (uVar11 = *(uint *)(param_2 + 0x120), uVar11 != 0)) &&
        ((param_4 & 0x24) == 0)) && (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)))
    goto LAB_1002deb72;
    if ((param_4 & 4) == 0) {
      FUN_100478913(param_1,&local_450,&local_440,&local_238);
      FUN_100478913(param_2,&local_448,&local_43c,&local_438);
    }
    else {
      FUN_100478768(param_1,&local_450,&local_440,&local_238);
      FUN_100478768(param_2,&local_448,&local_43c,&local_438);
    }
    if (((char)local_238 == '\0') || ((char)local_438 == '\0')) {
      uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
    }
    else {
      uVar10 = FUN_1002df8d2();
    }
    break;
  default:
    if ((int)param_3 == 0xf3) {
      uVar10 = FUN_100474dd0(param_1,0);
      uVar11 = FUN_100474dd0(param_2,0);
      local_454 = uVar10;
      if ((uVar10 & 0x40) == 0) {
        if ((param_4 & 4) == 0) {
          FUN_100477006(param_1,&local_450,&local_440);
        }
        else {
          FUN_100476b40(param_1,&local_450,&local_440);
        }
      }
      else if ((param_4 & 4) == 0) {
        FUN_10047e244(param_1,&local_450,&local_440);
      }
      else {
        FUN_10047de81(param_1,&local_450,&local_440);
      }
      if ((uVar11 & 0x40) == 0) {
        if ((param_4 & 4) == 0) {
          FUN_100477006(param_2,&local_448,&local_43c);
        }
        else {
          FUN_100476b40(param_2,&local_448,&local_43c);
        }
      }
      else if ((param_4 & 4) == 0) {
        FUN_10047e244(param_2,&local_448,&local_43c);
      }
      else {
        FUN_10047de81(param_2,&local_448,&local_43c);
      }
      uVar10 = FUN_1002dd449(local_450,local_440,local_448,local_43c);
      uVar16 = (ulong)uVar10;
      if (uVar10 == 0) {
        uVar16 = (ulong)((uVar11 & 0x40) == 0);
        if ((local_454 & 0x40) == 0) {
          uVar16 = (ulong)-(uint)((local_454 & 0x40) == 0 & (byte)((uVar11 & 0x40) >> 6));
        }
      }
    }
    goto switchD_1002de1d1_caseD_f;
  }
  uVar16 = (ulong)uVar10;
switchD_1002de1d1_caseD_f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar16;
  }
LAB_1002df490:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

