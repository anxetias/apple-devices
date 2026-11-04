// name: FUN_10015b9d1
// address: 10015b9d1

int FUN_10015b9d1(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  int local_2c;
  
  cVar2 = FUN_10015b91e();
  uVar8 = 0;
  if ((param_1 != 0) && (uVar8 = 0, cVar2 != '\0')) {
    lVar3 = FUN_1001c627e(param_1);
    iVar6 = 0xc;
    if (param_2 != 0) {
      iVar6 = param_2;
    }
    uVar7 = *(ushort *)(lVar3 + 0xe + (long)iVar6);
    uVar7 = uVar7 << 8 | uVar7 >> 8;
    uVar8 = (uint)uVar7;
    if (param_3 != 0) {
      puVar4 = (uint *)FUN_10015baa6(param_1,param_2,param_3,1,0,&local_2c,0);
      if (puVar4 == (uint *)0x0) {
        uVar8 = 0;
      }
      else {
        iVar6 = (int)(short)uVar7;
        uVar5 = 0;
        uVar8 = 0;
        if (local_2c <= iVar6) {
          do {
            uVar1 = puVar4[1];
            uVar8 = uVar5;
            if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) !=
                param_3) break;
            uVar8 = *puVar4;
            puVar4 = (uint *)((long)puVar4 +
                             (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8
                                    | uVar8 << 0x18));
            uVar5 = uVar5 + 1;
            uVar8 = (iVar6 - local_2c) + 1;
          } while ((iVar6 - local_2c) + 1U != uVar5);
        }
      }
    }
  }
  return (int)(short)uVar8;
}

