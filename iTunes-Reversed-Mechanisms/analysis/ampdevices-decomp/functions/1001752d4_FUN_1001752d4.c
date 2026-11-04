// name: FUN_1001752d4
// address: 1001752d4

int FUN_1001752d4(undefined8 *param_1)

{
  char cVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  puVar3 = (undefined8 *)FUN_1001c6429(0x60);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100681a54(uVar4);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  *puVar3 = 0x163687064;
  sVar2 = FUN_10015b468(puVar3 + 3);
  if (sVar2 == 0) {
    *(undefined4 *)((long)puVar3 + 0x14) = 0;
    iVar5 = FUN_10017599b(puVar3,0,0,0);
    if (iVar5 == -0x80) goto LAB_1001753be;
    if (iVar5 == 0) {
      *param_1 = puVar3;
      return 0;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10068197c(iVar5,uVar4);
    }
  }
  else {
    iVar5 = -0x80;
    if (sVar2 == -0x80) goto LAB_1001753be;
    iVar5 = (int)sVar2;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006819e8(iVar5,uVar4);
    }
  }
  if (iVar5 == 0) {
    return 0;
  }
LAB_1001753be:
  FUN_100175403(puVar3);
  *param_1 = 0;
  return iVar5;
}

