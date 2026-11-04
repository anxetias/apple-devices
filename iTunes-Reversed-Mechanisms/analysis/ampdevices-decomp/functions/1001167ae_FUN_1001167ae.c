// name: FUN_1001167ae
// address: 1001167ae

undefined8 FUN_1001167ae(long *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  iVar3 = (**(code **)(*param_1 + 0x88))();
  uVar7 = 0xfffffffe;
  if (iVar3 == 0) {
    if ((char)param_1[0x15] != '\0') {
      lVar9 = 0;
      uVar11 = 0;
      do {
        if (*(int *)((long)param_1 + uVar11 * 4 + 0xb8) == 1) {
          lVar8 = param_1[0x14];
          cVar2 = *(char *)(lVar8 + 1 + lVar9);
          if (cVar2 != '\x03') {
            if (cVar2 == '\x01') {
              if (*(long *)param_1[(ulong)*(byte *)(lVar8 + lVar9) + 0x184c] == 0) {
                return 0xfffffffe;
              }
              lVar6 = *(long *)param_1[(ulong)*(byte *)(lVar8 + lVar9) + 0x184d];
              if (lVar6 == 0) {
                return 0xfffffffe;
              }
              *(undefined8 *)(*(long *)param_1[(ulong)*(byte *)(lVar8 + lVar9) + 0x184c] + 0x30) =
                   0x100000000;
              *(undefined8 *)(lVar6 + 0x30) = 0x100000000;
              iVar3 = FUN_100116b42(param_1,param_1[uVar11 + 0xf]);
            }
            else {
              if (cVar2 != '\0') {
                return 0xfffffffe;
              }
              if (*(long *)param_1[(ulong)*(byte *)(lVar8 + lVar9) + 0x184c] == 0) {
                return 0xfffffffe;
              }
              *(undefined8 *)(*(long *)param_1[(ulong)*(byte *)(lVar8 + lVar9) + 0x184c] + 0x30) =
                   0x100000000;
              iVar3 = (**(code **)(*param_1 + 0x80))(param_1,param_1[uVar11 + 0xf]);
            }
            if (iVar3 != 0) {
              return 0xfffffffe;
            }
          }
        }
        if (*(int *)param_1[uVar11 + 0xf] == 2) {
          lVar8 = param_1[0x14];
          cVar2 = *(char *)(lVar8 + 1 + lVar9);
          if (cVar2 == '\x01') {
            uVar10 = (ulong)*(byte *)(lVar8 + lVar9);
            cVar2 = *(char *)(*(long *)(param_1[uVar10 + 0x184c] + 8) + 0x116);
            if (cVar2 < '\x01') {
              cVar2 = '\0';
            }
            lVar8 = uVar10 * 0xea0;
            *(char *)((long)param_1 + lVar8 + 0x12ec) = cVar2;
            cVar2 = *(char *)(*(long *)(param_1[uVar10 + 0x184d] + 8) + 0x116);
            if (cVar2 < '\x01') {
              cVar2 = '\0';
            }
            *(char *)((long)param_1 + lVar8 + 0x218c) = cVar2;
            FUN_100116ba4();
            FUN_100116ba4();
            if ((*(int *)((long)param_1 + uVar11 * 4 + 0xb8) == 1) ||
               (*(char *)((long)param_1 + lVar8 + 0x12ec) !=
                *(char *)((long)param_1 + uVar10 * 0x118 + 0xb4fe))) {
              lVar1 = *(long *)param_1[uVar10 + 0x184c];
              lVar6 = lVar1 + 0x40;
              iVar3 = FUN_10011c930(param_1[0x1858],lVar6,(int)*(char *)(param_1[0x1821] + 0xe84),
                                    *(undefined8 *)(param_1[uVar11 + 0xf] + 0x18));
              iVar4 = FUN_1001153b2(param_1,param_1[uVar11 + 0xf],lVar6,
                                    *(undefined1 *)(lVar1 + 0x231));
              if (iVar4 != 0 || iVar3 != 0) {
                return 0xfffffffe;
              }
              plVar5 = (long *)param_1[uVar10 + 0x184d];
              if (*(int *)((long)param_1 + uVar11 * 4 + 0xb8) != 1) goto LAB_100116aa7;
            }
            else {
              plVar5 = (long *)param_1[uVar10 + 0x184d];
LAB_100116aa7:
              if (*(char *)((long)param_1 + lVar8 + 0x218c) == *(char *)(plVar5[1] + 0x116))
              goto LAB_100116b0c;
            }
            lVar8 = *plVar5;
            lVar6 = param_1[0x1822];
          }
          else {
            if (cVar2 != '\0') {
              return 0xfffffffe;
            }
            uVar10 = (ulong)*(byte *)(lVar8 + lVar9);
            cVar2 = *(char *)(*(long *)(param_1[uVar10 + 0x184c] + 8) + 0x116);
            if (cVar2 < '\x01') {
              cVar2 = '\0';
            }
            *(char *)((long)param_1 + uVar10 * 0xea0 + 0x12ec) = cVar2;
            FUN_100116ba4();
            if ((*(int *)((long)param_1 + uVar11 * 4 + 0xb8) != 1) &&
               (*(char *)((long)param_1 + uVar10 * 0xea0 + 0x12ec) ==
                *(char *)((long)param_1 + uVar10 * 0x118 + 0xb4fe))) goto LAB_100116b0c;
            lVar8 = *(long *)param_1[uVar10 + 0x184c];
            lVar6 = param_1[0x1821];
          }
          iVar3 = FUN_10011c930(param_1[0x1858],lVar8 + 0x40,(int)*(char *)(lVar6 + 0xe84),
                                *(undefined8 *)(param_1[uVar11 + 0xf] + 0x18));
          iVar4 = FUN_1001153b2(param_1,param_1[uVar11 + 0xf],lVar8 + 0x40,
                                *(undefined1 *)(lVar8 + 0x231));
          if (iVar4 != 0 || iVar3 != 0) {
            return 0xfffffffe;
          }
        }
LAB_100116b0c:
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 0x404;
      } while (uVar11 < *(byte *)(param_1 + 0x15));
    }
    uVar7 = 0;
  }
  return uVar7;
}

