// name: FUN_100159cf4
// address: 100159cf4

undefined8 FUN_100159cf4(long param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  lVar1 = param_1 + 0x10;
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = lVar1;
  if (lVar4 == 0) {
LAB_100159d2b:
    lVar3 = lVar1;
  }
  else {
    do {
      bVar7 = *(ulong *)(lVar4 + 0x20) < param_2;
      if (!bVar7) {
        lVar3 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar7 * 8);
    } while (lVar4 != 0);
    if ((lVar3 == lVar1) || (param_2 < *(ulong *)(lVar3 + 0x20))) goto LAB_100159d2b;
  }
  lVar4 = param_1 + 0x28;
  lVar5 = *(long *)(param_1 + 0x28);
  lVar6 = lVar4;
  if (lVar5 == 0) {
LAB_100159d61:
    lVar6 = lVar4;
  }
  else {
    do {
      bVar7 = *(ulong *)(lVar5 + 0x20) < param_2;
      if (!bVar7) {
        lVar6 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar7 * 8);
    } while (lVar5 != 0);
    if ((lVar6 == lVar4) || (param_2 < *(ulong *)(lVar6 + 0x20))) goto LAB_100159d61;
  }
  if (lVar3 == lVar1) {
    if (lVar6 != lVar4) {
      return 1;
    }
  }
  else if ((lVar6 != lVar4) && (*(char *)(lVar3 + 0x28) != *(char *)(lVar6 + 0x28))) {
    return 1;
  }
  lVar1 = param_1 + 0x40;
  lVar4 = *(long *)(param_1 + 0x40);
  lVar3 = lVar1;
  if (lVar4 == 0) {
LAB_100159dbc:
    lVar3 = lVar1;
  }
  else {
    do {
      bVar7 = *(ulong *)(lVar4 + 0x20) < param_2;
      if (!bVar7) {
        lVar3 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar7 * 8);
    } while (lVar4 != 0);
    if ((lVar3 == lVar1) || (param_2 < *(ulong *)(lVar3 + 0x20))) goto LAB_100159dbc;
  }
  lVar4 = param_1 + 0x58;
  lVar5 = *(long *)(param_1 + 0x58);
  lVar6 = lVar4;
  if (lVar5 == 0) {
LAB_100159df2:
    lVar6 = lVar4;
  }
  else {
    do {
      bVar7 = *(ulong *)(lVar5 + 0x20) < param_2;
      if (!bVar7) {
        lVar6 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar7 * 8);
    } while (lVar5 != 0);
    if ((lVar6 == lVar4) || (param_2 < *(ulong *)(lVar6 + 0x20))) goto LAB_100159df2;
  }
  if (lVar3 == lVar1) {
    if (lVar6 != lVar4) {
      return 1;
    }
  }
  else if ((lVar6 != lVar4) && (*(int *)(lVar3 + 0x28) != *(int *)(lVar6 + 0x28))) {
    return 1;
  }
  lVar1 = param_1 + 0x70;
  lVar4 = *(long *)(param_1 + 0x70);
  lVar3 = lVar1;
  if (lVar4 == 0) {
LAB_100159e4d:
    lVar3 = lVar1;
  }
  else {
    do {
      bVar7 = *(ulong *)(lVar4 + 0x20) < param_2;
      if (!bVar7) {
        lVar3 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar7 * 8);
    } while (lVar4 != 0);
    if ((lVar3 == lVar1) || (param_2 < *(ulong *)(lVar3 + 0x20))) goto LAB_100159e4d;
  }
  lVar4 = param_1 + 0x88;
  lVar5 = *(long *)(param_1 + 0x88);
  lVar6 = lVar4;
  if (lVar5 == 0) {
LAB_100159e89:
    lVar6 = lVar4;
  }
  else {
    do {
      bVar7 = *(ulong *)(lVar5 + 0x20) < param_2;
      if (!bVar7) {
        lVar6 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar7 * 8);
    } while (lVar5 != 0);
    if ((lVar6 == lVar4) || (param_2 < *(ulong *)(lVar6 + 0x20))) goto LAB_100159e89;
  }
  if (lVar3 == lVar1) {
    if (lVar6 != lVar4) {
      return 1;
    }
  }
  else if ((lVar6 != lVar4) && (*(int *)(lVar3 + 0x28) != *(int *)(lVar6 + 0x28))) {
    return 1;
  }
  lVar1 = param_1 + 0xa0;
  lVar4 = *(long *)(param_1 + 0xa0);
  lVar3 = lVar1;
  if (lVar4 == 0) {
LAB_100159eea:
    lVar3 = lVar1;
  }
  else {
    do {
      bVar7 = *(ulong *)(lVar4 + 0x20) < param_2;
      if (!bVar7) {
        lVar3 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar7 * 8);
    } while (lVar4 != 0);
    if ((lVar3 == lVar1) || (param_2 < *(ulong *)(lVar3 + 0x20))) goto LAB_100159eea;
  }
  lVar4 = param_1 + 0xb8;
  lVar5 = *(long *)(param_1 + 0xb8);
  lVar6 = lVar4;
  if (lVar5 == 0) {
LAB_100159f26:
    lVar6 = lVar4;
  }
  else {
    do {
      bVar7 = *(ulong *)(lVar5 + 0x20) < param_2;
      if (!bVar7) {
        lVar6 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar7 * 8);
    } while (lVar5 != 0);
    if ((lVar6 == lVar4) || (param_2 < *(ulong *)(lVar6 + 0x20))) goto LAB_100159f26;
  }
  if (lVar3 == lVar1) {
    if (lVar6 != lVar4) {
      return 1;
    }
  }
  else if ((lVar6 != lVar4) && (*(long *)(lVar3 + 0x28) != *(long *)(lVar6 + 0x28))) {
    return 1;
  }
  lVar1 = param_1 + 0xd0;
  lVar4 = *(long *)(param_1 + 0xd0);
  lVar3 = lVar1;
  if (lVar4 == 0) {
LAB_100159f88:
    lVar3 = lVar1;
  }
  else {
    do {
      bVar7 = *(ulong *)(lVar4 + 0x20) < param_2;
      if (!bVar7) {
        lVar3 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar7 * 8);
    } while (lVar4 != 0);
    if ((lVar3 == lVar1) || (param_2 < *(ulong *)(lVar3 + 0x20))) goto LAB_100159f88;
  }
  lVar4 = *(long *)(param_1 + 0xe8);
  param_1 = param_1 + 0xe8;
  lVar5 = param_1;
  if (lVar4 != 0) {
    do {
      bVar7 = *(ulong *)(lVar4 + 0x20) < param_2;
      if (!bVar7) {
        lVar5 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar7 * 8);
    } while (lVar4 != 0);
    if ((lVar5 != param_1) && (*(ulong *)(lVar5 + 0x20) <= param_2)) goto LAB_100159fc7;
  }
  lVar5 = param_1;
LAB_100159fc7:
  if (lVar3 == lVar1) {
    if (lVar5 != param_1) {
      return 1;
    }
  }
  else if ((lVar5 != param_1) &&
          (cVar2 = FUN_100170633(*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar5 + 0x28)),
          cVar2 == '\0')) {
    return 1;
  }
  return 0;
}

