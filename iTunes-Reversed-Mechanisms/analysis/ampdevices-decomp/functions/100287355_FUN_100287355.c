// name: FUN_100287355
// address: 100287355

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100287355(int *param_1,long *param_2,int param_3,long param_4,char *param_5)

{
  ushort uVar1;
  int iVar2;
  ulong *puVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long *plVar26;
  bool bVar27;
  long local_268;
  long local_260;
  ulong local_250;
  undefined1 local_238;
  undefined1 uStack_237;
  undefined2 uStack_236;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != 0x68) {
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 != '\0') {
      local_238 = 2;
      uStack_237 = 2;
      uStack_236 = 0x822;
      uStack_234 = 0x7a0a90;
      uStack_230 = 1;
      local_22c = 0x822;
      local_22a = "dataSize == sizeof( *playlistItem )";
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  *param_5 = '\0';
  if ((param_2 == (long *)0x0) || ((int *)*param_2 == (int *)0x0)) {
LAB_10028744a:
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 != '\0') {
      local_238 = 2;
      uStack_237 = 2;
      uStack_236 = 0x822;
      uStack_234 = 0x7a0a90;
      uStack_230 = 1;
      local_22c = 0x822;
      local_22a = "PlaylistItemIsValid(playlistItem)";
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    iVar12 = -0x32;
    goto LAB_100287472;
  }
  if (*(int *)*param_2 != 0x706c7374) {
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 != '\0') {
      local_238 = 2;
      uStack_237 = 2;
      uStack_236 = 0x822;
      uStack_234 = 0x7ab58c;
      uStack_230 = 1;
      local_22c = 0x822;
      local_22a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    cVar8 = FUN_1001782e9(0,1);
    if (cVar8 == '\0') goto LAB_10028744a;
  }
  iVar12 = (int)param_2[8];
  if (iVar12 == 0) goto LAB_10028744a;
  iVar21 = *param_1;
  if ((iVar21 == 0x1b) || (iVar21 == 0x1e)) {
LAB_100287425:
    iVar12 = FUN_100287266(param_1,iVar12,param_4,0,param_5);
    goto LAB_10028743a;
  }
  if (iVar21 == 0xb9) {
    iVar12 = *(int *)(*param_2 + 0x58);
    goto LAB_100287425;
  }
  if ((int *)*param_2 == (int *)0x0) {
LAB_100287625:
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 != '\0') {
      local_238 = 2;
      uStack_237 = 2;
      uStack_236 = 0x822;
      uStack_234 = 0x7a0a90;
      uStack_230 = 1;
      local_22c = 0x822;
      local_22a = "PlaylistItemIsValid(playlistItem)";
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    iVar12 = -0x32;
    goto LAB_100287651;
  }
  if (*(int *)*param_2 != 0x706c7374) {
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 != '\0') {
      local_238 = 2;
      uStack_237 = 2;
      uStack_236 = 0x822;
      uStack_234 = 0x7ab58c;
      uStack_230 = 1;
      local_22c = 0x822;
      local_22a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    cVar8 = FUN_1001782e9(0,1);
    if ((cVar8 == '\0') || ((int)param_2[8] == 0)) goto LAB_100287625;
  }
  iVar12 = -0x32;
  if ((param_2[1] == 0) || (lVar14 = FUN_10028a8b3(), lVar14 == 0)) goto LAB_100287651;
  puVar3 = *(ulong **)(lVar14 + 8);
  if (puVar3 == (ulong *)0x0) {
    *param_5 = '\0';
LAB_10028770c:
    local_250 = 0;
LAB_100287717:
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 != '\0') {
      local_238 = 2;
      uStack_237 = 2;
      uStack_236 = 0x822;
      uStack_234 = 0x7a0a90;
      uStack_230 = 1;
      local_22c = 0x822;
      local_22a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_250 = puVar3[2];
    *param_5 = '\0';
    if (local_250 == 0) goto LAB_10028770c;
    if (*(int *)(local_250 + 0x80) != 0x74646174) {
      uVar13 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      if (cVar8 != '\0') {
        local_238 = 2;
        uStack_237 = 2;
        uStack_236 = 0x822;
        uStack_234 = 0x7ab58c;
        uStack_230 = 1;
        local_22c = 0x822;
        local_22a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      cVar8 = FUN_1001782e9(0,1);
      if (cVar8 != '\0') goto LAB_10028773d;
      goto LAB_100287717;
    }
  }
LAB_10028773d:
  iVar21 = *param_1;
  iVar12 = -0x32;
  switch(iVar21) {
  case 2:
    local_268 = local_250 + 0x1c10;
    iVar21 = (int)puVar3[0x1b];
    goto LAB_100288259;
  case 3:
    local_268 = local_250 + 0x1c60;
    iVar21 = *(int *)((long)puVar3 + 0xe4);
    goto LAB_100288259;
  case 4:
    local_268 = local_250 + 0x1cb0;
    iVar21 = *(int *)((long)puVar3 + 0xdc);
    goto LAB_100288259;
  case 5:
    local_250 = (ulong)*(ushort *)(lVar14 + 0x54);
    break;
  case 6:
    local_250 = (ulong)*(float *)(lVar14 + 0x50);
    local_250 = (long)(*(float *)(lVar14 + 0x50) - _DAT_10070844c) & (long)local_250 >> 0x3f |
                local_250;
    break;
  case 7:
    local_250 = (ulong)*(ushort *)((long)puVar3 + 0x142);
    break;
  case 8:
    local_268 = local_250 + 0x1df0;
    iVar21 = (int)puVar3[0x1e];
    goto LAB_100288259;
  case 9:
    local_268 = local_250 + 0x1e40;
    iVar21 = *(int *)((long)puVar3 + 0xf4);
    goto LAB_100288259;
  case 10:
    local_250 = (ulong)*(uint *)(lVar14 + 0x5c);
    goto LAB_100288612;
  case 0xb:
    local_250 = (ulong)*(ushort *)((long)puVar3 + 0x136);
    break;
  case 0xc:
    local_250 = *(ulong *)(lVar14 + 0x68);
    if (local_250 == 0xffffffff) {
      cVar8 = FUN_100287235(lVar14);
      if (cVar8 != '\0') goto LAB_100288099;
      local_250 = *(ulong *)(lVar14 + 0x68);
    }
    break;
  case 0xd:
    iVar12 = *(int *)(lVar14 + 100);
    if (iVar12 == 0) {
      cVar8 = FUN_100287235(lVar14);
      if (cVar8 != '\0') {
        local_250 = 0xffffffff;
        break;
      }
      iVar12 = *(int *)(lVar14 + 100);
    }
    local_250 = (ulong)(((iVar12 + 500U) / 1000) * 1000);
    break;
  case 0xe:
    local_268 = local_250 + 0x1ee0;
    iVar21 = *(int *)((long)puVar3 + 0xfc);
    goto LAB_100288259;
  default:
    goto switchD_10028776a_caseD_f;
  case 0x10:
    local_250 = (ulong)*(uint *)(lVar14 + 0x60);
    goto LAB_100288612;
  case 0x11:
    local_268 = local_250 + 0x1e90;
    iVar21 = (int)puVar3[0x1f];
    goto LAB_100288259;
  case 0x12:
    local_268 = local_250 + 0x1cb0;
    iVar21 = *(int *)((long)puVar3 + 0xec);
    goto LAB_100288259;
  case 0x16:
    local_250 = (ulong)*(uint *)((long)puVar3 + 0x144);
    break;
  case 0x17:
    local_250 = (ulong)*(uint *)((long)puVar3 + 0x14c);
    goto LAB_100288612;
  case 0x18:
    local_250 = (ulong)*(ushort *)((long)puVar3 + 0x13a);
    break;
  case 0x19:
    local_250 = (ulong)*(char *)((long)puVar3 + 300);
    break;
  case 0x1b:
    local_250 = (ulong)*(uint *)(lVar14 + 0x30);
    break;
  case 0x1c:
    local_250 = *puVar3;
    break;
  case 0x1d:
  case 0x7d:
    uVar15 = FUN_1004746c0(puVar3);
    uVar15 = uVar15 & 0xffffffff;
    goto LAB_100288190;
  case 0x1f:
    uVar15 = (ulong)(*(uint *)((long)puVar3 + 0xc2) >> 10) & 0xffffffffffffff01;
    goto LAB_100288190;
  case 0x20:
    local_250 = (ulong)*(uint *)(*(long *)(lVar14 + 0x10) + 0x88);
    break;
  case 0x22:
    local_250 = (ulong)*(uint *)(*(long *)(lVar14 + 0x10) + 0x8c);
    goto LAB_100288696;
  case 0x23:
    local_250 = (ulong)*(ushort *)((long)puVar3 + 0x15c);
    break;
  case 0x25:
    bVar9 = FUN_1005d1e25(puVar3);
    goto LAB_100287f19;
  case 0x27:
    local_268 = local_250 + 0x1d00;
    iVar21 = (int)puVar3[0x1d];
    goto LAB_100288259;
  case 0x28:
    bVar27 = (param_1[1] & 1U) == 0;
    if (bVar27) {
      uVar13 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      if (cVar8 != '\0') {
        local_238 = 2;
        uStack_237 = 2;
        uStack_236 = 0x822;
        uStack_234 = 0x7a0a90;
        uStack_230 = 1;
        local_22c = 0x822;
        local_22a = "(criteria->matchType & kCriterionMatchTypeIsEqual) != 0";
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      FUN_1001782e9(0,0);
      iVar12 = -0x32;
    }
    else {
      FUN_1001d1f8e(param_1,&local_238);
      uVar15 = CONCAT44(uStack_234,CONCAT22(uStack_236,CONCAT11(uStack_237,local_238)));
      iVar12 = 0;
      if (uVar15 != 0) {
        plVar26 = (long *)puVar3[0xd];
        if (uVar15 < 0x47) {
          for (; plVar26 != (long *)0x0; plVar26 = (long *)plVar26[10]) {
            if (*(short *)(*plVar26 + 0x10) == CONCAT11(uStack_237,local_238)) goto LAB_100288e22;
          }
        }
        else {
          for (; plVar26 != (long *)0x0; plVar26 = (long *)plVar26[10]) {
            if (*(ulong *)(*plVar26 + 0x60) == uVar15) goto LAB_100288e22;
          }
        }
        bVar7 = true;
        bVar6 = false;
        goto LAB_100288e26;
      }
    }
    goto LAB_100288e3b;
  case 0x29:
    if (((*(long *)(lVar14 + 8) == 0) || (*(long *)(*(long *)(lVar14 + 8) + 0x10) == 0)) ||
       (local_250 = *(ulong *)(*(long *)(lVar14 + 0x10) + 0x38), local_250 == 0))
    goto LAB_100288099;
    lVar25 = FUN_1001d2081(param_1);
    if ((lVar25 == 0) &&
       ((*(int *)(lVar14 + 0x3c) != 0x53485244 || (*(char *)((long)puVar3 + 0x92) != '\x01')))) {
      if (((*(byte *)(lVar14 + 0x4a) & 8) != 0) ||
         (pbVar4 = *(byte **)(lVar14 + 0x10), (*pbVar4 & 2) != 0)) goto LAB_100288099;
      if (((*(long *)(pbVar4 + 8) == 0) && (*(long *)(pbVar4 + 0x20) == 0)) &&
         (uVar15 = FUN_100474dd0(puVar3,0), (uVar15 & 0x10090) == 0)) {
        local_250 = 0;
      }
    }
    break;
  case 0x2a:
    local_250 = *(ulong *)(*(long *)(lVar14 + 0x10) + 0x48);
    break;
  case 0x2b:
    local_250 = *(ulong *)(*(long *)(lVar14 + 0x10) + 0x58);
    break;
  case 0x2c:
    local_250 = *(ulong *)(*(long *)(lVar14 + 0x10) + 0x50);
    break;
  case 0x2d:
    local_250 = *(ulong *)(*(long *)(lVar14 + 0x10) + 0x40);
    break;
  case 0x2e:
  case 0x2f:
    FUN_1005355f6(*(undefined4 *)(lVar14 + 0xb0),*(undefined4 *)(lVar14 + 0xb4),&local_238);
    local_250 = (ulong)CONCAT11(uStack_237,local_238);
    break;
  case 0x30:
    local_250 = (ulong)(*(int *)(lVar14 + 0x3c) == 0x48545450);
    break;
  case 0x31:
    local_250 = (ulong)*(ushort *)((long)puVar3 + 0x13c);
    break;
  case 0x32:
    local_250 = (ulong)*(uint *)(puVar3[0x10] + 4);
    break;
  case 0x33:
    local_250 = (ulong)*(uint *)(puVar3[0x10] + 8);
    break;
  case 0x34:
    local_250 = (ulong)(ushort)puVar3[0x27];
    break;
  case 0x35:
    local_250 = *(ulong *)(*(long *)(lVar14 + 0x10) + 0x60);
    break;
  case 0x36:
    local_268 = local_250 + 0x2020;
    iVar21 = *(int *)(puVar3[0xe] + 0x20);
    iVar2 = *(int *)(puVar3[0xe] + 0x24);
    bVar6 = false;
    local_260 = local_268;
    goto LAB_100288353;
  case 0x37:
    local_268 = local_250 + 0x1f30;
    iVar21 = (int)puVar3[0x20];
    goto LAB_100288259;
  case 0x39:
  case 0x3c:
    if (*(int *)(param_4 + 0x1bc) == (int)puVar3[1]) {
      local_250 = (ulong)*(uint *)(param_4 + 0x1b8);
    }
    else {
      *(int *)(param_4 + 0x1bc) = (int)puVar3[1];
      uVar18 = FUN_100474dd0(puVar3,0);
      local_250 = (ulong)uVar18;
      *(uint *)(param_4 + 0x1b8) = uVar18;
      if (uVar18 == 0x400) {
        if (*(char *)(param_4 + 9) == '\0') {
          local_250 = 0x400;
        }
        else {
          *(undefined4 *)(param_4 + 0x1b8) = 2;
          local_250 = 2;
        }
      }
    }
    if (*param_1 != 0x3c) goto LAB_10028882a;
    break;
  case 0x3b:
    uVar15 = (ulong)(*(int *)(lVar14 + 0x7c) != 0);
    goto LAB_100288832;
  case 0x3e:
    local_268 = local_250 + 0x2070;
    iVar21 = *(int *)(puVar3[0xf] + 0x28);
    goto LAB_1002882ab;
  case 0x3f:
    local_250 = (ulong)*(uint *)(puVar3[0xf] + 0xc);
    break;
  case 0x44:
    local_250 = (ulong)(uint)puVar3[0x2a];
    break;
  case 0x45:
    local_250 = (ulong)(uint)puVar3[0x2b];
    goto LAB_100288612;
  case 0x46:
    uVar15 = (ulong)(*(uint *)((long)puVar3 + 0xc2) >> 0x11);
    goto LAB_10028882e;
  case 0x47:
    local_268 = local_250 + 0x1cb0;
    iVar21 = (int)puVar3[0x1c];
    goto LAB_100288259;
  case 0x49:
    local_250 = (ulong)(uint)puVar3[1];
    break;
  case 0x4d:
  case 0xd5:
    if ((puVar3 == (ulong *)0x0) || (uVar15 = puVar3[5], uVar15 == 0)) goto LAB_100288099;
    if (iVar21 == 0x4d) {
      local_250 = *(ulong *)(uVar15 + 0x20);
    }
    else {
      local_250 = *(ulong *)(uVar15 + 0x28);
    }
    break;
  case 0x4e:
    local_268 = local_250 + 0x2430;
    iVar21 = (int)puVar3[0x35];
    if (iVar21 == 0) {
      if (*(char *)(param_4 + 8) == '\0') {
        local_268 = local_250 + 0x1c10;
        iVar21 = (int)puVar3[0x1b];
        goto LAB_100288e01;
      }
LAB_1002885af:
      iVar21 = 0;
    }
    goto LAB_1002885bf;
  case 0x4f:
    local_268 = local_250 + 0x2480;
    iVar21 = *(int *)((long)puVar3 + 0x1ac);
    if (iVar21 != 0) goto LAB_1002885bf;
    if (*(char *)(param_4 + 8) != '\0') goto LAB_1002885af;
    local_268 = local_250 + 0x1c60;
    iVar21 = *(int *)((long)puVar3 + 0xe4);
LAB_100288e01:
    bVar6 = true;
    goto LAB_100288333;
  case 0x50:
    local_268 = local_250 + 0x24d0;
    iVar21 = (int)puVar3[0x36];
    if (iVar21 == 0) {
      if (*(char *)(param_4 + 8) != '\0') goto LAB_1002885af;
      local_268 = local_250 + 0x1cb0;
      iVar21 = *(int *)((long)puVar3 + 0xdc);
      goto LAB_100288e01;
    }
    goto LAB_1002885bf;
  case 0x51:
    local_268 = local_250 + 0x24d0;
    iVar21 = *(int *)((long)puVar3 + 0x1b4);
    if (iVar21 == 0) {
      if (*(char *)(param_4 + 8) != '\0') goto LAB_1002885af;
      local_268 = local_250 + 0x1cb0;
      iVar21 = (int)puVar3[0x1c];
      goto LAB_100288e01;
    }
    goto LAB_1002885bf;
  case 0x52:
    local_268 = local_250 + 0x24d0;
    iVar21 = (int)puVar3[0x37];
    if (iVar21 == 0) {
      if (*(char *)(param_4 + 8) != '\0') goto LAB_1002885af;
      local_268 = local_250 + 0x1cb0;
      iVar21 = *(int *)((long)puVar3 + 0xec);
      goto LAB_100288e01;
    }
    goto LAB_1002885bf;
  case 0x53:
    local_268 = local_250 + 0x2520;
    iVar21 = *(int *)((long)puVar3 + 0x1bc);
    if (iVar21 == 0) {
      if (*(char *)(param_4 + 8) == '\0') {
        local_268 = local_250 + 0x2070;
        iVar21 = *(int *)(puVar3[0xf] + 0x28);
        bVar6 = true;
        goto LAB_100288333;
      }
      iVar21 = 0;
    }
LAB_1002885bf:
    uVar15 = 0;
    bVar6 = false;
    bVar7 = true;
    uVar11 = 0;
    local_250 = 0;
    iVar2 = 0;
    local_260 = 0;
    goto LAB_10028886e;
  case 0x56:
    local_268 = local_250 + 0x2020;
    iVar21 = *(int *)(puVar3[0xe] + 0x24);
    goto LAB_100288259;
  case 0x59:
    FUN_1002d1ccd(puVar3,0x59,0,&local_238);
    FUN_100287131(param_1,&uStack_236,CONCAT11(uStack_237,local_238),param_5);
    goto LAB_100288a9f;
  case 0x5a:
LAB_100288099:
    uVar15 = 0;
    bVar7 = true;
    goto LAB_100288843;
  case 0x5b:
    uVar18 = FUN_1003186de(puVar3);
    local_250 = (ulong)uVar18;
    break;
  case 0x5f:
    uVar15 = (ulong)(*(uint *)((long)puVar3 + 0xc2) >> 0x1d);
    goto LAB_1002886a9;
  case 0x60:
    uVar15 = (ulong)(**(byte **)(lVar14 + 0x18) >> 1);
    goto LAB_10028882e;
  case 0x61:
    local_250 = (ulong)**(byte **)(lVar14 + 0x18);
LAB_10028882a:
    uVar15 = local_250 >> 2 & 0x3f;
LAB_10028882e:
    uVar15 = uVar15 & 0xffffffffffffff01;
LAB_100288832:
    bVar7 = false;
    goto LAB_100288843;
  case 0x75:
  case 0x93:
    uVar15 = 0;
LAB_100288190:
    bVar7 = false;
    goto LAB_100288843;
  case 0x76:
    local_250 = *(ulong *)(*(long *)(lVar14 + 0x10) + 0xa0);
    goto LAB_100288696;
  case 0x7f:
    local_268 = local_250 + 0x2020;
    iVar21 = *(int *)(puVar3[0xe] + 0x28);
LAB_100288259:
    bVar6 = false;
LAB_100288333:
    iVar2 = 0;
    local_260 = 0;
LAB_100288353:
    local_250 = 0;
    uVar11 = 0;
    uVar15 = 0;
    bVar7 = true;
    goto LAB_10028886e;
  case 0x85:
    bVar9 = FUN_100475030(puVar3);
LAB_100287f19:
    local_250 = (ulong)bVar9;
    break;
  case 0x86:
    local_250 = (ulong)*(byte *)((long)puVar3 + 0x92);
    goto LAB_100288696;
  case 0x88:
    local_250 = (ulong)*(ushort *)(lVar14 + 0x56);
    goto LAB_100288696;
  case 0x8d:
    if ((puVar3 != (ulong *)0x0) && (uVar15 = puVar3[5], uVar15 != 0)) {
      uVar1 = *(ushort *)(uVar15 + 0xf8);
      if ((uVar1 & 8) == 0) {
        FUN_1003a152c(uVar15);
        uVar1 = *(ushort *)(uVar15 + 0xf8);
      }
      uVar15 = (ulong)((uVar1 & 0x30) == 0x10);
      goto LAB_100288190;
    }
    bVar7 = false;
    uVar15 = 0;
    goto LAB_100288843;
  case 0x8e:
  case 0xd4:
    if ((puVar3 == (ulong *)0x0) || (uVar15 = puVar3[8], uVar15 == 0)) {
      uVar15 = 0;
      bVar7 = true;
      goto LAB_100288843;
    }
    if (iVar21 == 0x8e) {
      local_250 = *(ulong *)(uVar15 + 0x18);
    }
    else {
      local_250 = *(ulong *)(uVar15 + 0x70);
    }
    goto LAB_100288696;
  case 0x90:
    local_268 = local_250 + 0x2390;
    iVar21 = *(int *)(*(long *)(lVar14 + 0x10) + 0x74);
    goto LAB_10028831c;
  case 0x91:
    local_268 = local_250 + 0x23e0;
    iVar21 = *(int *)(*(long *)(lVar14 + 0x10) + 0x78);
    goto LAB_10028831c;
  case 0x94:
    local_268 = local_250 + 0x2390;
    iVar21 = *(int *)(*(long *)(lVar14 + 0x10) + 0x7c);
    goto LAB_10028831c;
  case 0x95:
    local_268 = local_250 + 0x23e0;
    iVar21 = *(int *)(*(long *)(lVar14 + 0x10) + 0x80);
    goto LAB_10028831c;
  case 0x9a:
    bVar9 = FUN_1004817dc(puVar3,0);
    goto LAB_100288637;
  case 0x9c:
    bVar9 = FUN_10030c70d(puVar3,0);
    goto LAB_100288637;
  case 0x9e:
    uVar15 = FUN_100481c96(puVar3);
    goto LAB_10028855a;
  case 0x9f:
    local_268 = local_250 + 0x1d50;
    iVar21 = *(int *)(puVar3[0xe] + 0x14);
    goto LAB_10028831c;
  case 0xa0:
    local_268 = local_250 + 0x1da0;
    iVar21 = *(int *)(puVar3[0xe] + 0x18);
LAB_10028831c:
    bVar6 = false;
    goto LAB_100288333;
  case 0xa1:
    local_250 = (ulong)*(ushort *)(puVar3[0xe] + 0x10);
    goto LAB_100288696;
  case 0xa2:
    local_250 = (ulong)*(ushort *)(puVar3[0xe] + 0x12);
    goto LAB_100288696;
  case 0xa3:
    uVar15 = (ulong)(*(byte *)puVar3[0xe] >> 2) & 0xffffffffffffff01;
    goto LAB_10028855a;
  case 0xa4:
    uVar15 = (ulong)(*(uint *)(lVar14 + 0x48) >> 0x14);
    goto LAB_1002886a9;
  case 0xa5:
    local_250 = (ulong)*(byte *)(puVar3[0xf] + 0x20);
    goto LAB_100288696;
  case 0xa6:
    local_250 = (ulong)*(byte *)(puVar3[0xf] + 0x21);
    goto LAB_100288696;
  case 0xb1:
    local_250 = (ulong)*(ushort *)(*(long *)(lVar14 + 0x18) + 2);
    goto LAB_100288696;
  case 0xb2:
    local_250 = (ulong)*(ushort *)(*(long *)(lVar14 + 0x18) + 4);
    goto LAB_100288696;
  case 0xb3:
    uVar15 = FUN_1002b8fdc(puVar3);
    goto LAB_10028855a;
  case 0xb4:
    uVar15 = FUN_1002b90f2(puVar3);
LAB_10028855a:
    bVar7 = false;
    uVar15 = uVar15 & 0xffffffff;
    goto LAB_100288843;
  case 0xb5:
    uVar15 = (ulong)(*(uint *)(lVar14 + 0x48) >> 0x15);
    goto LAB_1002886a9;
  case 0xb6:
    uVar15 = (ulong)(*(uint *)(lVar14 + 0x48) >> 0x17);
LAB_1002886a9:
    uVar15 = uVar15 & 0xffffffffffffff01;
    bVar7 = false;
LAB_100288843:
    uVar11 = 0;
    local_250 = 0;
    goto LAB_10028884e;
  case 0xb7:
    FUN_1004817dc(puVar3,&local_238);
    local_250 = (ulong)CONCAT22(uStack_236,CONCAT11(uStack_237,local_238));
    goto LAB_100288696;
  case 0xb8:
    local_250 = (ulong)(ushort)puVar3[0x28];
    goto LAB_100288696;
  case 0xba:
    local_250 = FUN_1002d191f(lVar14,0xba,0);
LAB_100288612:
    uVar15 = 0;
    bVar7 = true;
    uVar11 = 1;
    goto LAB_10028884e;
  case 0xbb:
    local_250 = FUN_1002d191f(lVar14,0xbb,0);
    goto LAB_100288696;
  case 0xbc:
    local_268 = local_250 + 0x20c0;
    iVar21 = *(int *)(puVar3[0xf] + 0x34);
LAB_1002882ab:
    bVar6 = false;
    goto LAB_100288333;
  case 0xd6:
    uVar18 = FUN_10031acfd(lVar14);
    local_250 = (ulong)uVar18;
    goto LAB_100288696;
  case 0xf8:
    bVar9 = FUN_100320d0a(puVar3,0);
LAB_100288637:
    local_250 = (ulong)bVar9;
LAB_100288696:
    uVar11 = 0;
    uVar15 = 0;
    bVar7 = true;
    goto LAB_10028884e;
  }
  uVar15 = 0;
  bVar7 = true;
  uVar11 = 0;
LAB_10028884e:
  iVar21 = 0;
  bVar6 = false;
  iVar2 = 0;
  local_260 = 0;
  local_268 = 0;
LAB_10028886e:
  bVar27 = true;
  iVar12 = 0;
LAB_100288871:
  if (bVar27 && iVar12 == 0) {
    if (local_268 == 0) {
      if (bVar7) {
        iVar12 = FUN_100287266(param_1,local_250,param_4,uVar11,param_5);
      }
      else {
        FUN_1001d2147(param_1,&local_238);
        iVar12 = FUN_1001d146a(param_1[1],uVar15 & 0xff,local_238,param_5);
      }
    }
    else {
      if (bVar6) {
        plVar26 = (long *)0x0;
      }
      else {
        plVar26 = *(long **)(param_1 + 4);
        if (plVar26 == (long *)0x0) {
          plVar26 = (long *)0x0;
        }
        else {
          plVar16 = (long *)*plVar26;
          if (((plVar16 != (long *)0x0) && (iVar21 != 0)) && (lVar14 = *plVar16, lVar14 != 0)) {
            uVar18 = ~(iVar21 << 0xf) + iVar21;
            uVar18 = (uVar18 >> 10 ^ uVar18) * 9;
            uVar18 = uVar18 >> 6 ^ uVar18;
            uVar18 = ~(uVar18 << 0xb) + uVar18;
            uVar23 = uVar18 >> 0x10 ^ uVar18;
            uVar24 = *(uint *)((long)plVar16 + 0xc) & uVar23;
            lVar25 = (long)(int)uVar24;
            iVar12 = *(int *)(lVar14 + lVar25 * 8);
            if (iVar12 != iVar21) {
              uVar23 = (uVar18 >> 0x17) + ~uVar23;
              uVar23 = uVar23 * 0x1000 ^ uVar23;
              uVar23 = uVar23 >> 7 ^ uVar23;
              uVar23 = uVar23 * 4 ^ uVar23;
              uVar18 = 0;
              do {
                if (iVar12 == 0) goto LAB_1002889e0;
                if (uVar18 == 0) {
                  uVar18 = uVar23 >> 0x14 ^ uVar23 | 1;
                }
                uVar24 = uVar24 + uVar18 & *(uint *)((long)plVar16 + 0xc);
                lVar25 = (long)(int)uVar24;
                iVar12 = *(int *)(lVar14 + lVar25 * 8);
              } while (iVar12 != iVar21);
            }
            cVar8 = *(char *)(lVar14 + 4 + lVar25 * 8);
            if (cVar8 == '\x02') {
              *param_5 = '\0';
            }
            else {
              if (cVar8 != '\x01') goto LAB_1002889e0;
              *param_5 = '\x01';
            }
LAB_100288a9f:
            iVar12 = 0;
            goto LAB_100287472;
          }
        }
      }
LAB_1002889e0:
      iVar12 = FUN_1002871ad(param_1,local_268,iVar21,param_5);
      if (iVar12 == 0) {
        if ((plVar26 != (long *)0x0) && (iVar21 != 0)) {
          plVar16 = (long *)*plVar26;
          if (plVar16 == (long *)0x0) {
            if ((*(byte *)(local_268 + 4) & 1) != 0) {
              plVar16 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
              if (plVar16 != (long *)0x0) {
                *plVar16 = 0;
                plVar16[1] = 0;
                plVar16[2] = 0;
                *plVar26 = (long)plVar16;
                cVar8 = (*param_5 == '\0') + '\x01';
                goto LAB_100288a81;
              }
              *plVar26 = 0;
            }
          }
          else {
            lVar14 = *plVar16;
            cVar8 = (*param_5 == '\0') + '\x01';
            if (lVar14 == 0) {
LAB_100288a81:
              iVar12 = (int)plVar16[1];
              if (iVar12 == 0) {
                iVar20 = 0x40;
              }
              else {
                iVar20 = iVar12 * 2;
                if ((int)plVar16[2] * 6 < iVar12 * 2) {
                  iVar20 = iVar12;
                }
              }
              FUN_10028aad2(plVar16,iVar20);
              lVar14 = *plVar16;
              if (lVar14 == 0) {
                uVar13 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar13,0x10);
                if (cVar10 != '\0') {
                  local_238 = 2;
                  uStack_237 = 2;
                  uStack_236 = 0x822;
                  uStack_234 = 0x7a0a90;
                  uStack_230 = 1;
                  local_22c = 0x822;
                  local_22a = "m_table";
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                lVar14 = *plVar16;
              }
            }
            uVar18 = ~(iVar21 << 0xf) + iVar21;
            uVar18 = (uVar18 >> 10 ^ uVar18) * 9;
            uVar18 = uVar18 >> 6 ^ uVar18;
            uVar18 = ~(uVar18 << 0xb) + uVar18;
            uVar24 = uVar18 >> 0x10 ^ uVar18;
            uVar23 = *(uint *)((long)plVar16 + 0xc) & uVar24;
            piVar22 = (int *)(lVar14 + (long)(int)uVar23 * 8);
            iVar12 = *piVar22;
            if (iVar12 == 0) {
LAB_100288bb8:
              piVar19 = piVar22;
              iVar12 = *(int *)((long)plVar16 + 0x14);
            }
            else {
              uVar24 = (uVar18 >> 0x17) + ~uVar24;
              uVar24 = uVar24 * 0x1000 ^ uVar24;
              uVar24 = uVar24 >> 7 ^ uVar24;
              uVar24 = uVar24 * 4 ^ uVar24;
              piVar19 = (int *)0x0;
              uVar18 = 0;
              do {
                if (iVar12 == iVar21) goto LAB_100288d00;
                if (iVar12 == -1) {
                  piVar19 = piVar22;
                }
                if (uVar18 == 0) {
                  uVar18 = uVar24 >> 0x14 ^ uVar24 | 1;
                }
                uVar23 = uVar23 + uVar18 & *(uint *)((long)plVar16 + 0xc);
                piVar22 = (int *)(lVar14 + (long)(int)uVar23 * 8);
                iVar12 = *piVar22;
              } while (iVar12 != 0);
              if (piVar19 == (int *)0x0) goto LAB_100288bb8;
              *(undefined1 *)(piVar19 + 1) = 0;
              *piVar19 = 0;
              iVar12 = *(int *)((long)plVar16 + 0x14) + -1;
              *(int *)((long)plVar16 + 0x14) = iVar12;
            }
            *piVar19 = iVar21;
            *(char *)(piVar19 + 1) = cVar8;
            iVar20 = (int)plVar16[1];
            lVar14 = plVar16[2];
            iVar21 = (int)lVar14 + 1;
            *(int *)(plVar16 + 2) = iVar21;
            if (iVar20 <= (iVar12 + (int)lVar14 + 1) * 2) {
              iVar12 = *piVar19;
              iVar5 = iVar20 * 2;
              if (iVar21 * 6 < iVar20 * 2) {
                iVar5 = iVar20;
              }
              iVar21 = 0x40;
              if (iVar20 != 0) {
                iVar21 = iVar5;
              }
              FUN_10028aad2(plVar16,iVar21);
              lVar14 = *plVar16;
              if (lVar14 == 0) {
                lVar17 = (long)(int)plVar16[1];
                lVar25 = lVar17 * 8;
              }
              else {
                uVar18 = ~(iVar12 << 0xf) + iVar12;
                uVar18 = (uVar18 >> 10 ^ uVar18) * 9;
                uVar18 = uVar18 >> 6 ^ uVar18;
                uVar18 = ~(uVar18 << 0xb) + uVar18;
                uVar24 = uVar18 >> 0x10 ^ uVar18;
                uVar23 = *(uint *)((long)plVar16 + 0xc) & uVar24;
                lVar25 = (long)(int)uVar23;
                iVar21 = *(int *)(lVar14 + lVar25 * 8);
                if (iVar21 != iVar12) {
                  uVar24 = (uVar18 >> 0x17) + ~uVar24;
                  uVar24 = uVar24 * 0x1000 ^ uVar24;
                  uVar24 = uVar24 >> 7 ^ uVar24;
                  uVar24 = uVar24 * 4 ^ uVar24;
                  uVar18 = 0;
                  do {
                    if (iVar21 == 0) {
                      lVar17 = (long)(int)plVar16[1];
                      lVar25 = lVar14 + lVar17 * 8;
                      goto LAB_100288cd1;
                    }
                    if (uVar18 == 0) {
                      uVar18 = uVar24 >> 0x14 ^ uVar24 | 1;
                    }
                    uVar23 = uVar23 + uVar18 & *(uint *)((long)plVar16 + 0xc);
                    lVar25 = (long)(int)uVar23;
                    iVar21 = *(int *)(lVar14 + lVar25 * 8);
                  } while (iVar21 != iVar12);
                }
                lVar25 = lVar14 + lVar25 * 8;
                lVar17 = (long)(int)plVar16[1];
              }
LAB_100288cd1:
              if (lVar25 == lVar14 + lVar17 * 8) {
                uVar13 = FUN_1001cc310();
                cVar8 = _os_log_type_enabled(uVar13,0x10);
                if (cVar8 != '\0') {
                  local_238 = 2;
                  uStack_237 = 2;
                  uStack_236 = 0x822;
                  uStack_234 = 0x7a0a90;
                  uStack_230 = 1;
                  local_22c = 0x822;
                  local_22a = "p.first != end()";
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
            }
          }
        }
LAB_100288d00:
        iVar12 = 0;
        if (((*param_5 != '\0') || (local_260 == 0)) || (iVar2 == 0)) goto LAB_100287472;
        iVar12 = FUN_1002871ad(param_1,local_260,iVar2,param_5);
      }
    }
  }
  if ((iVar12 != -0x80) && (iVar12 != 0)) {
switchD_10028776a_caseD_f:
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 != '\0') {
      local_238 = 2;
      uStack_237 = 2;
      uStack_236 = 0x822;
      uStack_234 = 0x7a0a90;
      uStack_230 = 1;
      local_22c = 0x400;
      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar12);
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,0x12);
    }
  }
LAB_10028743a:
  if ((iVar12 != -0x80) && (iVar12 != 0)) {
LAB_100287651:
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 != '\0') {
      local_238 = 2;
      uStack_237 = 2;
      uStack_236 = 0x822;
      uStack_234 = 0x7a0a90;
      uStack_230 = 1;
      local_22c = 0x400;
      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar12);
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,0x12);
    }
  }
LAB_100287472:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100288e22:
  bVar6 = true;
  bVar7 = false;
LAB_100288e26:
  if ((*(byte *)((long)param_1 + 7) & 2) == 0) {
    bVar7 = bVar6;
  }
  if (bVar7) {
    *param_5 = '\x01';
  }
LAB_100288e3b:
  bVar7 = true;
  iVar21 = 0;
  bVar6 = false;
  uVar15 = 0;
  uVar11 = 0;
  local_250 = 0;
  iVar2 = 0;
  local_260 = 0;
  local_268 = 0;
  goto LAB_100288871;
}

