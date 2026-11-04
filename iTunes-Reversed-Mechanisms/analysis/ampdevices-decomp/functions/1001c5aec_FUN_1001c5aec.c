// name: FUN_1001c5aec
// address: 1001c5aec

void FUN_1001c5aec(int *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x46697841)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a8ba2(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  else {
    for (lVar1 = *(long *)(param_1 + 4); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
      if ((*(undefined8 **)(lVar1 + 0x20) <= param_2) && (param_2 <= *(undefined8 **)(lVar1 + 0x28))
         ) {
        uVar3 = *(uint *)(lVar1 + 0x18);
        uVar5 = *(uint *)(lVar1 + 0x1c);
        if (uVar3 <= uVar5) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_1006a8b2c(uVar4);
          }
          FUN_1001782e9(0,0);
          uVar3 = *(uint *)(lVar1 + 0x18);
          uVar5 = *(uint *)(lVar1 + 0x1c);
        }
        *(uint *)(lVar1 + 0x1c) = uVar5 + 1;
        if ((uVar5 + 1 == uVar3) &&
           ((lVar1 != *(long *)(param_1 + 4) || (*(long *)(lVar1 + 0x10) != 0)))) {
          FUN_1001c57ee(lVar1);
          return;
        }
        *param_2 = *(undefined8 *)(lVar1 + 0x30);
        *(undefined8 **)(lVar1 + 0x30) = param_2;
        return;
      }
    }
  }
  return;
}

