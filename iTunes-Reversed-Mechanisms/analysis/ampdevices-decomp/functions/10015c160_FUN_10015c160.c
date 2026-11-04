// name: FUN_10015c160
// address: 10015c160

int FUN_10015c160(undefined8 param_1,int param_2,uint param_3,uint param_4,short param_5,int param_6
                 ,long param_7,int *param_8)

{
  char cVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  
  cVar1 = FUN_10015b91e();
  if (cVar1 == '\0') {
    sVar2 = -0x83a;
    goto LAB_10015c1c0;
  }
  if (param_3 == 0) {
    sVar2 = -0x83c;
    goto LAB_10015c1c0;
  }
  lVar4 = FUN_1001c627e(param_1);
  sVar2 = -0x75;
  if (*(short *)(lVar4 + 10) == 0) {
    if (param_4 == 0) {
      cVar1 = FUN_10015b91e(param_1,param_2);
      if (cVar1 == '\0') {
        sVar2 = -0x83a;
      }
      else {
        sVar2 = 1;
        do {
          param_4 = (uint)sVar2;
          lVar4 = FUN_10015baa6(param_1,param_2,param_3,0,param_4,0,0);
          sVar12 = sVar2 + 1;
          if (sVar2 == 0) break;
          sVar2 = sVar12;
        } while (lVar4 != 0);
        sVar2 = -0x6c;
        if (sVar12 != 1) goto LAB_10015c266;
      }
    }
    else {
      lVar4 = FUN_10015baa6(param_1,param_2,param_3,0,param_4,0,0);
      sVar2 = -0x839;
      if (lVar4 != 0) goto LAB_10015c1c0;
LAB_10015c266:
      FUN_10015bf94(param_1);
      iVar3 = 0xc;
      if (param_2 != 0) {
        iVar3 = param_2;
      }
      lVar4 = FUN_1001c627e(param_1);
      lVar9 = (long)iVar3;
      uVar10 = *(uint *)(lVar4 + lVar9);
      uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
      sVar12 = *(short *)(lVar4 + 0xe + lVar9);
      sVar2 = -0x83d;
      if (uVar10 < 0x15 || sVar12 != 0) {
        if (param_5 == 0) {
          param_5 = FUN_10015b9d1(param_1,iVar3,param_3);
          param_5 = param_5 + 1;
        }
        sVar2 = -0x32;
        if ((0 < param_5) && (param_6 == 0 || param_7 != 0)) {
          iVar11 = uVar10 - 0x14;
          lVar4 = FUN_10015baa6(param_1,iVar3,param_3,(int)param_5,0,0,0);
          if (lVar4 == 0) {
            if (param_5 == 1) {
              lVar4 = FUN_1001c627e(param_1);
              lVar4 = (long)iVar11 + lVar4 + lVar9 + 0x14;
            }
            else {
              puVar5 = (uint *)FUN_10015baa6(param_1,iVar3,param_3,(int)(short)(param_5 + -1),0,0,0)
              ;
              if (puVar5 == (uint *)0x0) {
                sVar2 = -0x838;
                goto LAB_10015c1aa;
              }
              uVar10 = *puVar5;
              lVar4 = (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                             uVar10 << 0x18) + (long)puVar5;
            }
          }
          lVar6 = FUN_1001c627e(param_1);
          if (sVar12 != 0) {
            iVar11 = 0;
          }
          iVar11 = (param_6 - iVar11) + 0x14;
          FUN_10015c4ba(param_1);
          sVar2 = FUN_10015be89(param_1,lVar4 - lVar6 & 0xffffffff,0,iVar11);
          FUN_10015bf94(param_1);
          if (sVar2 == 0) {
            lVar7 = FUN_1001c627e(param_1);
            uVar10 = *(uint *)(lVar7 + lVar9);
            uVar10 = (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18) + iVar11;
            *(uint *)(lVar7 + lVar9) =
                 uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                 uVar10 * 0x1000000;
            uVar8 = *(ushort *)(lVar7 + 0xe + lVar9);
            uVar8 = (uVar8 << 8 | uVar8 >> 8) + 1;
            *(ushort *)(lVar7 + 0xe + lVar9) = uVar8 * 0x100 | uVar8 >> 8;
            sVar2 = FUN_10015c522(param_1,iVar3,iVar11,0);
            if (sVar2 == 0) {
              uVar10 = param_6 + 0x14;
              lVar9 = FUN_1001c627e(param_1);
              iVar3 = (int)(lVar4 - lVar6);
              lVar4 = 0xc;
              if (iVar3 != 0) {
                lVar4 = (long)iVar3;
              }
              *(uint *)(lVar9 + lVar4) =
                   uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar10 * 0x1000000;
              *(uint *)(lVar9 + 4 + lVar4) =
                   param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
                   param_3 << 0x18;
              *(uint *)(lVar9 + 8 + lVar4) =
                   param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
                   param_4 << 0x18;
              *(undefined8 *)(lVar9 + 0xc + lVar4) = 0;
              if (param_7 != 0) {
                FUN_1001c631b(param_7,lVar9 + lVar4 + 0x14,(long)param_6);
              }
              if (param_8 != (int *)0x0) {
                iVar3 = FUN_1001c627e(param_1);
                *param_8 = (int)(lVar9 + lVar4) - iVar3;
              }
              sVar2 = 0;
            }
          }
        }
      }
    }
  }
LAB_10015c1aa:
  FUN_10015c4ba(param_1);
LAB_10015c1c0:
  return (int)sVar2;
}

