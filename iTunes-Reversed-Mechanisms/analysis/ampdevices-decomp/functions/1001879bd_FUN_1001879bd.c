// name: FUN_1001879bd
// address: 1001879bd

int FUN_1001879bd(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  char local_80 [80];
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10068d29f(uVar4);
    }
LAB_100187ad9:
    FUN_1001782e9(0,0);
    return -0x32;
  }
  if (param_3 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10068d229(uVar4);
    }
    goto LAB_100187ad9;
  }
  puVar3 = (undefined4 *)0x0;
  iVar2 = FUN_10017d406(param_1,0,local_80,0);
  if (iVar2 == -0x80) goto LAB_100187bbe;
  if (iVar2 == 0) {
    if (local_80[0] == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10068d147(uVar4);
      }
      puVar3 = (undefined4 *)0x0;
      FUN_1001782e9(0,0);
      iVar2 = -0x57f;
      goto LAB_100187bbe;
    }
    puVar3 = (undefined4 *)FUN_1001c6429(0x450);
    if (puVar3 == (undefined4 *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10068d0d1(uVar4);
      }
      puVar3 = (undefined4 *)0x0;
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
      goto LAB_100187bbe;
    }
    *puVar3 = 0x44697249;
    _memcpy(puVar3 + 2,param_1,0x420);
    puVar3[0x10a] = param_2;
    iVar2 = (**(code **)(*(long *)(param_1 + 4) + 0x120))(puVar3);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10068d065(iVar2,uVar4);
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10068d1bd(iVar2,uVar4);
    }
    puVar3 = (undefined4 *)0x0;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (puVar3 != (undefined4 *)0x0) {
      FUN_1001c64c1(puVar3);
    }
    puVar3 = (undefined4 *)0x0;
  }
LAB_100187bbe:
  *param_3 = puVar3;
  return iVar2;
}

