// name: FUN_10015fd4e
// address: 10015fd4e

bool FUN_10015fd4e(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  byte *pbVar6;
  
  bVar2 = *(byte *)*param_1;
  iVar3 = *(int *)(param_1 + 2);
  uVar1 = iVar3 + 1;
  pbVar6 = (byte *)*param_1 + (uVar1 >> 3);
  *param_1 = pbVar6;
  *(uint *)(param_1 + 2) = uVar1 & 7;
  if ((byte *)param_1[1] < pbVar6) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      FUN_10066e921(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  return (bVar2 >> ((byte)(7 - (char)iVar3) & 0x1f) & 1) != 0;
}

