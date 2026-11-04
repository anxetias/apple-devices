// name: FUN_1001c6d2a
// address: 1001c6d2a

undefined8 FUN_1001c6d2a(int *param_1,int *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4d536e64)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a9cb4(uVar3);
    }
  }
  else {
    if (((param_2 != (int *)0x0) && (*param_2 == 0x4d526376)) &&
       ((*(long *)(param_2 + 10) != 0 || (*(long *)(param_2 + 0xc) != 0)))) {
      lVar2 = FUN_100131b98(*(undefined8 *)(param_1 + 8));
      if (lVar2 == 0) {
        return 0xffffffce;
      }
      if (*(long *)(lVar2 + 0x18) != 0) {
        if (param_1[2] == 0) {
          FUN_1001c6b11(param_1);
        }
        else {
          *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x18) = 1;
        }
        param_1[3] = param_1[3] + 1;
        lVar2 = FUN_100131b98(*(undefined8 *)(param_2 + 8));
        if ((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) {
          FUN_1001c6ad8(param_2);
          param_2[2] = param_2[2] + 1;
          return 0;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006a9bc8(uVar3);
        }
        FUN_1001782e9(0,0);
        return 0xffffffce;
      }
      return 0xffffffce;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a9c3e(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

