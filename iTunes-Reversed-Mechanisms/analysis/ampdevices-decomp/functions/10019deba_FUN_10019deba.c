// name: FUN_10019deba
// address: 10019deba

void FUN_10019deba(long param_1,long param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  double dVar10;
  
  if (*(long *)(param_2 + 0x18) == param_1) {
    if (*(char *)(param_2 + 0x100) != '\0') {
      iVar3 = -0x80;
LAB_10019dee3:
      FUN_10019e085(param_2,1,iVar3);
      return;
    }
    if (*(double *)(param_2 + 0x38) <= 0.0) {
      bVar9 = false;
    }
    else {
      bVar9 = *(char *)(param_2 + 0x40) == '\0';
    }
    dVar1 = *(double *)(param_2 + 0x30);
    if ((bVar9) || (0.0 < dVar1)) {
      dVar10 = (double)FUN_1001ebd46();
      if (bVar9) {
        bVar9 = *(double *)(param_2 + 0x28) + *(double *)(param_2 + 0x38) < dVar10;
      }
      else {
        bVar9 = false;
      }
      if (dVar1 <= 0.0) {
        bVar5 = false;
      }
      else {
        bVar5 = *(double *)(param_2 + 0x28) + *(double *)(param_2 + 0x30) < dVar10;
      }
      if ((bool)(bVar5 | bVar9)) {
        iVar3 = -0x80;
        if (bVar9) {
          iVar3 = -0xcbb;
        }
        *(undefined1 *)(param_2 + 0x41) = 1;
        goto LAB_10019dee3;
      }
    }
    lVar4 = *(long *)(param_2 + 0x20);
    if (lVar4 != 0) {
      if (*(long *)(param_2 + 0x98) == 0) {
        uVar8 = 0x69646c65;
        lVar7 = -1;
        uVar6 = 0xffffffffffffffff;
      }
      else {
        lVar4 = FUN_1001731d8(*(long *)(param_2 + 0x98),
                              *(undefined8 *)PTR__kCFStreamPropertyFileCurrentOffset_10082e120);
        if (lVar4 == 0) {
          lVar7 = 0;
        }
        else {
          iVar3 = FUN_10016966d(lVar4,0);
          FUN_10017060f(lVar4);
          lVar7 = (long)iVar3;
        }
        lVar4 = *(long *)(param_2 + 0x20);
        uVar6 = *(undefined8 *)(param_2 + 0xa0);
        uVar8 = 0x7570726d;
      }
      iVar3 = FUN_1001ceb24(lVar4,uVar8,lVar7,uVar6,0);
      if (iVar3 != 0) goto LAB_10019dee3;
    }
    if (*(long *)(param_2 + 0x18) != 0) {
      FUN_1001eeea0(DAT_10070f2b8);
      return;
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_10069aff6(uVar6);
    }
    FUN_1001782e9(1,0);
  }
  return;
}

