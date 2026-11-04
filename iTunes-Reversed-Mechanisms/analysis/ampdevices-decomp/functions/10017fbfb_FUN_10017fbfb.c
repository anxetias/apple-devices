// name: FUN_10017fbfb
// address: 10017fbfb

byte FUN_10017fbfb(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068764e(uVar2);
    }
    bVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    bVar3 = (byte)*(ushort *)(param_1 + 1);
    if ((*(ushort *)(param_1 + 1) & 7) == 0) {
      FUN_1001898d9(param_1);
      bVar3 = (byte)(short)param_1[1];
    }
    bVar3 = bVar3 >> 1 & 1;
  }
  return bVar3;
}

