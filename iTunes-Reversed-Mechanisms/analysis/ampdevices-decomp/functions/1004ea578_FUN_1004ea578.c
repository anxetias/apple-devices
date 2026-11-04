// name: FUN_1004ea578
// address: 1004ea578

int FUN_1004ea578(long param_1,long param_2,long param_3,ulong param_4,long param_5,long param_6,
                 long param_7)

{
  undefined4 uVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined2 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint local_94;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  short local_7a;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60;
  uint local_5e;
  undefined2 local_5a;
  uint local_58;
  undefined2 local_54;
  uint local_52;
  undefined2 local_4e;
  undefined8 local_4c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar9 = param_1 + 0x14cd0;
  if (param_2 != 0) {
    lVar9 = param_2;
  }
  if (param_5 == 0) {
    if (param_7 == 0 || param_6 == 0) {
      local_7a = 1;
      local_88 = 0;
      bVar3 = 0;
      bVar15 = false;
      bVar14 = false;
      bVar13 = false;
      uVar5 = 0;
      local_84 = 0;
      local_94 = 0;
      uVar12 = 0;
      local_80 = 0;
    }
    else {
      local_7a = *(short *)(param_7 + 0x1a);
      bVar13 = *(long *)(param_7 + 0x78) != 0;
      bVar14 = true;
      if (!bVar13) {
        bVar14 = *(long *)(param_7 + 0x70) != 0;
      }
      local_94 = *(uint *)(param_6 + 0x1014);
      local_80 = *(uint *)(param_6 + 0x1028);
      local_88 = *(undefined4 *)(param_6 + 0x1454);
      uVar12 = *(undefined2 *)(param_7 + 0x16);
      local_84 = *(undefined4 *)(param_6 + 0x1038);
      uVar5 = *(uint *)(param_7 + 0x1c);
      bVar15 = *(long *)(param_7 + 0xa0) != 0;
      bVar3 = *(byte *)(param_7 + 0xab);
    }
  }
  else {
    FUN_10031ab0f(param_5,&local_7a,1);
    local_80 = (uint)*(ushort *)(param_5 + 0x54);
    local_88 = *(undefined4 *)(param_5 + 0x50);
    uVar12 = *(undefined2 *)(param_5 + 0x56);
    local_94 = *(uint *)(param_5 + 100);
    local_84 = FUN_1002b6093(param_5);
    uVar5 = FUN_100474dd0(*(undefined8 *)(param_5 + 8));
    lVar2 = *(long *)(param_5 + 0x10);
    bVar13 = *(long *)(lVar2 + 8) != 0;
    bVar14 = true;
    if (!bVar13) {
      bVar14 = *(long *)(lVar2 + 0x20) != 0;
    }
    bVar15 = *(long *)(lVar2 + 0x30) != 0;
    bVar3 = (byte)(*(uint *)(param_5 + 0x48) >> 0x13) & 1;
  }
  if (*(char *)(lVar9 + 0x48) == '\0') {
    bVar16 = false;
  }
  else {
    bVar16 = *(char *)(param_1 + 0x390) != '\0';
  }
  if ((bVar15) && (*(char *)(param_1 + 0x3a9) == '\0')) {
    iVar8 = 0x36;
    goto LAB_1004eb039;
  }
  if (bVar3 != 0) {
    if ((uVar5 & 4) == 0) {
      if (*(char *)(param_1 + 0x3ad) == '\0') {
        iVar8 = 0x37;
        goto LAB_1004eb039;
      }
    }
    else if (*(char *)(param_1 + 0x3ae) == '\0') {
      iVar8 = 0x42;
      goto LAB_1004eb039;
    }
  }
  uVar5 = (uint)param_4;
  if (0x4d50341f < (int)uVar5) {
    if (0x666c6162 < (int)uVar5) {
      if ((int)uVar5 < 0x69706720) {
        if (uVar5 != 0x666c6163) {
          if (uVar5 == 0x69626f6f) goto LAB_1004eaa36;
          if (uVar5 == 0x69706120) {
            if (*(char *)(param_1 + 0x37d) == '\0') goto LAB_1004eade1;
            iVar8 = FUN_1004ec9f8(param_1,param_3);
            goto LAB_1004eae82;
          }
          goto LAB_1004eae8c;
        }
        iVar8 = FUN_10035da29(local_88,*(undefined4 *)(param_1 + 0x66b0),0x666c6163,param_1 + 0x458,
                              0,local_80,uVar12,local_84);
LAB_1004eabb9:
        if (bVar16 == false) goto LAB_1004eae82;
        if ((iVar8 == 0) && (local_80 <= *(ushort *)(param_1 + 0x14df6))) {
LAB_1004eabe0:
          iVar8 = 0;
          goto LAB_1004eb039;
        }
        goto LAB_1004eb033;
      }
      if (uVar5 != 0x69706720) {
        if ((uVar5 == 0x69746520) || (uVar5 == 0x69746c70)) {
          iVar8 = 0xc;
          if (*(char *)(param_1 + 0x39b) != '\0') {
            iVar8 = 0;
          }
          goto LAB_1004eb039;
        }
        goto LAB_1004eae8c;
      }
      if (*(char *)(param_1 + 0x36a) == '\0') goto LAB_1004eade1;
      iVar8 = FUN_1004ec2b4(param_1,param_3);
      goto LAB_1004eae82;
    }
    if ((int)uVar5 < 0x4d6f6f56) {
      if (uVar5 + 0xb2afb8ce < 2) {
        iVar8 = 0xd;
        if (2 < (ushort)(local_7a - 0x12dU)) goto LAB_1004eb039;
        iVar8 = FUN_10035da29(local_88,*(undefined4 *)(param_1 + 0x66b0),0x6d703320,param_1 + 0x458,
                              0,local_80,uVar12,local_84);
        goto LAB_1004eabb9;
      }
      if (uVar5 != 0x4d503420) goto LAB_1004eae8c;
LAB_1004eaa84:
      if (*(char *)(param_1 + 0x346) != '\0') {
        iVar8 = 0;
        if (*(char *)(param_1 + 0x34d) != '\0') goto LAB_1004eb039;
        iVar8 = 0;
        if (param_5 == 0) {
          iVar6 = FUN_10035f30f(local_88,param_3,*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x72c,
                                param_1 + 0x458,local_7a,local_80,uVar12,local_84,bVar13,bVar14);
          if (iVar6 == 0) goto LAB_1004eb039;
          if (param_3 != 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar11 = DAT_1008c75b8;
            cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar4 != '\0') {
              FUN_10017d520(&local_68,param_3);
              local_74 = FUN_1001b83ae(&local_68);
              pcVar10 = "file \"%{public}s\" has an unsupported video format";
              goto LAB_1004ead45;
            }
          }
        }
        else {
          iVar6 = FUN_10035f4f9(param_5);
          if (iVar6 == 0) goto LAB_1004eb039;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar11 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar4 != '\0') {
            FUN_100476ac1(&local_68,*(undefined8 *)(param_5 + 8));
            local_74 = FUN_1001b83ae(&local_68);
            pcVar10 = "track \"%{public}s\" has an unsupported video format";
LAB_1004ead45:
            local_78 = 0x8220102;
            __os_log_impl(0x100000000,uVar11,1,pcVar10,&local_78,0xc);
            FUN_1001b7a50(&local_68);
          }
        }
        iVar8 = 0xe;
        if (iVar6 == 0x38) {
          iVar8 = 0x38;
        }
        goto LAB_1004eb039;
      }
    }
    else {
      if (uVar5 == 0x4d6f6f56) goto LAB_1004eaa84;
      if (uVar5 != 0x50444620) {
        if (uVar5 == 0x57415645) {
          if ((bVar16 != false) && (iVar8 = 1, *(ushort *)(param_1 + 0x14df6) < local_80))
          goto LAB_1004eb039;
          iVar8 = FUN_10035da29(local_88,*(undefined4 *)(param_1 + 0x66b0),0x77617665,
                                param_1 + 0x458,0,local_80,uVar12,local_84);
          goto LAB_1004eae82;
        }
        goto LAB_1004eae8c;
      }
      if (*(char *)(param_1 + 0x39e) != '\0') {
        if (param_5 == 0) goto LAB_1004eabe0;
        iVar8 = 0;
        uVar5 = FUN_1004744bf(*(undefined8 *)(param_5 + 8),0);
        if (((uVar5 & 0x818000) == 0x800000) || (*(char *)(param_1 + 0x151d0) == '\0'))
        goto LAB_1004eb039;
      }
    }
