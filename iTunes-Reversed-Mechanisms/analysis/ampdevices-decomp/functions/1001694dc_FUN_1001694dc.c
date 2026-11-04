// name: FUN_1001694dc
// address: 1001694dc

bool FUN_1001694dc(undefined8 param_1,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ulong local_20;
  
  cVar2 = FUN_100172017(param_1,4,&local_20);
  bVar1 = local_20 >> 0x20 == 0;
  uVar3 = (undefined4)local_20;
  if (!bVar1 || cVar2 == '\0') {
    uVar3 = 0;
  }
  *param_2 = uVar3;
  return bVar1 && cVar2 != '\0';
}

