// name: FUN_10017e4d0
// address: 10017e4d0

undefined8 FUN_10017e4d0(long *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  short local_978;
  short local_976;
  byte local_778 [256];
  undefined4 local_678;
  short local_478;
  undefined1 local_476 [510];
  ushort local_278;
  short local_276;
  ushort local_238 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006864e0(uVar5);
    }
LAB_10017e5fe:
    FUN_1001782e9(0,0);
  }
  else {
    if (((short *)*param_1 == (short *)0x0) || (*(short *)*param_1 == 0)) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_10068646a(uVar5);
      }
      goto LAB_10017e5fe;
    }
    if (param_1[6] == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_1006863f4(uVar5);
      }
      goto LAB_10017e5fe;
    }
    uVar8 = 0xfd;
    if (*(uint *)(param_1 + 3) != 0) {
      uVar8 = *(uint *)(param_1 + 3);
    }
    cVar2 = FUN_10018ea7c(param_1[4],param_1[1]);
    puVar12 = (ushort *)*param_1;
    if (cVar2 == '\0') {
      FUN_1001e4c6b(puVar12,local_778);
      puVar12 = local_238;
      FUN_1001e4f4b(local_778,puVar12);
    }
    if ((int)param_1[2] == 0) {
      local_278 = 0;
    }
    else {
      local_278 = 1;
      sVar3 = (short)*(undefined4 *)((long)param_1 + 0x14);
      local_276 = 0x20;
      if (sVar3 != 0) {
        local_276 = sVar3;
      }
      FUN_1001e1b6d((int)param_1[2],&local_478);
      FUN_1001e1890(&local_478,&local_278);
    }
    local_678 = (uint)local_678._2_2_ << 0x10;
    if (param_1[1] == 0) {
      local_978 = 0;
LAB_10017e6ce:
      uVar4 = 0;
    }
    else {
      FUN_1001e1c39(param_1[1],&local_978);
      if (local_978 == 0) {
        uVar4 = (ushort)local_678;
      }
      else {
        if (local_976 != 0x2e) {
          local_678 = 0x2e0001;
        }
        FUN_1001e1890(&local_978,&local_678);
        uVar4 = (ushort)local_678;
        if ((ushort)local_678 == 1) {
          local_678 = local_678 & 0xffff0000;
          goto LAB_10017e6ce;
        }
      }
    }
    uVar10 = (uint)uVar4 + (uint)local_278;
    uVar11 = uVar10 + *puVar12;
    if ((uVar8 < uVar11) && (uVar5 = 0xffffffce, (uint)*puVar12 <= uVar11 - uVar8))
    goto LAB_10017e60c;
    uVar9 = uVar8 - uVar10;
    if (uVar8 < uVar11) {
      uVar11 = uVar8;
    }
    do {
      FUN_1001e3c85(puVar12,&local_478,uVar11 - uVar10);
      FUN_1001e3a23(&local_478);
      lVar6 = _CFStringCreateMutable(DAT_1008c4d90,0);
      if (lVar6 == 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          FUN_10068637e(uVar5);
        }
        FUN_1001782e9(0,0);
LAB_10017e825:
        if (local_478 == 0) {
          FUN_1001e3c85(puVar12,&local_478,uVar11 - uVar10);
        }
        if (local_278 != 0) {
          FUN_1001e1890(&local_278,&local_478);
        }
        if ((ushort)local_678 != 0) {
          FUN_1001e1890(&local_678,&local_478);
        }
        if ((code *)param_1[5] == (code *)0x0) {
          FUN_10017e1b7(&local_478);
        }
        else {
          (*(code *)param_1[5])();
        }
        FUN_1001e1c39(&local_478,param_1[6]);
        uVar5 = 0;
        goto LAB_10017e60c;
      }
      _CFStringAppendCharacters(lVar6,local_476,local_478);
      _CFStringNormalize(lVar6,0);
      lVar7 = _CFStringGetLength(lVar6);
      if ((cVar2 == '\0') && (lVar7 <= (long)(ulong)uVar9)) {
        FUN_1001e115f(lVar6,&local_978);
        FUN_1001e4c6b(&local_978,local_778);
        bVar1 = local_778[0];
        FUN_10017060f(lVar6);
        if (bVar1 <= uVar9) goto LAB_10017e825;
      }
      else {
        FUN_10017060f(lVar6);
        if (lVar7 <= (long)(ulong)uVar9) goto LAB_10017e825;
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != uVar10);
  }
  uVar5 = 0xffffffce;
LAB_10017e60c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

