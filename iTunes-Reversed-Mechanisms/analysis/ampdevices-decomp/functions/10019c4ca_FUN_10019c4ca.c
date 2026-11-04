// name: FUN_10019c4ca
// address: 10019c4ca

int FUN_10019c4ca(undefined8 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  puVar4 = (undefined4 *)FUN_1001c6429(0xa8);
  if (puVar4 == (undefined4 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_100699abc(uVar6);
    }
    FUN_1001782e9(0,0);
    return -0x6c;
  }
  iVar2 = FUN_1001e9c3e(puVar4 + 2);
  if (iVar2 == -0x80) goto LAB_10019c5c6;
  if (iVar2 != 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_100699a50(iVar2,uVar6);
    }
    goto LAB_10019c5c6;
  }
  uVar3 = 1;
  if (1 < param_2) {
    uVar3 = param_2;
  }
  puVar4[0x1d] = uVar3;
  if (1 >= param_2) goto LAB_10019c647;
  cVar1 = FUN_1001cdcc9("http-no-single-loader-thread",0);
  lVar5 = DAT_100890758;
  if (cVar1 != '\0') {
    FUN_1001e9de0(&DAT_100890710);
    lVar5 = DAT_1008906f0;
    if (DAT_1008906f0 == 0) {
      FUN_1001e9eb9(&DAT_100890710);
      lVar5 = FUN_1001ed73c(0,0);
      if (lVar5 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          FUN_1006998ee(uVar6);
        }
        FUN_1001782e9(0,0);
        FUN_1001e9de0(&DAT_100890710);
        FUN_1001e9eb9(&DAT_100890710);
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          FUN_100699964(uVar6);
        }
        FUN_1001782e9(0,0);
        *(undefined8 *)(puVar4 + 0x26) = 0;
        goto LAB_10019c6d9;
      }
      FUN_1001e9de0(&DAT_100890710);
    }
    else {
      FUN_10019f145(&DAT_1008906f0,&DAT_1008906f8,DAT_1008906f0);
    }
    FUN_10019ed28(&DAT_1008906e0,&DAT_1008906e8,lVar5);
    FUN_1001e9eb9(&DAT_100890710);
    *(long *)(puVar4 + 0x26) = lVar5;
LAB_10019c647:
    *puVar4 = 0x68746463;
    *param_1 = puVar4;
    return 0;
  }
  *(long *)(puVar4 + 0x26) = DAT_100890758;
  if (lVar5 != 0) goto LAB_10019c647;
LAB_10019c6d9:
  uVar6 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar6,0x10);
  if (cVar1 != '\0') {
    FUN_1006999da(uVar6);
  }
  iVar2 = 0;
  FUN_1001782e9(0,0);
LAB_10019c5c6:
  FUN_1001c64c1(puVar4);
  return iVar2;
}

