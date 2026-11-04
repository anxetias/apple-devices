// name: FUN_10019b160
// address: 10019b160

void FUN_10019b160(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  size_t sVar8;
  long lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  long local_78;
  undefined1 local_70;
  char *local_68;
  long local_60;
  double local_58;
  ulong local_40;
  long local_38;
  
  piVar2 = (int *)*param_4;
  if (piVar2 == (int *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_100698c2a(uVar6);
    }
LAB_10019b363:
    FUN_1001782e9(0,0);
    return;
  }
  if (*piVar2 != 0x6874646c) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_100698a52(uVar6);
    }
    goto LAB_10019b363;
  }
  if ((char)piVar2[10] != '\0') {
    if (param_1 == 0x64617461) {
      if (piVar2[0x10] - 200U < 100) {
        lVar4 = *(long *)(piVar2 + 0xc);
        if (lVar4 == 0) {
          lVar4 = 0;
          if (*(long *)(piVar2 + 0xe) != -1) {
            lVar4 = *(long *)(piVar2 + 0xe);
          }
          lVar4 = FUN_100170ea9(DAT_1008c4d90,lVar4);
          *(long *)(piVar2 + 0xc) = lVar4;
          if (lVar4 == 0) {
            if (*(code **)(piVar2 + 2) != (code *)0x0) {
              (**(code **)(piVar2 + 2))(0x65727220,0xffffffffffffff94,0,piVar2 + 4);
            }
            FUN_100199903(piVar2);
            return;
          }
        }
        FUN_1001710c1(lVar4,param_2,param_3);
      }
      goto LAB_10019b662;
    }
    if (param_1 == 0x65727220) {
      FUN_10017060f(*(undefined8 *)(piVar2 + 0xc));
      piVar2[0xc] = 0;
      piVar2[0xd] = 0;
      goto LAB_10019b662;
    }
    if ((param_1 == 0x68656472) &&
       (iVar1 = *(int *)(param_2 + 1), piVar2[0x10] = iVar1, iVar1 - 200U < 100)) {
      lVar4 = FUN_100171a6c(*param_2,&cf_cache_control);
      if (lVar4 == 0) {
        dVar10 = 0.0;
      }
      else {
        local_58 = 0.0;
        uVar5 = FUN_1001737e5(DAT_1008c4d90,0,lVar4);
        if (uVar5 != 0) {
          local_60 = lVar4;
          FUN_100174381(uVar5);
          local_40 = uVar5;
          auVar11 = FUN_100173d62(uVar5,&cf_max_age,1);
          if (auVar11._0_8_ == -1) {
            local_58 = 0.0;
          }
          else {
            lVar9 = auVar11._0_8_ + auVar11._8_8_;
            lVar4 = FUN_1001737f8(local_40);
            local_58 = 0.0;
            lVar4 = FUN_100173623(0,local_40,lVar9,lVar4 - lVar9);
            if (lVar4 != 0) {
              local_58 = 0.0;
              lVar9 = FUN_100173d62(lVar4,&cf__,0);
              if (lVar9 != -1) {
                local_38 = lVar4;
                lVar4 = FUN_1001737f8(lVar4);
                local_58 = 0.0;
                lVar9 = FUN_100173623(0,local_38,lVar9 + 1,lVar4 - (lVar9 + 1));
                lVar4 = local_38;
                if (lVar9 != 0) {
                  local_58 = (double)_CFStringGetDoubleValue(lVar9);
                  FUN_10017060f(lVar9);
                  local_58 = (double)((long)(local_58 - DAT_10070e4c0) & (long)local_58 >> 0x3f |
                                     (long)local_58);
                  lVar4 = local_38;
                }
              }
              FUN_10017060f(lVar4);
            }
          }
          FUN_10017060f(local_40);
          lVar4 = local_60;
        }
        FUN_10017060f(lVar4);
        dVar10 = local_58;
      }
      *(undefined8 *)(piVar2 + 0xe) = param_2[2];
      uVar6 = FUN_100171a6c(*param_2,&cf_Content_Type);
      *(undefined8 *)(piVar2 + 0x12) = uVar6;
      param_2[3] = dVar10;
    }
  }
  if ((((param_1 != 0x68656472) || ((char)piVar2[0x14] == '\0')) ||
      (99 < *(int *)(param_2 + 1) - 300U)) || (*(long *)(piVar2 + 2) == 0)) goto LAB_10019b662;
  FUN_1001c62d9(&local_78,0x10);
  lVar4 = FUN_100171a6c(*param_2,&cf_Location);
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_100698bb4(uVar6);
    }
    FUN_1001782e9(0,0);
    local_40 = (ulong)*(uint *)(param_2 + 1);
    local_58 = 0.0;
    local_60 = 0;
    lVar4 = 0;
    pcVar7 = (char *)0x0;
  }
  else {
    local_38 = lVar4;
    pcVar7 = (char *)FUN_1001dfadb(lVar4);
    if (pcVar7 == (char *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        FUN_100698b3e(uVar6);
      }
      FUN_1001782e9(0,0);
      local_40 = 0xffffff94;
      local_58 = 0.0;
      local_60 = 0;
      lVar4 = local_38;
      pcVar7 = (char *)0x0;
    }
    else {
      local_58 = (double)DAT_1008c4d90;
      sVar8 = _strlen(pcVar7);
      local_68 = pcVar7;
      uVar5 = FUN_10017444a(local_58,pcVar7,sVar8,0x8000100,0);
      if (uVar5 == 0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          FUN_100698ac8(uVar6);
        }
        local_58 = 0.0;
        FUN_1001782e9(0,0);
        local_40 = 0xffffff94;
      }
      else {
        local_58 = (double)uVar5;
        local_60 = FUN_100174812(uVar5);
        if (local_60 != 0) {
          FUN_10017060f(local_78);
          local_78 = local_38;
          local_70 = *(int *)(param_2 + 1) == 0x12d;
          local_40 = 0;
          lVar4 = 0;
          pcVar7 = local_68;
          goto LAB_10019b634;
        }
        local_40 = (ulong)*(uint *)(param_2 + 1);
      }
      local_60 = 0;
      lVar4 = local_38;
      pcVar7 = local_68;
    }
  }
LAB_10019b634:
  FUN_10017060f(lVar4);
  FUN_1001c64c1(pcVar7);
  FUN_10017060f(local_58);
  FUN_10017060f(local_60);
  if (((int)local_40 == 0) &&
     ((**(code **)(piVar2 + 2))(0x72646972,&local_78,(long)piVar2 + 0x51,piVar2 + 4),
     *(char *)((long)piVar2 + 0x51) != '\0')) {
    *(long *)(piVar2 + 0x16) = local_78;
    return;
  }
  FUN_10017060f(local_78);
LAB_10019b662:
  if (*(code **)(piVar2 + 2) == (code *)0x0) {
    return;
  }
  (**(code **)(piVar2 + 2))(param_1,param_2,param_3,piVar2 + 4);
  return;
}

