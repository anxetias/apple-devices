// name: FUN_1001ad344
// address: 1001ad344

void FUN_1001ad344(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  
  bVar8 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar8;
  while( true ) {
    if (bVar8) {
      return;
    }
    plVar6 = (long *)param_2[2];
    if ((char)plVar6[3] != '\0') break;
    plVar4 = (long *)plVar6[2];
    lVar7 = *plVar4;
    if ((long *)lVar7 == plVar6) {
      lVar1 = plVar4[1];
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x18) == '\x01')) {
        if ((long *)*plVar6 != param_2) {
          plVar2 = (long *)plVar6[1];
          lVar7 = *plVar2;
          plVar6[1] = lVar7;
          plVar5 = plVar6;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 0x10) = plVar6;
            plVar4 = (long *)plVar6[2];
            plVar5 = (long *)*plVar4;
          }
          plVar2[2] = (long)plVar4;
          plVar4[plVar5 != plVar6] = (long)plVar2;
          *plVar2 = (long)plVar6;
          plVar6[2] = (long)plVar2;
          plVar4 = (long *)plVar2[2];
          lVar7 = *plVar4;
          plVar6 = plVar2;
        }
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        lVar1 = *(long *)(lVar7 + 8);
        *plVar4 = lVar1;
        if (lVar1 != 0) {
          *(long **)(lVar1 + 0x10) = plVar4;
        }
        puVar3 = (undefined8 *)plVar4[2];
        *(undefined8 **)(lVar7 + 0x10) = puVar3;
        puVar3[(long *)*puVar3 != plVar4] = lVar7;
        *(long **)(lVar7 + 8) = plVar4;
        plVar4[2] = lVar7;
        return;
      }
    }
    else if ((lVar7 == 0) || (lVar1 = lVar7, *(char *)(lVar7 + 0x18) == '\x01')) {
      plVar2 = (long *)*plVar6;
      if (plVar2 == param_2) {
        lVar7 = plVar2[1];
        *plVar6 = lVar7;
        if (lVar7 != 0) {
          *(long **)(lVar7 + 0x10) = plVar6;
          plVar4 = (long *)plVar6[2];
        }
        plVar2[2] = (long)plVar4;
        plVar4[(long *)*plVar4 != plVar6] = (long)plVar2;
        plVar2[1] = (long)plVar6;
        plVar6[2] = (long)plVar2;
        plVar4 = (long *)plVar2[2];
        plVar6 = plVar2;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar4 + 3) = 0;
      plVar6 = (long *)plVar4[1];
      lVar7 = *plVar6;
      plVar4[1] = lVar7;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 0x10) = plVar4;
      }
      puVar3 = (undefined8 *)plVar4[2];
      plVar6[2] = (long)puVar3;
      puVar3[(long *)*puVar3 != plVar4] = plVar6;
      *plVar6 = (long)plVar4;
      plVar4[2] = (long)plVar6;
      return;
    }
    *(undefined1 *)(plVar6 + 3) = 1;
    bVar8 = plVar4 == param_1;
    *(bool *)(plVar4 + 3) = bVar8;
    *(undefined1 *)(lVar1 + 0x18) = 1;
    param_2 = plVar4;
  }
  return;
}

