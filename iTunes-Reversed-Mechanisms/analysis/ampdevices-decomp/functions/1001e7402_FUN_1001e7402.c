// name: FUN_1001e7402
// address: 1001e7402

void FUN_1001e7402(uint param_1,ulong param_2,undefined2 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  cfstringStruct *pcVar11;
  int iVar12;
  uint uVar13;
  double dVar14;
  bool bVar15;
  int local_5c;
  int *local_58;
  undefined2 *local_50;
  uint local_48;
  uint local_44;
  double local_40;
  undefined1 local_31;
  
  *param_3 = 0;
  local_50 = param_3;
  uVar10 = param_1;
  if ((param_2 & 1) != 0) {
    FUN_100177e94(param_1,&local_48);
    uVar10 = local_48;
  }
  local_48 = uVar10;
  uVar10 = local_48;
  uVar13 = (uint)param_2;
  if ((char)param_2 < '\0') {
    dVar14 = 1.97626258336499e-323;
    if ((param_2 & 0x10) != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006c00fe(uVar4);
      }
LAB_1001e74bc:
      FUN_1001782e9(0,0);
    }
  }
  else if ((uVar13 >> 8 & 1) == 0) {
    dVar14 = 1.48219693752374e-323;
    if ((param_2 & 0x40) == 0) {
      dVar14 = (double)(ulong)((uint)(param_2 >> 1) & 1);
    }
  }
  else {
    dVar14 = 9.88131291682493e-324;
    if ((param_2 & 0x10) != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006c0174(uVar4);
      }
      goto LAB_1001e74bc;
    }
  }
  iVar12 = 0;
  if ((param_2 & 0x10) != 0) {
    iVar12 = ((uVar13 & 0x20) >> 4) + 1;
  }
  if ((DAT_1008a2a18 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_1008a2a18), iVar2 != 0)) {
    FUN_1001c0fbe(FUN_1001e81a1,0,0,0,0);
    ___cxa_guard_release(&DAT_1008a2a18);
  }
  cVar1 = FUN_1001edfc7();
  if (cVar1 == '\0') {
LAB_1001e7696:
    lVar3 = FUN_1001e7935(dVar14,iVar12);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006c0438(uVar4);
      }
      FUN_1001782e9(0,0);
      return;
    }
  }
  else {
    local_40 = dVar14;
    lVar3 = _CFLocaleCopyCurrent();
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006c01ea(uVar4);
      }
      FUN_1001782e9(0,0);
    }
    lVar5 = _CFTimeZoneCopyDefault();
    local_44 = uVar10;
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006c0260(uVar4);
      }
      FUN_1001782e9(0,0);
    }
    uVar10 = local_44;
    cVar1 = FUN_100170633(lVar3,DAT_1008a2a20);
    if ((cVar1 == '\0') || (cVar1 = FUN_100170633(lVar5,DAT_1008a2a28), cVar1 == '\0')) {
      FUN_1001e81a1();
      uVar4 = FUN_1001705fc(lVar3);
      FUN_10017060f(DAT_1008a2a20);
      DAT_1008a2a20 = uVar4;
      uVar4 = FUN_1001705fc(lVar5);
      FUN_10017060f(DAT_1008a2a28);
      DAT_1008a2a28 = uVar4;
      uVar10 = local_44;
    }
    FUN_10017060f(lVar5);
    FUN_10017060f(lVar3);
    FUN_1001e821c();
    local_5c = SUB84(local_40,0) * 0x10000 + iVar12;
    local_58 = &local_5c;
    lVar3 = FUN_100411ddc(&DAT_1008a2a30,&local_5c,&DAT_100712240,&local_58,&local_31);
    lVar3 = *(long *)(lVar3 + 0x28);
    if (lVar3 == 0) {
      lVar3 = FUN_1001e7935(local_40,iVar12);
      local_58 = &local_5c;
      lVar5 = FUN_100411ddc(&DAT_1008a2a30,&local_5c,&DAT_100712240,&local_58,&local_31);
      *(long *)(lVar5 + 0x28) = lVar3;
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006c02d6(uVar4);
        }
        lVar3 = 0;
        FUN_1001782e9(0,0);
      }
    }
    lVar3 = FUN_1001705fc(lVar3);
    dVar14 = local_40;
    if (lVar3 == 0) goto LAB_1001e7696;
  }
  if ((uVar13 >> 10 & 1) == 0) {
LAB_1001e777d:
    if ((uVar13 >> 0xc & 1) == 0) {
      lVar5 = FUN_1001713b1(DAT_1008c4d90,lVar3);
    }
    else {
      uVar4 = *(undefined8 *)PTR__kCFDateFormatterTimeZone_10082e068;
      local_40 = (double)uVar10 - *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008;
      uVar8 = _CFDateFormatterCopyProperty(lVar3,uVar4);
      uVar9 = _CFTimeZoneCreateWithTimeIntervalFromGMT(0,0);
      _CFDateFormatterSetProperty(lVar3,uVar4,uVar9);
      lVar5 = FUN_1001713b1(local_40,DAT_1008c4d90,lVar3);
      _CFDateFormatterSetProperty(lVar3,uVar4,uVar8);
      FUN_10017060f(uVar8);
      FUN_10017060f(uVar9);
    }
    if (lVar5 != 0) {
      FUN_1001e115f(lVar5,local_50);
      goto LAB_1001e787a;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c03c2(uVar4);
    }
  }
  else {
    if ((param_2 & 0x10) == 0) {
      bVar15 = (uVar13 >> 0xb & 1) != 0;
      pcVar6 = &cf_Mdyyyy;
      pcVar11 = &cf_MMddyyyy;
    }
    else if ((param_2 & 0x20) == 0) {
      bVar15 = (uVar13 >> 0xb & 1) != 0;
      pcVar6 = &cf_Mdyyyyhhmm;
      pcVar11 = &cf_MMddyyyyhhmm;
    }
    else {
      bVar15 = (uVar13 >> 0xb & 1) != 0;
      pcVar6 = &cf_Mdyyyyhhmmss;
      pcVar11 = &cf_MMddyyyyhhmmss;
    }
    if (!bVar15) {
      pcVar11 = pcVar6;
    }
    lVar5 = FUN_100171d7b();
    if (lVar5 != 0) {
      lVar7 = FUN_1001712ae(DAT_1008c4d90,pcVar11,0,lVar5);
      if (lVar7 != 0) {
        FUN_100171340(lVar3,lVar7);
        FUN_10017060f(lVar7);
      }
      FUN_10017060f(lVar5);
      goto LAB_1001e777d;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c034c(uVar4);
    }
  }
  lVar5 = 0;
  FUN_1001782e9(0,0);
LAB_1001e787a:
  FUN_10017060f(lVar5);
  FUN_10017060f(lVar3);
  return;
}

