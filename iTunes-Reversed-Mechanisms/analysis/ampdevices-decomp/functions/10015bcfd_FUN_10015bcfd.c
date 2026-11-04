// name: FUN_10015bcfd
// address: 10015bcfd

ulong FUN_10015bcfd(long param_1,int param_2,int param_3,long param_4)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  sVar1 = -0x32;
  if (param_1 != 0) {
    if (param_3 == 0 || param_4 != 0) {
      lVar2 = FUN_1001c627e();
      iVar4 = 0xc;
      if (param_2 != 0) {
        iVar4 = param_2;
      }
      uVar5 = *(uint *)(lVar2 + iVar4);
      iVar7 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) -
              0x14;
      sVar1 = FUN_10015be89(param_1,param_2 + 0x14,iVar7,param_3);
      if (sVar1 == 0) {
        lVar2 = FUN_1001c627e(param_1);
        uVar5 = param_3 + 0x14;
        puVar6 = (uint *)(iVar4 + lVar2);
        *puVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                  uVar5 * 0x1000000;
        FUN_1001c631b(param_4,puVar6 + 5,(long)param_3);
        uVar3 = FUN_10015c522(param_1,param_2,param_3 - iVar7,0);
        return uVar3;
      }
    }
  }
  return (ulong)(uint)(int)sVar1;
}