LAB_1004eade1:
    iVar8 = 0xc;
    goto LAB_1004eb039;
  }
  if ((int)uVar5 < 0x41554458) {
    if ((int)uVar5 < 0x33677070) {
      if (((uVar5 == 0x33673220) || (uVar5 == 0x33677020)) || (uVar5 == 0x33677032)) {
LAB_1004ea9de:
        if (*(char *)(param_1 + 0x375) != '\0') goto LAB_1004eaa84;
      }
    }
    else {
      if (uVar5 == 0x33677070) goto LAB_1004ea9de;
      if (uVar5 == 0x41494646) {
        iVar8 = 1;
        if (bVar16 != false) goto LAB_1004eb039;
        iVar8 = FUN_10035da29(local_88,*(undefined4 *)(param_1 + 0x66b0),0x61696666,param_1 + 0x458,
                              0,local_80,uVar12,local_84);
        goto LAB_1004eae82;
      }
      if (uVar5 == 0x41554442) {
        param_1 = param_1 + 0x458;
        lVar9 = FUN_10035cf53(param_1,0x61613220);
        iVar8 = 0;
        if ((lVar9 != 0) || (lVar9 = FUN_10035cf53(param_1,0x61613320), lVar9 != 0))
        goto LAB_1004eb039;
        lVar9 = FUN_10035cf53(param_1,0x61613420);
        goto LAB_1004eac84;
      }
    }
LAB_1004eae8c:
    if (param_5 != 0) goto LAB_1004eae95;
    iVar8 = 0xb;
    if (param_3 == 0) goto LAB_1004eb039;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar11 = DAT_1008c75b8;
    cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar4 == '\0') goto LAB_1004eb039;
    FUN_10017d520(&local_78,param_3);
    local_4c = FUN_1001b83ae(&local_78);
    pcVar10 = "sync> unsupported file type \'%c%c%c%c\' for file \"%{public}s\"";
  }
  else {
    if ((int)uVar5 < 0x4d344220) {
      if (uVar5 == 0x41554458) {
        lVar9 = FUN_10035cf53(param_1 + 0x458,0x61617820);
LAB_1004eac84:
        iVar8 = 0xd;
        if (lVar9 != 0) {
          iVar8 = 0;
        }
        goto LAB_1004eb039;
      }
      if (uVar5 == 0x45505542) {
LAB_1004eaa36:
        if (*(char *)(param_1 + 0x39c) != '\0') {
          if ((uVar5 == 0x69626f6f) && (*(char *)(param_1 + 0x39d) == '\0')) {
            iVar8 = 0xc;
            if (*(int *)(param_1 + 0x66b0) == 0x69506164) {
              iVar8 = 0x30;
            }
          }
          else {
            cVar4 = FUN_10017fbfb(param_3);
            iVar8 = (uint)(cVar4 == '\0') * 3;
          }
          goto LAB_1004eb039;
        }
        goto LAB_1004eade1;
      }
      if (uVar5 == 0x4d344120) goto LAB_1004eae15;
      goto LAB_1004eae8c;
    }
    if ((int)uVar5 < 0x4d345220) {
      if ((uVar5 != 0x4d344220) && (uVar5 != 0x4d345020)) goto LAB_1004eae8c;
LAB_1004eae15:
      uVar1 = *(undefined4 *)(param_1 + 0x66b0);
      uVar7 = FUN_10035d3fb(local_7a);
      iVar8 = FUN_10035da29(local_88,uVar1,uVar7,param_1 + 0x458,bVar13,local_80,uVar12,local_84);
      if ((bVar16 & (bVar13 ^ 1U)) == 1) {
        if (iVar8 == 0) {
          iVar8 = 0;
          if ((uVar5 == 0x4d345220) || (local_80 <= *(ushort *)(param_1 + 0x14df6)))
          goto LAB_1004eb039;
        }
        else if (uVar5 == 0x4d345220) goto LAB_1004eae82;
LAB_1004eb033:
        iVar8 = 1;
        goto LAB_1004eb039;
      }
LAB_1004eae82:
      if (iVar8 != 0xb) goto LAB_1004eb039;
      goto LAB_1004eae8c;
    }
    if (uVar5 != 0x4d345220) {
      if (uVar5 == 0x4d345620) goto LAB_1004eaa84;
      goto LAB_1004eae8c;
    }
    if (param_5 == 0) {
      bVar3 = local_94 < 0x7531 & (bVar13 ^ 1U) & local_7a == 0x1f6;
    }
    else {
      bVar3 = FUN_1002bcfc8(*(undefined8 *)(param_5 + 8));
    }
    if (*(char *)(param_1 + 0x376) == '\0') {
      if (*(char *)(param_1 + 0x377) != '\0') {
        if (bVar3 == 0) goto LAB_1004eade1;
        if ((param_5 != 0) && (bVar13 != false)) goto LAB_1004eadd0;
        goto LAB_1004eadff;
      }
      goto LAB_1004eae8c;
    }
    if (bVar13 == false) {
      if ((bVar3 == 0) && (*(char *)(param_1 + 0x378) == '\0')) goto LAB_1004eae8c;
LAB_1004eadff:
      iVar8 = 0x2a;
      if (40000 < local_94) goto LAB_1004eb039;
      goto LAB_1004eae15;
    }
    if (param_5 == 0) goto LAB_1004eadff;
LAB_1004eadd0:
    cVar4 = FUN_1002b1888(param_5);
    if (cVar4 != '\0') goto LAB_1004eadff;
LAB_1004eae95:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar11 = DAT_1008c75b8;
    cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
    iVar8 = 0xb;
    if (cVar4 == '\0') goto LAB_1004eb039;
    FUN_100476ac1(&local_78,*(undefined8 *)(param_5 + 8));
    local_4c = FUN_1001b83ae(&local_78);
    pcVar10 = "sync> unsupported file type \'%c%c%c%c\' for track \"%{public}s\"";
  }
  local_52 = uVar5 & 0xff;
  local_58 = (uint)((param_4 & 0xffffffff) >> 8) & 0xff;
  local_5e = (uint)((param_4 & 0xffffffff) >> 0x10) & 0xff;
  local_64 = uVar5 >> 0x18;
  local_4e = 0x822;
  local_54 = 0x400;
  local_5a = 0x400;
  local_60 = 0x400;
  local_68 = 0x4000502;
  __os_log_impl(0x100000000,uVar11,1,pcVar10,&local_68,0x24);
  FUN_1001b7a50(&local_78);
  iVar8 = 0xb;
LAB_1004eb039:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8;
}

