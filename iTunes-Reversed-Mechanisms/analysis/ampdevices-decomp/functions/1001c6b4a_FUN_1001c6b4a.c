// name: FUN_1001c6b4a
// address: 1001c6b4a

undefined8 FUN_1001c6b4a(int *param_1,int *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int *local_38;
  undefined1 local_29;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4d536e64)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a9b52(uVar4);
    }
LAB_1001c6bef:
    FUN_1001782e9(0,0);
    return 0xffffffce;
  }
  if (((param_2 == (int *)0x0) || (*param_2 != 0x4d526376)) ||
     ((*(long *)(param_2 + 10) == 0 && (*(long *)(param_2 + 0xc) == 0)))) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a9adc(uVar4);
    }
    goto LAB_1001c6bef;
  }
  local_38 = param_2;
  lVar2 = FUN_100131b98(*(undefined8 *)(param_1 + 8));
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x18), lVar2 == 0)) {
    lVar2 = FUN_1001c6429(0x20);
    if (lVar2 == 0) goto LAB_1001c6ced;
    *(int **)(lVar2 + 0x10) = param_2;
    FUN_1001c7a1a(param_1 + 4,param_1 + 6,lVar2);
    local_38 = (int *)(lVar2 + 0x10);
    lVar3 = FUN_1001c7b30(*(undefined8 *)(param_1 + 8),(int *)(lVar2 + 0x10),&DAT_100712240,
                          &local_38,&local_29);
    *(long *)(lVar3 + 0x18) = lVar2;
  }
  else {
    *(undefined1 *)(lVar2 + 0x18) = 0;
  }
  param_1[3] = param_1[3] + 1;
  local_38 = param_1;
  lVar3 = FUN_100131b98(*(undefined8 *)(param_2 + 8));
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
    return 0;
  }
  lVar3 = FUN_1001c6429(0x18);
  if (lVar3 != 0) {
    *(int **)(lVar3 + 0x10) = param_1;
    FUN_1001c7f44(param_2 + 4,param_2 + 6,lVar3);
    local_38 = (int *)(lVar3 + 0x10);
    lVar2 = FUN_1001c805a(*(undefined8 *)(param_2 + 8),(int *)(lVar3 + 0x10),&DAT_100712240,
                          &local_38,&local_29);
    *(long *)(lVar2 + 0x18) = lVar3;
    param_2[2] = param_2[2] + 1;
    return 0;
  }
  FUN_1001c6b11(param_1,lVar2);
LAB_1001c6ced:
  uVar4 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar4,0x10);
  if (cVar1 == '\0') {
    return 0xffffff94;
  }
  FUN_1006a9a69(uVar4);
  return 0xffffff94;
}

