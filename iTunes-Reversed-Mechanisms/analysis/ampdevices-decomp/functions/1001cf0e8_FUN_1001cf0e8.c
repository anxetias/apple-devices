// name: FUN_1001cf0e8
// address: 1001cf0e8

int FUN_1001cf0e8(undefined4 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006afd5a(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  else {
    puVar3 = (undefined8 *)FUN_1001c6429(0x70);
    if (puVar3 == (undefined8 *)0x0) {
      iVar5 = -0x6c;
      puVar3 = (undefined8 *)0x0;
    }
    else {
      iVar5 = 0;
      iVar2 = FUN_1001dcbb8(puVar3 + 3,0);
      if (iVar2 == 0) {
        *puVar3 = 0x1534c7374;
        *(undefined4 *)((long)puVar3 + 0xc) = param_1;
      }
      else {
        FUN_1001c64c1(puVar3);
        puVar3 = (undefined8 *)0x0;
        iVar5 = iVar2;
      }
    }
    *param_2 = puVar3;
  }
  return iVar5;
}

