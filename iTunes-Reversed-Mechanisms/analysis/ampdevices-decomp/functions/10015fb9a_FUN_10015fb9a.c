// name: FUN_10015fb9a
// address: 10015fb9a

uint FUN_10015fb9a(undefined8 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  char cVar6;
  undefined8 uVar7;
  uint uVar8;
  
  if (0x10 < (byte)param_2) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      FUN_10066e749(uVar7);
    }
    FUN_1001782e9(0,0);
  }
  pbVar5 = (byte *)*param_1;
  bVar1 = *pbVar5;
  bVar2 = pbVar5[1];
  bVar3 = pbVar5[2];
  iVar4 = *(int *)(param_1 + 2);
  uVar8 = param_2 + iVar4;
  *param_1 = pbVar5 + (uVar8 >> 3);
  *(uint *)(param_1 + 2) = uVar8 & 7;
  if ((byte *)param_1[1] < pbVar5 + (uVar8 >> 3)) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      FUN_10066e7bf(uVar7);
    }
    FUN_1001782e9(0,0);
  }
  return (((uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar3) << ((byte)iVar4 & 0x1f) & 0xffffff)
         >> (0x18 - (byte)param_2 & 0x1f);
}

