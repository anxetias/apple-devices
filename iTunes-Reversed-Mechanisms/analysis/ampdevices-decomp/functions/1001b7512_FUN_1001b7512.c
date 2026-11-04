// name: FUN_1001b7512
// address: 1001b7512

void FUN_1001b7512(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  plVar5 = (long *)*param_2;
  plVar8 = param_2;
  if (plVar5 == (long *)0x0) {
LAB_1001b7538:
    plVar5 = (long *)plVar8[1];
    if (plVar5 == (long *)0x0) {
      puVar9 = (undefined8 *)plVar8[2];
      bVar2 = true;
      plVar5 = (long *)0x0;
      goto LAB_1001b7557;
    }
  }
  else {
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar8 = plVar4;
        plVar4 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
      goto LAB_1001b7538;
    }
  }
  puVar9 = (undefined8 *)plVar8[2];
  plVar5[2] = (long)puVar9;
  bVar2 = false;
LAB_1001b7557:
  plVar4 = (long *)*puVar9;
  if (plVar4 == plVar8) {
    *puVar9 = plVar5;
    if (plVar8 == param_1) {
      plVar4 = (long *)0x0;
      param_1 = plVar5;
    }
    else {
      plVar4 = (long *)puVar9[1];
    }
  }
  else {
    puVar9[1] = plVar5;
  }
  lVar3 = plVar8[3];
  if (plVar8 != param_2) {
    puVar9 = (undefined8 *)param_2[2];
    plVar8[2] = (long)puVar9;
    puVar9[(long *)*puVar9 != param_2] = plVar8;
    lVar1 = *param_2;
    *plVar8 = lVar1;
    *(long **)(lVar1 + 0x10) = plVar8;
    lVar1 = param_2[1];
    plVar8[1] = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = plVar8;
    }
    *(char *)(plVar8 + 3) = (char)param_2[3];
    if (param_1 == param_2) {
      param_1 = plVar8;
    }
  }
  if ((param_1 != (long *)0x0) && ((char)lVar3 != '\0')) {
    if (bVar2) {
      while( true ) {
        plVar5 = (long *)plVar4[2];
        plVar8 = (long *)*plVar5;
        if (plVar8 == plVar4) break;
        if ((char)plVar4[3] == '\0') {
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar5 + 3) = 0;
          plVar8 = (long *)plVar5[1];
          lVar3 = *plVar8;
          plVar5[1] = lVar3;
          if (lVar3 != 0) {
            *(long **)(lVar3 + 0x10) = plVar5;
          }
          puVar9 = (undefined8 *)plVar5[2];
          plVar8[2] = (long)puVar9;
          puVar9[(long *)*puVar9 != plVar5] = plVar8;
          *plVar8 = (long)plVar5;
          plVar5[2] = (long)plVar8;
          if (param_1 == (long *)*plVar4) {
            param_1 = plVar4;
          }
          plVar4 = (long *)((long *)*plVar4)[1];
        }
        plVar5 = (long *)*plVar4;
        if ((plVar5 != (long *)0x0) && ((char)plVar5[3] != '\x01')) {
          plVar8 = (long *)plVar4[1];
          if (plVar8 != (long *)0x0) goto LAB_1001b7734;
LAB_1001b773a:
          *(undefined1 *)(plVar5 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          lVar3 = plVar5[1];
          *plVar4 = lVar3;
          if (lVar3 != 0) {
            *(long **)(lVar3 + 0x10) = plVar4;
          }
          puVar9 = (undefined8 *)plVar4[2];
          plVar5[2] = (long)puVar9;
          puVar9[(long *)*puVar9 != plVar4] = plVar5;
          plVar5[1] = (long)plVar4;
          plVar4[2] = (long)plVar5;
          plVar7 = plVar5;
          plVar8 = plVar4;
LAB_1001b7777:
          plVar4 = (long *)plVar7[2];
          *(char *)(plVar7 + 3) = (char)plVar4[3];
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar8 + 3) = 1;
          plVar5 = (long *)plVar4[1];
          lVar3 = *plVar5;
          plVar4[1] = lVar3;
          if (lVar3 != 0) {
            *(long **)(lVar3 + 0x10) = plVar4;
          }
          plVar8 = (long *)plVar4[2];
          plVar5[2] = (long)plVar8;
          plVar8[(long *)*plVar8 != plVar4] = (long)plVar5;
          *plVar5 = (long)plVar4;
LAB_1001b7849:
          plVar4[2] = (long)plVar5;
          return;
        }
        plVar8 = (long *)plVar4[1];
        if ((plVar8 != (long *)0x0) && ((char)plVar8[3] != '\x01')) {
LAB_1001b7734:
          plVar7 = plVar4;
          if ((char)plVar8[3] == '\x01') goto LAB_1001b773a;
          goto LAB_1001b7777;
        }
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar5 = (long *)plVar4[2];
        if ((plVar5 == param_1) || ((char)plVar5[3] == '\0')) goto LAB_1001b7722;
LAB_1001b7704:
        plVar4 = (long *)((undefined8 *)plVar5[2])[*(long **)plVar5[2] == plVar5];
      }
      if ((char)plVar4[3] == '\0') {
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(plVar5 + 3) = 0;
        lVar3 = plVar8[1];
        *plVar5 = lVar3;
        if (lVar3 != 0) {
          *(long **)(lVar3 + 0x10) = plVar5;
        }
        puVar9 = (undefined8 *)plVar5[2];
        plVar8[2] = (long)puVar9;
        puVar9[(long *)*puVar9 != plVar5] = plVar8;
        plVar8[1] = (long)plVar5;
        plVar5[2] = (long)plVar8;
        if (param_1 == (long *)plVar4[1]) {
          param_1 = plVar4;
        }
        plVar4 = *(long **)plVar4[1];
      }
      plVar5 = (long *)*plVar4;
      if ((plVar5 == (long *)0x0) || (bVar6 = *(byte *)(plVar5 + 3), bVar6 == 1)) {
        plVar8 = (long *)plVar4[1];
        if ((plVar8 == (long *)0x0) || ((char)plVar8[3] == '\x01')) {
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar5 = (long *)plVar4[2];
          if (((char)plVar5[3] == '\x01') && (plVar5 != param_1)) goto LAB_1001b7704;
LAB_1001b7722:
          *(undefined1 *)(plVar5 + 3) = 1;
          return;
        }
        if (plVar5 != (long *)0x0) {
          bVar6 = *(byte *)(plVar5 + 3);
          goto LAB_1001b77c4;
        }
LAB_1001b77cd:
        *(undefined1 *)(plVar8 + 3) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        lVar3 = *plVar8;
        plVar4[1] = lVar3;
        if (lVar3 != 0) {
          *(long **)(lVar3 + 0x10) = plVar4;
        }
        puVar9 = (undefined8 *)plVar4[2];
        plVar8[2] = (long)puVar9;
        puVar9[(long *)*puVar9 != plVar4] = plVar8;
        *plVar8 = (long)plVar4;
        plVar4[2] = (long)plVar8;
        plVar5 = plVar4;
      }
      else {
LAB_1001b77c4:
        plVar8 = plVar4;
        if ((bVar6 & 1) != 0) {
          plVar8 = (long *)plVar4[1];
          goto LAB_1001b77cd;
        }
      }
      plVar4 = (long *)plVar8[2];
      *(char *)(plVar8 + 3) = (char)plVar4[3];
      *(undefined1 *)(plVar4 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      plVar5 = (long *)*plVar4;
      lVar3 = plVar5[1];
      *plVar4 = lVar3;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 0x10) = plVar4;
      }
      puVar9 = (undefined8 *)plVar4[2];
      plVar5[2] = (long)puVar9;
      puVar9[(long *)*puVar9 != plVar4] = plVar5;
      plVar5[1] = (long)plVar4;
      goto LAB_1001b7849;
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}

