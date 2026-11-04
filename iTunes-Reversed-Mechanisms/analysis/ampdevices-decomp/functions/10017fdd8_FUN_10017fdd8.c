// name: FUN_10017fdd8
// address: 10017fdd8

int FUN_10017fdd8(undefined8 param_1,short param_2,undefined4 param_3,code *param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  
  if (param_4 == (code *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_100687812(uVar5);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  puVar4 = (undefined2 *)FUN_1001c6429(0x690);
  if (puVar4 == (undefined2 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_10068779c(uVar5);
    }
    FUN_1001782e9(0,0);
    return -0x6c;
  }
  *puVar4 = 0;
  puVar4[1] = param_2;
  *(code **)(puVar4 + 0x340) = param_4;
  *(undefined8 *)(puVar4 + 0x344) = param_5;
  *(undefined4 *)(puVar4 + 0x33c) = param_3;
  pcVar1 = (char *)(puVar4 + 0x214);
  puVar6 = puVar4 + 0x23c;
  iVar3 = FUN_10017d406(param_1,0,pcVar1,puVar6);
  if (iVar3 == -0x80) goto LAB_10017ff65;
  if (iVar3 != 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006876c4(iVar3,uVar5);
    }
    if (iVar3 != 0) goto LAB_10017ff65;
  }
  cVar2 = FUN_100182545(puVar4,param_1,pcVar1,puVar6);
  if (cVar2 != '\0') {
    iVar3 = 0;
    if ((((*(byte *)(puVar4 + 0x33c) & 1) == 0) &&
        (iVar3 = (*param_4)(param_1,pcVar1,puVar6,*puVar4,param_5), iVar3 != -0x80)) && (iVar3 != 0)
       ) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_100687730(iVar3,uVar5);
      }
      goto LAB_10017ff65;
    }
    if (param_2 == 0 || iVar3 != 0) goto LAB_10017ff65;
    if (*pcVar1 != '\0') {
      iVar3 = FUN_100182619(param_1,puVar4);
      goto LAB_10017ff65;
    }
  }
  iVar3 = 0;
LAB_10017ff65:
  FUN_1001c64c1(puVar4);
  return iVar3;
}

