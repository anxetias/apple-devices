// name: FUN_100115618
// address: 100115618

undefined8 FUN_100115618(long param_1,long param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_38;
  
  if (*(char *)(param_1 + 0xa8) == '\0') {
    uVar10 = 0;
  }
  else {
    lVar11 = 1;
    uVar13 = 0;
    local_38 = 0;
    do {
      iVar4 = **(int **)(param_1 + 0x78 + uVar13 * 8);
      bVar1 = *(byte *)(*(long *)(param_1 + 0xa0) + -1 + lVar11);
      uVar12 = (ulong)bVar1;
      cVar2 = *(char *)(*(long *)(param_1 + 0xa0) + lVar11);
      iVar8 = (int)local_38;
      if (cVar2 == '\x03') {
        lVar3 = **(long **)(param_1 + 0xc260 + uVar12 * 8);
        if (lVar3 == 0) {
          return 0xfffffffe;
        }
        FUN_100119916(*(undefined8 *)(param_1 + 0xc2c0),0,lVar3,0,0,
                      *(undefined8 *)(param_2 + uVar12 * 8),0,0);
        iVar4 = FUN_100119958(*(long *)(param_1 + 0xc2c0),
                              *(undefined8 *)(*(long *)(param_1 + 0xc2c0) + 0x48));
        if (iVar4 != 0) {
          return 0xfffffffe;
        }
        *(long *)(param_3 + local_38 * 8) = **(long **)(param_1 + 0xc260 + uVar12 * 8) + 0xe60;
        local_38 = (ulong)(iVar8 + 1);
LAB_100115aaa:
        uVar10 = 0;
      }
      else {
        if (cVar2 == '\x01') {
          lVar7 = uVar12 * 0xea0 + param_1 + 0x468;
          *(long *)(param_1 + 0xc108) = lVar7;
          *(long *)(param_1 + 0xc110) = lVar7 + 0xea0;
          plVar9 = *(long **)(param_1 + 0xc260 + uVar12 * 8);
          lVar3 = plVar9[1];
          uVar10 = *(undefined8 *)(*(long *)(param_1 + 0xc268 + uVar12 * 8) + 8);
          if (iVar4 == 2) {
            FUN_100115ae4(param_1,*(undefined8 *)(param_1 + 0x78 + uVar13 * 8),lVar7,lVar3,uVar10);
            cVar2 = *(char *)(param_1 + 0xc137);
            FUN_100115ae4(param_1,*(undefined8 *)(param_1 + 0x78 + uVar13 * 8),
                          *(undefined8 *)(param_1 + 0xc110),uVar10,lVar3);
            if ((cVar2 == '\0') && (*(char *)(param_1 + 0xc137) != '\0')) {
              FUN_100115ae4(param_1,*(undefined8 *)(param_1 + 0x78 + uVar13 * 8),
                            *(undefined8 *)(param_1 + 0xc108),lVar3,uVar10);
            }
            iVar5 = FUN_100115cd2(param_1,*(undefined8 *)(param_1 + 0x78 + uVar13 * 8),
                                  *(undefined8 *)(param_1 + 0xc108),lVar3);
            iVar6 = FUN_100115cd2(param_1,*(undefined8 *)(param_1 + 0x78 + uVar13 * 8),
                                  *(undefined8 *)(param_1 + 0xc110),uVar10);
            if (iVar6 != 0 || iVar5 != 0) {
              return 0xfffffffe;
            }
            lVar7 = *(long *)(param_1 + 0xc108);
            if (*(int *)(lVar7 + 0xc10) != 0) {
              iVar5 = FUN_100115eee(param_1,*(undefined8 *)(param_1 + 0x78 + uVar13 * 8));
              if (iVar5 != 0) {
                return 0xfffffffe;
              }
              lVar7 = *(long *)(param_1 + 0xc108);
            }
            plVar9 = *(long **)(param_1 + 0xc260 + uVar12 * 8);
            *(undefined1 *)(plVar9[1] + 0x115) =
                 *(undefined1 *)(lVar7 + 0xbbe + (ulong)*(byte *)(lVar7 + 0xbbd));
            *(undefined1 *)(*(long *)(*(long *)(param_1 + 0xc268 + uVar12 * 8) + 8) + 0x115) =
                 *(undefined1 *)
                  (*(long *)(param_1 + 0xc110) + 0xbbe +
                  (ulong)*(byte *)(*(long *)(param_1 + 0xc110) + 0xbbd));
          }
          if (*plVar9 == 0) {
            return 0xfffffffe;
          }
          FUN_100119916(*(undefined8 *)(param_1 + 0xc2c0),
                        *(undefined8 *)(param_1 + 0x78 + uVar13 * 8),*plVar9,lVar7,lVar3,
                        *(undefined8 *)(param_2 + (ulong)((uint)bVar1 * 8)),0,iVar4 == 2);
          lVar3 = **(long **)(param_1 + 0xc268 + (ulong)((uint)bVar1 * 8));
          if (lVar3 == 0) {
            return 0xfffffffe;
          }
          FUN_100119916(*(undefined8 *)(param_1 + 0xc2c0),
                        *(undefined8 *)(param_1 + 0x78 + uVar13 * 8),lVar3,
                        *(undefined8 *)(param_1 + 0xc110),uVar10,
                        *(undefined8 *)(param_2 + 8 + uVar12 * 8),1,iVar4 == 2);
          iVar4 = FUN_1001160be(*(undefined8 *)(param_1 + 0xc2c0));
          if (iVar4 != 0) {
            return 0xfffffffe;
          }
          *(long *)(param_3 + local_38 * 8) = **(long **)(param_1 + 0xc260 + uVar12 * 8) + 0xe60;
          *(long *)(param_3 + (ulong)(iVar8 + 1) * 8) =
               **(long **)(param_1 + 0xc268 + uVar12 * 8) + 0xe60;
          local_38 = (ulong)(iVar8 + 2);
          goto LAB_100115aaa;
        }
        uVar10 = 0xfffffffe;
        if (cVar2 == '\0') {
          lVar7 = uVar12 * 0xea0 + param_1 + 0x468;
          *(long *)(param_1 + 0xc108) = lVar7;
          plVar9 = *(long **)(param_1 + 0xc260 + uVar12 * 8);
          lVar3 = plVar9[1];
          if (iVar4 == 2) {
            FUN_100115ae4(param_1,*(undefined8 *)(param_1 + 0x78 + uVar13 * 8),lVar7,lVar3,0);
            iVar4 = FUN_100115cd2(param_1,*(undefined8 *)(param_1 + 0x78 + uVar13 * 8),
                                  *(undefined8 *)(param_1 + 0xc108),lVar3);
            if (iVar4 != 0) {
              return 0xfffffffe;
            }
            plVar9 = *(long **)(param_1 + 0xc260 + uVar12 * 8);
            *(undefined1 *)(plVar9[1] + 0x115) =
                 *(undefined1 *)
                  (*(long *)(param_1 + 0xc108) + 0xbbe +
                  (ulong)*(byte *)(*(long *)(param_1 + 0xc108) + 0xbbd));
          }
          if (*plVar9 == 0) {
            return 0xfffffffe;
          }
          FUN_100119916(*(undefined8 *)(param_1 + 0xc2c0),
                        *(undefined8 *)(param_1 + 0x78 + uVar13 * 8));
          iVar4 = FUN_100119958(*(long *)(param_1 + 0xc2c0),
                                *(undefined8 *)(*(long *)(param_1 + 0xc2c0) + 0x48));
          *(long *)(param_3 + local_38 * 8) =
               **(long **)(param_1 + 0xc260 + (ulong)((uint)bVar1 * 8)) + 0xe60;
          if (iVar4 != 0) {
            return 0xfffffffe;
          }
          local_38 = (ulong)(iVar8 + 1);
          goto LAB_100115aaa;
        }
      }
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 0x404;
    } while (uVar13 < *(byte *)(param_1 + 0xa8));
  }
  return uVar10;
}

